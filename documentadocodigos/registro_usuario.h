#ifndef REGISTRO_USUARIO_H
#define REGISTRO_USUARIO_H

#include <QDialog>
#include <QList>
#include <QCheckBox>
/*
Estas líneas incluyen las cabeceras necesarias para usar las clases de Qt. Cada una tiene un propósito específico:

#include <QDialog>: Permite usar la clase QDialog, que es una ventana de diálogo en Qt. Es comúnmente utilizada para crear ventanas secundarias o modales.
#include <QList>: Proporciona acceso a la clase QList, que es una lista genérica (similar a un vector en C++) para almacenar elementos de cualquier tipo.
#include <QCheckBox>: Permite usar la clase QCheckBox, que representa una casilla de verificación en la interfaz gráfica.


Este programa en C++ utiliza Qt para crear una ventana de diálogo (QDialog) que probablemente contiene una lista de casillas de verificación (QCheckBox) gestionadas mediante una lista (QList). La estructura típica incluye:

Inclusión de cabeceras necesarias.
Definición de una clase que hereda de QDialog.
Implementación de un constructor para inicializar la interfaz.
Una función main para ejecutar la aplicación.
//////////////////7estrcutura del programa general:

 a. Clase Principal: Se define una clase que hereda de QDialog (o alguna otra clase base de Qt como QWidget o QMainWindow). 
 usa Q_OBJECT  // Macro necesaria para habilitar señales y slots en Qt
 
 Q_OBJECT: Es una macro que habilita el sistema de señales y slots de Qt.
QList<QCheckBox*>: Una lista que almacena punteros a objetos QCheckBox. Esto permite gestionar dinámicamente varias casillas de verificación.
 
b. Constructor y Destructor
El constructor inicializa los elementos de la interfaz y configura las conexiones necesarias,el destructor se encarga de liberar recursos 
si es necesario (aunque Qt maneja automáticamente la mayoría de los recursos).

Función Principal: La función main inicializa la aplicación y muestra el diálogo: #include <QApplication>  y   #include "MyDialog.h"

QApplication: Es la clase principal que gestiona el ciclo de vida de la aplicación.
app.exec(): Inicia el bucle de eventos, que es necesario para que la interfaz gráfica responda a las interacciones del usuario.


*/
//////////////////////////////////////////
namespace Ui {
class Registro_Usuario;
/*
namespace Ui: 
Un namespace (espacio de nombres) es una forma de organizar el código en C++ para evitar conflictos de nombres entre diferentes partes 
de un programa o librerías. En este caso, Ui es el nombre del espacio de nombres. Es común en aplicaciones gráficas creadas con herramientas como Qt,
 donde el código generado automáticamente para la interfaz gráfica se agrupa bajo el namespace Ui.
 
class Registro_Usuario;:
Aquí se está declarando una clase llamada Registro_Usuario dentro del namespace Ui.Esta es una declaración adelantada (forward declaration),
 lo que significa que se está informando al compilador de la existencia de la clase, pero no se está definiendo su contenido en este momento.
Esto se hace para que otras partes del código puedan referirse a la clase sin necesidad de incluir toda su definición, lo que puede ser útil 
para reducir dependencias y acelerar la compilación.

Relación con interfaces gráficas: En proyectos que usan Qt, el namespace Ui suele contener clases generadas automáticamente 
por el compilador de interfaces gráficas (como uic en Qt). Estas clases representan las interfaces de usuario diseñadas en archivos .ui.
Por ejemplo, si tienes un formulario llamado Registro_Usuario.ui, el compilador generará una clase Ui::Registro_Usuario que contiene
 los elementos de la interfaz (botones, etiquetas, etc.).

*/

}
////////////////////////////////////
class Registro_Usuario : public QDialog
{
    Q_OBJECT//

public:
    explicit Registro_Usuario(QWidget *parent = nullptr);
    ~Registro_Usuario();
    /*
    Explicacion de funcionalidad:
    
    Clase Registro_Usuario
La clase Registro_Usuario está definida como una subclase de QDialog. Esto significa que hereda todas las funcionalidades de QDialog,
 que es una clase de Qt utilizada para crear cuadros de diálogo en aplicaciones gráficas.
 
 class Registro_Usuario : public QDialog {    :
 class Registro_Usuario: Declara una nueva clase llamada Registro_Usuario.
: public QDialog: Indica que esta clase hereda de QDialog. Esto permite que Registro_Usuario tenga todas las características de un cuadro de diálogo, 


Macro Q_OBJECT: Esta macro es esencial en las clases que utilizan el sistema de señales y slots de Qt. 
Permite que la clase interactúe con el sistema de eventos de Qt.


Constructor:     explicit Registro_Usuario(QWidget *parent = nullptr);
explicit: Evita conversiones implícitas no deseadas al crear un objeto de esta clase.
Registro_Usuario(QWidget *parent = nullptr): Es el constructor de la clase. Recibe un puntero a un QWidget como argumento,
que representa el widget padre. Si no se especifica un padre, se usa nullptr (ningún padre).
Esto es útil para establecer jerarquías de widgets en Qt, donde el widget padre controla la vida útil de sus hijos.

 Destructor:    ~Registro_Usuario();

~Registro_Usuario(): Es el destructor de la clase. Se ejecuta cuando un objeto de esta clase se destruye, liberando recursos o memoria asignada
 
 ///////////////7por lo tanto el uso es incluir campos de texto, botones y lógica para manejar el registro de un usuario.
 
    */

////////////////////////////////////////////////////
private slots:
    void accept() override;

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::Registro_Usuario *ui;
    QList<QCheckBox*> brandCheckboxes;
    
};
/
#endif // REGISTRO_USUARIO_H
/*
1)private slots:
En Qt, los slots son funciones que se conectan a señales (signals). Las señales y slots son un mecanismo central en Qt para manejar eventos.
 La palabra clave private slots: indica que las funciones listadas aquí son slots privados,llamando a :
 
    void accept() override; Esta función es un slot que probablemente sobrescribe (override) una función virtual de la clase base 
	(quizás QDialog o similar). Es comúnmente usada para manejar la aceptación de un diálogo (por ejemplo, cuando el usuario presiona un botón "Aceptar").

void on_buttonBox_rejected(); Este es un slot que se ejecutará cuando el botón "Cancelar" o "Rechazar"
de un QDialogButtonBox sea activado. El nombre sugiere que está conectado a la señal rejected() de un QDialogButtonBox.

void on_buttonBox_accepted(); Similar al anterior, este slot se ejecutará cuando el botón "Aceptar" de un QDialogButtonBox 
sea activado. Está conectado a la señal accepted().

2)private:

Estos son accesibles solo dentro de la clase misma.

Ui::Registro_Usuario *ui;
Este es un puntero a la interfaz gráfica generada automáticamente por Qt Designer. La clase Ui::Registro_Usuario es creada por Qt cuando 
diseñas la interfaz en un archivo .ui.  Este puntero permite acceder a los elementos de la interfaz (como botones, cuadros de texto, etc.).

QList<QCheckBox*> brandCheckboxes;
Este es un contenedor (lista) de punteros a objetos QCheckBox. Probablemente se utiliza para manejar dinámicamente un grupo de casillas 
de verificación (checkboxes) relacionadas con marcas o categorías

 3)include guard:
 
 #endif // REGISTRO_USUARIO_H
Este es el cierre de una directiva de preprocesador que asegura que el archivo de cabecera no se incluya más de una vez en el mismo archivo fuente.
 

*/

///////////////////////////////////////////77

