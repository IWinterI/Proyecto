#include "registro_usuario.h"
#include "ui_registro_usuario.h"
#include "mainwindow.h"
#include "usuario.h"
#include "utilidades.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QVBoxLayout>


extern Nodoarbol* Usuarios;

Registro_Usuario::Registro_Usuario(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Registro_Usuario)
{
    ui->setupUi(this);

    brandCheckboxes = ui->brandsGroup->findChildren<QCheckBox*>();


}

Registro_Usuario::~Registro_Usuario()
{
    delete ui;
}

void Registro_Usuario::accept(){


}

void Registro_Usuario::on_buttonBox_rejected()
{
    MainWindow *ventanaP = new MainWindow();
    ventanaP->show();
}


void Registro_Usuario::on_buttonBox_accepted()
{

    QString nombre = ui->RNombre->text();
    QString apellido = ui->RApellido->text();
    QString usuario = ui->RUsuario->text();
    QString password = ui->RContras->text();

    if(nombre.isEmpty() || apellido.isEmpty() || usuario.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Todos los campos son obligatorios");

        return;
    }


    QRegularExpression regexNombre("^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$");
    if(!regexNombre.match(nombre).hasMatch()) {
        QMessageBox::warning(this, "Error", "El nombre solo puede contener letras y espacios");

        return;
    }

    if(!regexNombre.match(apellido).hasMatch()) {
        QMessageBox::warning(this, "Error", "El apellido solo puede contener letras y espacios");

        return;
    }

    QRegularExpression regexUsuario("^\\S+$");
    if(!regexUsuario.match(usuario).hasMatch()) {
        QMessageBox::warning(this, "Error", "El usuario no puede contener espacios");

        return;
    }

    if(password.length() < 8) {
        QMessageBox::warning(this, "Error", "La contraseña debe tener al menos 8 caracteres");

        return;
    }

    if(buscar(Usuarios, usuario.toStdString())) {
        QMessageBox::warning(this, "Error", "El usuario ya está registrado");

        return;
    }

    Usuario nuevo;
    nuevo.nombre = nombre.toStdString();
    nuevo.apellido = apellido.toStdString();
    nuevo.usuario = usuario.toStdString();
    nuevo.password = password.toStdString();
    nuevo.id = generarID();

    nuevo.preferencias = nullptr;
    nuevo.categoriasPreferidas = nullptr;
    nuevo.historial = nullptr;
    nuevo.carrito = nullptr;
    nuevo.listaDeseos = nullptr;

    QStringList selectedBrands;
    for(QCheckBox *checkbox : brandCheckboxes) {
        if(checkbox->isChecked()) {
            selectedBrands << checkbox->text();
        }
    }

    for(QCheckBox *checkbox : brandCheckboxes) {
        if(checkbox->isChecked()) {
            std::string marca = checkbox->text().toStdString();
            insertarLista(nuevo.preferencias, marca);
        }
    }

    insertar(Usuarios, nuevo);

    QMessageBox::information(this, "Registro exitoso",
                             "Usuario registrado:\n\n"
                             "Nombre: " + nombre + "\n"
                                            "Usuario: " + usuario + "\n"
                                             "ID: " + QString::fromStdString(nuevo.id));


    this->close();

    MainWindow *ventanaP = new MainWindow();
    ventanaP->show();
}

