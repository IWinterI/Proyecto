#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   
    
    MainWindow w;
    w.show();
    return a.exec();
} 

/*
    creacion del objeto QApplication a(argc, argv);: es necesario para inicializar la aplicación Qt.
	ya que se encarga de gestionar  ventanas, y la interacción con el sistema operativo. recibiendo los argumentos argc y argv 
	para procesar opciones específicas de Qt o de la aplicación.
	
	MainWindow w;: es donde se crea una instancia de la clase MainWindow, que representa la ventana de la aplicacion principalmente.
	
	en qt para mostrar ventana se hace uso de :
	w.show();: Llama al método show() para hacer visible la ventana principal en pantalla interfaz 
	
	la ejecucion del ciclo de la inerfaz grafica como alicacion:
	a.exec();: Inicia el ciclo de eventos de Qt. Este ciclo es lo que mantiene la aplicación en ejecución activa, ella espera respuesta mediante 
	interpretaciones del proceso como clics, teclas presionadas, entrada de datos.. etc. La función no termina hasta que se cierra la aplicación. en salir.
  
    
    */
/*
 nuestro proyecto tiene interfazgrafica, basada en Qt,  para desarrollar interfaces gráficas  (GUI) se empleó :
 
 * inclusion de cabeceras:
 #include "mainwindow.h": Incluye la definición de la clase archivo  MainWindow definida en el proyecto.
#include <QApplication>: Incluye la clase QApplication, que es esencial para cualquier aplicación Qt. 
( en esta parte, permite gestiona el ciclo de vida de la aplicación y la interacción con el sistema operativo)

+funcion principal de main():

int main(int argc, char *argv[]): Es el punto de entrada de cualquier programa en C++ cuando creamos un proyecto modularmente, donde:
argc: Representa el número de argumentos pasados al programa desde la línea de comandos. 
argv: Es un arreglo de cadenas que contiene los argumentos.


*/


/*////////////////7esquema de realizacion con qt

Se inicializa la aplicación con QApplication debe tener el instalador de Qt ya con un usuario registrado
Se crea la ventana principal (MainWindow).// aqui comienza para el inicio de secion 
Se muestra la ventana con w.show().// la ventana se muestra en pantalla con fucnion predeterminada ya que en dev registra system color con codificacion numerica
Se ejecuta el ciclo de eventos con a.exec(), manteniendo la aplicación activa hasta que el usuario la cierre. con salir


*/