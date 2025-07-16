// productodialog.h

#ifndef PRODUCTODIALOG_H
#define PRODUCTODIALOG_H

#include <QDialog>
#include "estructuras.h"

namespace Ui {
class productodialog;
}
/*Estas primeras líneas son directivas de preprocesador que se utilizan para evitar inclusiones múltiples del mismo archivo de encabezado (.h)
#ifndef PRODUCTODIALOG_H: Significa "si no está definido PRODUCTODIALOG_H".
#define PRODUCTODIALOG_H: Define el identificador PRODUCTODIALOG_H en caso de que  si el archivo se incluye de nuevo,  no se procese otra vez esta sección.
Esto es conocido como guardas de inclusión.( definde el identificador lo incluye unica vez en el llamado y no se vuelva a procesar)

#include <QDialog>: Incluye la clase QDialog de la biblioteca Qt, que se utiliza para crear cuadros de diálogo(ventanas emergentes) en aplicaciones gráficas.

#include "estructuras.h": Incluye un archivo de encabezado personalizado llamado estructuras.h.  como una funcion.h definicion de funcion a implementar al .cpp

namespace Ui: Es un espacio de nombres generado automáticamente por Qt para organizar las clases relacionadas con la interfaz de usuario (UI).
 Esto ayuda a evitar conflictos de nombres. y el apuntador en fucnion del entorno de interfaz grafica de qt asigna un puntero a ui.

class productodialog: Declara una clase llamada productodialog dentro del espacio de nombres Ui. caso al namespase std; estandar a modo de qt creator.


*/



class productodialog : public QDialog
{
    Q_OBJECT

public:
    explicit productodialog(const Producto& producto, QWidget *parent = nullptr);
    ~productodialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::productodialog *ui;
};

/*
define una clase llamada productodialog, que hereda de QDialog (una clase de la biblioteca Qt utilizada para crear cuadros de diálogo).(ventanas ) 

tras la declaracion de la clase con:         class productodialog : public QDialog { ....};
       
 1) definicion de  class productodialog: 
 
 Declara una nueva clase llamada class productodialog: public QDialog: Indica que esta clase hereda de QDialog,
  lo que significa que productodialog tiene todas las funcionalidades de un cuadro de diálogo de Qt.
 
2) Dado la existencia de un Macro:
Macro Q_OBJECT: Este macro es necesaria en las clases que usan señales y ranuras  usados en qt(mecanismo de comunicación de Qt) por medio de señales.


3)Constructor y Destructor:

public:: Define la sección pública de la clase, accesible desde fuera de la clase , por lo tanto es externa
explicit productodialog(const Producto& producto, QWidget *parent = nullptr);: Es el constructor de la clase.
explicit: Evita conversiones implícitas no deseadas bajo una funcion que bloquea la conversion implicita.
const Producto& producto: Recibe un objeto Producto como referencia constante, lo que significa que no se modificará dentro del constructor mientras siga sin destruirse
QWidget *parent = nullptr: Permite especificar un widget padre QDialog(útil para jerarquías de ventanas en este caso 2 simultanea sea el caso). Si no se pasa un padre, se usa nullptr por defecto.
~productodialog();: Es el destructor de la clase, que se ejecuta cuando el objeto es destruido. Se utiliza para liberar recursos si es necesario.

4) Sección de ranuras privadas: 


private slots:
    void on_pushButton_clicked();
private slots:: Define una sección de ranuras privadas dentro de qt . Las ranuras son funciones que pueden conectarse a señales en Qt.(ejemplo botones)
void on_pushButton_clicked();: Es una ranura que se ejecutará cuando se emita una señal conectada a ella , pasa que el usuario clickea una opcion que se traduce en señal
Por lo que  está vinculada al evento de clic de un botón llamado pushButton.

5) Miembros privados en esta fase:


private: // los elementos del Ui del qt para acceder internamente despues de iniciar secion se carga el producto 
    Ui::productodialog *ui;
private:: Define la sección privada de la clase, accesible solo desde dentro de la clase.

Ui::productodialog *ui;:
Es un puntero a la interfaz de usuario generada automáticamente por Qt Designer.
Este puntero permite acceder a los elementos de la interfaz gráfica definidos en el archivo .ui correspondiente.


En términos simples, esta clase:

Hereda de QDialog para crear un cuadro de diálogo personalizado para que se interactue entre el sario y maquina.
Usa un constructor para inicializar la clase con un objeto Producto y un widget (del qt) padre  QDialog 
Define una ranura  de señales (on_pushButton_clicked) para manejar eventos, como el clic de un botón.
Contiene un puntero (ui) para interactuar con la interfaz gráfica.( ui es el punntero). para las fases del programa en qt.


*/

#endif // PRODUCTODIALOG_H   // Cierre de las guardas de la inclusion y eventos durante el cuadro de dialogo 
