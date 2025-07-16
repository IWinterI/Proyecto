#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registro_usuario.h"
#include "ventana_productos.h"
#include "registro_usuario.h"
#include "usuario.h"
#include "utilidades.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Regis_clicked();

    void on_salir_clicked();

    void on_Inicio_clicked();

    void on_volver_clicked();

    void on_ingresar_clicked();

private:

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
