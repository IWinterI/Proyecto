#ifndef VENTANA_PRODUCTOS_H
#define VENTANA_PRODUCTOS_H

#include <QMainWindow>
#include "usuario.h"
////////////////////////
/*

1. Directivas de Preprocesador: #ifndef, #define, y #endif

#ifndef VENTANA_PRODUCTOS_H
Esta línea significa "si no está definido VENTANA_PRODUCTOS_H". Es una directiva de preprocesador que verifica si el identificador
 VENTANA_PRODUCTOS_H ya ha sido definido. Si no lo está, el código entre esta línea y #endif se ejecutará.

#define VENTANA_PRODUCTOS_H
Aquí se define el identificador VENTANA_PRODUCTOS_H. Esto asegura que si este archivo se incluye varias veces en diferentes partes 
del programa, el contenido no se procesará más de una vez, evitando errores de redefinición.

#endif
Marca el final del bloque protegido por la directiva #ifndef. Todo el código entre #ifndef y #endif se incluye solo si VENTANA_PRODUCTOS_H
 no estaba definido previamente.

2. Inclusión de Bibliotecas: #include
#include <QMainWindow>
Esto incluye la definición de la clase QMainWindow, que es parte de la biblioteca Qt. Qt es un framework muy popular para crear interfaces gráficas 
(GUI) en C++. QMainWindow es una clase base que proporciona una ventana principal estándar para aplicaciones GUI.

#include "usuario.h"
Aquí se incluye otro archivo de encabezado llamado usuario.h. Este archivo probablemente contiene la definición de una clase o funciones relacionadas
con un "usuario". El uso de comillas ("usuario.h") indica que es un archivo de encabezado personalizado, no una biblioteca estándar

#include: Importan bibliotecas necesarias (en este caso, Qt y un archivo personalizado).

*/
///////////////////
namespace Ui {
class Ventana_Productos;
}
/*
namespace Ui:

Un namespace (espacio de nombres) es una forma de organizar el código en C++ para evitar conflictos entre nombres de variables, funciones o clases que 
puedan repetirse en diferentes partes del programa.En este caso, Ui es el nombre del espacio de nombres. Es común en aplicaciones que usan Qt Framework,
 una biblioteca popular para desarrollar interfaces gráficas (GUIs).
class Ventana_Productos;:

Dentro del espacio de nombres Ui, se declara una clase llamada Ventana_Productos.
La declaración no incluye la implementación de la clase, solo se está indicando que existe una clase con ese nombre. Esto se conoce como una declaración 
adelantada (forward declaration).La implementación real de la clase probablemente se encuentra en otro archivo, como ventana_productos.h o 
ventana_productos.cpp.
//////////////implementacion de una estructura:

Esta estructura es típica en programas que separan la lógica de la interfaz gráfica. Por ejemplo, en aplicaciones Qt, el espacio de nombres Ui se utiliza
 para agrupar las clases generadas automáticamente  por el diseñador de interfaces (como Qt Designer).
*/
////////////////////////////////////
class Ventana_Productos : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana_Productos(Usuario* usuario = nullptr, QWidget *parent = nullptr);
    ~Ventana_Productos();
    void llenarFiltros();
    /*
    1) declaracion de la clase:
    class Ventana_Productos: Define una clase llamada Ventana_Productos.
: public QMainWindow: Indica que esta clase hereda de QMainWindow, una clase base de Qt que proporciona la funcionalidad principal para ventanas de aplicaciones
 con menús, barras de herramientas, etc.
 
 2) Macro Q_OBJECT
 
 Esta macro es necesaria en las clases que usan el sistema de señales y slots de Qt. Permite que la clase interactúe con el sistema de eventos de Qt, como 
 conectar señales (eventos) con slots (funciones que responden a esos eventos) vease evento es la interaccion con el usuario.
 
 3)Modificador de acceso public:
 Define que los miembros que siguen son accesibles desde fuera de la clase.
 
 4) constructor:
 explicit Ventana_Productos(Usuario* usuario = nullptr, QWidget *parent = nullptr); dondeimplementa:
 
 explicit: Evita conversiones implícitas no deseadas al crear objetos de esta clase.
Ventana_Productos: Es el constructor de la clase.
Usuario* usuario = nullptr: Recibe un puntero a un objeto de tipo Usuario como argumento opcional (por defecto es nullptr).
QWidget *parent=nullptr: Recibe un puntero al widget padre(útil para establecer jerarquías en la GUI). Si no se especifica,se asume que no tiene padre(nullptr).

5)Destructor:

~Ventana_Productos();
Es el destructor de la clase, que se ejecuta cuando el objeto es destruido. Aquí se liberan recursos o memoria asignada dinámicamente

6. Método llenarFiltros

void llenarFiltros();
Es un método público que no devuelve nada (void) y probablemente se utiliza para llenar o configurar filtros en la interfaz gráfica,
 como listas desplegables, cuadros de selección
 
 //////////////// Implementacion:
 
 con interfaz gráfica que gestiona productos. Hereda de QMainWindow para aprovechar las funcionalidades de una ventana principal en Qt.
  El constructor permite inicializar  la ventana con un usuario y un widget padre opcional, mientras que el método llenarFiltros 
  probablemente se encarga de configurar elementos interactivos
  
  


    
    */
/////parte de la declaración de slots en una clase de C++ que utiliza el framework Qt. Qt es una biblioteca muy popular para desarrollar interfaces GUI en c++
private slots:
    void on_Volver_clicked();//// Código para manejar el clic en el botón "Volver" opcion de volver 
    void on_categoriaComboBox_currentIndexChanged(const QString &categoria);
//// Código para manejar el cambio de selección en el combo box
    void on_pushButton_clicked(); // // Código para manejar el clic en el botón "pushButton" mediante opcion al click del usuario.
    /*
    1. private slots:

Es una sección de la clase que define los slots privados. Los slots son funciones miembro que se conectan a señales (signals) en Qt.
Los signals y slots son un mecanismo de comunicación entre objetos en Qt, utilizado principalmente para manejar eventos (como clics de botones o cambios en un combo box).
 private: significa que al estar en la sección private, estos slots solo pueden ser llamados desde dentro de la clase misma o por el sistema de señales y slots de Qt.
   
   2. void on_Volver_clicked();

Este es un slot que se ejecuta cuando el usuario hace clic en un botón llamado Volver en la interfaz gráfica.
El nombre sigue la convención de Qt: on_<nombre_del_widget>_<evento>(). En este caso, el evento es clicked, que ocurre cuando el botón es presionado para opcion
   
   3. void on_categoriaComboBox_currentIndexChanged(const QString &categoria);

Este slot se ejecuta cuando cambia el índice seleccionado en un QComboBox llamado categoriaComboBox.
Recibe un parámetro de tipo QString (cadena de texto) que contiene el valor o texto de la nueva opción seleccionada en el combo box pasado a minuscula.

4. void on_pushButton_clicked();

Este slot se ejecuta cuando el usuario hace clic en un botón llamado pushButton es Similar al primer slot, sigue la convención de nombres de Qt para asociar widgets y eventos.
  
  ////////////////7                   Implementacion qt y el algoriytmo:
  En Qt, los slots se conectan a signals mediante el método connect(). Sin embargo, en este caso, parece que se está utilizando 
  el sistema de auto-conexión de Qt por lo que si se  tiene un botón llamado Volver en el archivo .ui (diseño de la interfaz), Qt automáticamente conecta 
  el signal clicked()   del botón al slot on_Volver_clicked().
aqui la coneccion es automatica de qt y el codigo en c++, Si usas un archivo .ui para diseñar la interfaz, Qt conecta automáticamente los signals y 
slots basándose en los nombres.
   
   definiendose  tres funciones (slots) que responden a eventos específicos en la interfaz gráfica:

Un clic en el botón Volver.
Un cambio en la selección del combo box categoriaComboBox.
Un clic en el botón pushButton.
 con esto , en Qt se facilita la conexión entre la interfaz gráfica y la lógica del programa mediante su sistema de signals y slots.
  
    */
/////////////////////////////////////
private:
    Ui::Ventana_Productos *ui;
    Usuario* usuarioActual;

    void cargarCategorias();
    void cargarProductosPorCategoria(const QString& categoria);
    void cargarRecomendaciones();
    void mostrarDetallesProducto(int id);
};

#endif // VENTANA_PRODUCTOS_H
