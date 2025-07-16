#include "productodialog.h"
#include "ui_productodialog.h"

productodialog::productodialog(const Producto& producto, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::productodialog)
{
    ui->setupUi(this);


    ui->lblNombre->setText(QString::fromStdString(producto.descripcion));
    ui->lblMarca->setText(QString::fromStdString(producto.marca));
    ui->lblPrecio->setText(QString::number(producto.precio, 'f', 2));
    ui->lblCalidad->setText(QString::number(producto.calidad));
    ui->lblCategoria->setText(QString::fromStdString(producto.categoria));

    setWindowTitle("Detalles del Producto");
}

productodialog::~productodialog()
{
    delete ui;
}

void productodialog::on_pushButton_clicked()
{
    this->close();
}

