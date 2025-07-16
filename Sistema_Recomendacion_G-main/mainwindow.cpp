#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventana_productos.h"
#include "registro_usuario.h"
#include "usuario.h"
#include "catalogo.h"

extern Nodoarbol* Usuarios;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    inicializarCatalogo();

    ui->setupUi(this);
    ui->ingresar->hide();
    ui->volver->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Regis_clicked()
{


    Registro_Usuario *ventanaR = new Registro_Usuario();


    ventanaR->setAttribute(Qt::WA_DeleteOnClose);


    ventanaR->show();


    this->hide();
}


void MainWindow::on_salir_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Inicio_clicked()
{
    ui->Inicio->hide();
    ui->Regis->hide();
    ui->salir->hide();
    ui->label->hide();
    ui->ingresar->show();
    ui->volver->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->lineEdit->show();
    ui->lineEdit_2->show();
}


void MainWindow::on_volver_clicked()
{
    ui->Inicio->show();
    ui->Regis->show();
    ui->salir->show();
    ui->label->show();
    ui->ingresar->hide();
    ui->volver->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
}


void MainWindow::on_ingresar_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Por favor complete ambos campos");
        return;
    }

    Nodoarbol* usuarioNodo = buscar(Usuarios, username.toStdString());

    if (usuarioNodo && verificarPassword(usuarioNodo, password.toStdString())) {

        QMessageBox::information(this, "Éxito", "Inicio de sesión exitoso");


        Ventana_Productos *ventanaProductos = new Ventana_Productos(&usuarioNodo->dato);
        ventanaProductos->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Usuario o contraseña incorrectos");
    }

}

