#ifndef MAINWINDOW_H // // Verifica si MAINWINDOW_H no está //La línea #ifndef MAINWINDOW_H verifica si el identificador MAINWINDOW_H no está definido.
#define MAINWINDOW_H//   // Lo define para evitar inclusiones múltiples de mainwindow
#include <QMainWindow>//  // Incluye la clase base de Qt para ventanas 
#include "registro_usuario.h"// // Encabezado para el registro de usuarios
#include "ventana_productos.h"//// Encabezado para la ventana de productos
#include "registro_usuario.h"//// Encabezado para la clase Usuario
#include "usuario.h"////  Encabezado para la clase Usuario
#include "utilidades.h"//// Encabezado para utilidades generales
#include <QMessageBox> //// Incluye la clase para mostrar mensajes emergentes

QT_BEGIN_NAMESPACE        
namespace Ui {
	/*namespace Ui:

Es un espacio de nombres generado  por Qt Designer. Dentro de este namespace, se declara la clase MainWindow,
 que corresponde a la ventana principal de mi aplicacion qt
	
	*/
class MainWindow;// // Declaración de la clase MainWindow
//Es la declaración de la clase que representa la ventana principal de tu aplicación. 
//Esta clase se define en el archivo .h (header) y se implementa en el archivo .cpp.
}
/*QT_BEGIN_NAMESPACE y QT_END_NAMESPACE:

Estas macros encapsulan el código dentro del espacio de nombres 
(namespace) de Qt. Esto ayuda a evitar conflictos de nombres entre las clases de Qt y las tuyas propias o de otras bibliotecas.
*/
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT//Q_OBJECT  // Macro necesaria para las clases que usan señales y slots en Qt

public:

    MainWindow(QWidget *parent = nullptr);//// Constructor
    ~MainWindow();                                   // Destructor  ~MainWindow();
  
//// Aquí defines los miembros privados de la clase private
private slots://// Los slots son funciones que responden a eventos
	//estas funciones suelen estar relacionadas con acciones que realiza el usuario, como hacer clic en botones. 
    void on_Regis_clicked();//// Código para manejar el clic en el botón "Registrar"

    void on_salir_clicked();// // Código para manejar el clic en el botón "Salir"

    void on_Inicio_clicked();// volver a inicio 

    void on_volver_clicked();// vuelve a pantalla anterior

    void on_ingresar_clicked();// // Código para manejar el clic en el botón "Ingresar"

private:

    Ui::MainWindow *ui;//// Puntero a la interfaz generada por Qt Designer
    /*QT_BEGIN_NAMESPACE y QT_END_NAMESPACE encapsulan el namespace de Qt.
La clase MainWindow se declara en el archivo .h y se implementa en el .cpp.
Usa el puntero ui para interactuar con los elementos de la interfaz gráfica.
    */
};
#endif // MAINWINDOW_H // // Finaliza la guarda de inclusión


/*

*/