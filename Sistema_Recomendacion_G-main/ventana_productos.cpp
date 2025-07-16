#include "ventana_productos.h"
#include "ui_ventana_productos.h"
#include "mainwindow.h"
#include "catalogo.h"
#include "recomendacion.h"
#include "productodialog.h"
#include <QListWidgetItem>
#include <QStringList>
#include <QDebug>
#include <QMessageBox>
#include <QRegularExpression>
#include <QIcon>
#include <QFont>
#include <QBrush>
#include <QColor>
#include <vector>
#include <algorithm>

extern ListaProducto catalogoGlobal;

Ventana_Productos::Ventana_Productos(Usuario* usuario, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Ventana_Productos), usuarioActual(usuario)
{
    ui->setupUi(this);

    ui->listWidget_3->setStyleSheet(
        "QListWidget { background-color: #f8f8f8; }"
        "QListWidget::item { border-bottom: 1px solid #e0e0e0; padding: 8px; }"
        "QListWidget::item:selected { background-color: #e0f0ff; }"
        );

    ui->listWidget->setStyleSheet(
        "QListWidget { background-color: #f8f8f8; }"
        "QListWidget::item { border-bottom: 1px solid #e0e0e0; padding: 8px; }"
        "QListWidget::item:selected { background-color: #e0f0ff; }"
        );

    ui->listWidget_2->setStyleSheet(
        "QListWidget { background-color: #f8f8f8; }"
        "QListWidget::item { border-bottom: 1px solid #e0e0e0; padding: 8px; }"
        "QListWidget::item:selected { background-color: #e0f0ff; }"
        );


    connect(ui->listWidget_3, &QListWidget::itemClicked, [this](QListWidgetItem* item) {
        if (item->flags() & Qt::ItemIsSelectable) { // Solo si es seleccionable (no encabezado)
            int id = item->data(Qt::UserRole).toInt();
            mostrarDetallesProducto(id);
        }
    });

    connect(ui->listWidget, &QListWidget::itemClicked, [this](QListWidgetItem* item) {
        if (item->flags() & Qt::ItemIsSelectable) {
            int id = item->data(Qt::UserRole).toInt();
            mostrarDetallesProducto(id);
        }
    });

    connect(ui->listWidget_2, &QListWidget::itemClicked, [this](QListWidgetItem* item) {
        int id = item->data(Qt::UserRole).toInt();
        mostrarDetallesProducto(id);
    });


    connect(ui->pushButton, &QPushButton::clicked, this, &Ventana_Productos::on_pushButton_clicked);


    llenarFiltros();


    cargarProductosPorCategoria("Todas las categorías");
    cargarRecomendaciones();
}

void Ventana_Productos::llenarFiltros()
{

    ui->comboBox->clear();
    ui->comboBox->addItem("Categorias");
    NodoProducto* actualCat = catalogoGlobal;
    QSet<QString> categoriasSet;
    while (actualCat != nullptr) {
        categoriasSet.insert(QString::fromStdString(actualCat->dato.categoria));
        actualCat = actualCat->siguiente;
    }
    for (const QString& categoria : categoriasSet) {
        ui->comboBox->addItem(categoria);
    }


    ui->comboBox_2->clear();
    ui->comboBox_2->addItem("Marca");
    NodoProducto* actualMarca = catalogoGlobal;
    QSet<QString> marcasSet;
    while (actualMarca != nullptr) {
        marcasSet.insert(QString::fromStdString(actualMarca->dato.marca));
        actualMarca = actualMarca->siguiente;
    }
    for (const QString& marca : marcasSet) {
        ui->comboBox_2->addItem(marca);
    }

    QStringList precios = {"10", "20", "30", "40", "50", "60", "70", "80", "90", "100",
                           "110", "120", "130", "140", "150", "160", "170", "180", "190", "200"};

    ui->comboBox_3->clear();
    ui->comboBox_3->addItem("Precio min");
    for (const QString& precio : precios) {
        ui->comboBox_3->addItem(precio + "$");
    }

    ui->comboBox_4->clear();
    ui->comboBox_4->addItem("Precio Max");
    for (const QString& precio : precios) {
        ui->comboBox_4->addItem(precio + "$");
    }
}


void Ventana_Productos::on_categoriaComboBox_currentIndexChanged(const QString &categoria)
{
    cargarProductosPorCategoria(categoria);
}

void Ventana_Productos::cargarProductosPorCategoria(const QString& categoriaFiltro)
{
    ui->listWidget_3->clear();


    QMap<QString, QList<Producto>> productosPorCategoria;

    NodoProducto* actual = catalogoGlobal;
    while (actual != nullptr) {
        QString categoria = QString::fromStdString(actual->dato.categoria);

        if (categoriaFiltro == "Todas las categorías" || categoria == categoriaFiltro) {
            productosPorCategoria[categoria].append(actual->dato);
        }
        actual = actual->siguiente;
    }


    for (auto it = productosPorCategoria.begin(); it != productosPorCategoria.end(); ++it) {
        QString categoria = it.key();
        QList<Producto> productos = it.value();


        QListWidgetItem* headerItem = new QListWidgetItem("--- " + categoria.toUpper() + " ---");
        headerItem->setFlags(headerItem->flags() & ~Qt::ItemIsSelectable); // No seleccionable
        QFont headerFont = headerItem->font();
        headerFont.setBold(true);
        headerItem->setFont(headerFont);
        headerItem->setBackground(QBrush(QColor(230, 230, 230)));
        ui->listWidget_3->addItem(headerItem);


        for (const Producto& p : productos) {
            QString itemText = QString("%1\n   • Marca: %2\n   • Precio: $%3\n   ")
                                   .arg(QString::fromStdString(p.descripcion))
                                   .arg(QString::fromStdString(p.marca))
                                   .arg(p.precio, 0, 'f', 2)
                                   ;

            QListWidgetItem* item = new QListWidgetItem(itemText);
            item->setData(Qt::UserRole, p.id);



            if (ui->listWidget_3->count() % 2 == 0) {
                item->setBackground(QBrush(QColor(245, 245, 245)));
            }

            ui->listWidget_3->addItem(item);
        }


        QListWidgetItem* separator = new QListWidgetItem();
        separator->setFlags(Qt::NoItemFlags);
        separator->setSizeHint(QSize(0, 10));
        ui->listWidget_3->addItem(separator);
    }
}

void Ventana_Productos::cargarRecomendaciones()
{
    if (!ui->listWidget) {
        return;
    }
    ui->listWidget->clear();

    if (!usuarioActual) {
        return;
    }

    Recomendaciones rec = generarRecomendaciones(usuarioActual);


    auto agregarSeccionRecomendaciones = [&](const QString& titulo, ListaProducto lista) {
        if (!lista) {
            return;
        }

        // Encabezado de sección
        QListWidgetItem* headerItem = new QListWidgetItem("★ " + titulo + " ★");
        headerItem->setFlags(headerItem->flags() & ~Qt::ItemIsSelectable);
        QFont headerFont = headerItem->font();
        headerFont.setBold(true);
        headerItem->setFont(headerFont);
        headerItem->setBackground(QBrush(QColor(220, 240, 255)));
        ui->listWidget->addItem(headerItem);

        // Agregar productos (máximo 10)
        int contador = 0;
        NodoProducto* actual = lista;
        while (actual != nullptr && contador < 10) {
            Producto p = actual->dato;
            QString itemText = QString("%1\n   • Marca: %2\n   • Precio: $%3\n   • Calidad: %4/5")
                                   .arg(QString::fromStdString(p.descripcion))
                                   .arg(QString::fromStdString(p.marca))
                                   .arg(p.precio, 0, 'f', 2)
                                   .arg(p.calidad);

            QListWidgetItem* item = new QListWidgetItem(itemText);
            item->setData(Qt::UserRole, p.id);

            ui->listWidget->addItem(item);
            contador++;
            actual = actual->siguiente;
        }

        // Separador
        QListWidgetItem* separator = new QListWidgetItem();
        separator->setFlags(Qt::NoItemFlags);
        separator->setSizeHint(QSize(0, 15));
        ui->listWidget->addItem(separator);
    };


    agregarSeccionRecomendaciones("MARCAS PREFERIDAS", rec.porMarcasPreferidas);
    agregarSeccionRecomendaciones("OTRAS MARCAS FRECUENTES", rec.porOtrasMarcasFrecuentes);
    agregarSeccionRecomendaciones("CATEGORÍA FRECUENTE", rec.porCategoriaFrecuente);
    agregarSeccionRecomendaciones("CALIDAD SIMILAR", rec.porCalidad);


    if (ui->listWidget->count() == 0) {
        QListWidgetItem* item = new QListWidgetItem("No hay recomendaciones disponibles");
        item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
        ui->listWidget->addItem(item);
    }
}

void Ventana_Productos::mostrarDetallesProducto(int id)
{
    NodoProducto* actual = catalogoGlobal;
    while (actual != nullptr) {
        if (actual->dato.id == id) {
            productodialog dialog(actual->dato, this);
            dialog.exec();

            // Registrar en el historial
            if (usuarioActual) {
                insertarLista(usuarioActual->historial, std::to_string(id));

                // Actualizar recomendaciones inmediatamente
                cargarRecomendaciones();
            }
            break;
        }
        actual = actual->siguiente;
    }
}

void Ventana_Productos::on_pushButton_clicked()
{

    QString textoBusqueda = ui->lineEdit->text();
    QString categoria = ui->comboBox->currentText();
    QString marca = ui->comboBox_2->currentText();
    QString precioMinStr = ui->comboBox_3->currentText();
    QString precioMaxStr = ui->comboBox_4->currentText();


    double precioMin = 0.0;
    double precioMax = std::numeric_limits<double>::max();


    QRegularExpression re("(\\d+\\.?\\d*)");
    QRegularExpressionMatch matchMin = re.match(precioMinStr);
    QRegularExpressionMatch matchMax = re.match(precioMaxStr);

    if (matchMin.hasMatch()) {
        precioMin = matchMin.captured(1).toDouble();
    }

    if (matchMax.hasMatch()) {
        precioMax = matchMax.captured(1).toDouble();
    }


    if (precioMin > precioMax) {
        QMessageBox::warning(this, "Error", "El precio mínimo no puede ser mayor al precio máximo");
        return;
    }


    ListaProducto resultados = catalogoGlobal;


    if (!textoBusqueda.isEmpty()) {
        resultados = buscarPorDescripcion(resultados, textoBusqueda.toStdString());
    }

    if (categoria != "Categorias" && !categoria.isEmpty()) {
        resultados = buscarPorCategoria(resultados, categoria.toStdString());
    }

    if (marca != "Marca" && !marca.isEmpty()) {
        resultados = buscarPorMarca(resultados, marca.toStdString());
    }

    resultados = buscarPorRangoPrecios(resultados, precioMin, precioMax);


    ui->listWidget_2->clear();

    if (resultados == nullptr) {
        QListWidgetItem* item = new QListWidgetItem("No se encontraron productos");
        ui->listWidget_2->addItem(item);
        return;
    }

    NodoProducto* actual = resultados;
    while (actual != nullptr) {
        Producto p = actual->dato;
        QString itemText = QString::fromStdString(
            p.descripcion + " - " + p.marca + " - $" + std::to_string(p.precio)
            );
        QListWidgetItem* item = new QListWidgetItem(itemText);
        item->setData(Qt::UserRole, p.id);
        ui->listWidget_2->addItem(item);
        actual = actual->siguiente;
    }
}

Ventana_Productos::~Ventana_Productos()
{
    delete ui;
}

void Ventana_Productos::on_Volver_clicked()
{
    this->close();
    MainWindow *ventanaP = new MainWindow();
    ventanaP->show();
}

