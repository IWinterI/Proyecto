#ifndef VENTANA_PRODUCTOS_H
#define VENTANA_PRODUCTOS_H

#include <QMainWindow>
#include "usuario.h"

namespace Ui {
class Ventana_Productos;
}

class Ventana_Productos : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana_Productos(Usuario* usuario = nullptr, QWidget *parent = nullptr);
    ~Ventana_Productos();
    void llenarFiltros();

private slots:
    void on_Volver_clicked();
    void on_categoriaComboBox_currentIndexChanged(const QString &categoria);

    void on_pushButton_clicked();

private:
    Ui::Ventana_Productos *ui;
    Usuario* usuarioActual;

    void cargarCategorias();
    void cargarProductosPorCategoria(const QString& categoria);
    void cargarRecomendaciones();
    void mostrarDetallesProducto(int id);
};

#endif // VENTANA_PRODUCTOS_H
