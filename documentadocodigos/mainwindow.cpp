// mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventana_productos.h"
#include "registro_usuario.h"
#include "usuario.h"
#include "catalogo.h"

extern Nodoarbol* Usuarios;
/*
#include :
Este fragmento de código incluye varias cabeceras (#include), que son archivos necesarios para que el programa funcione correctamente.
La directiva #include se utiliza para incluir archivos de cabecera en el programa.
 Estos archivos contienen declaraciones de clases, funciones, variables y otros elementos que se usan en el código principal.
 
 *otros archivos de cabecera usadas en este proyecto en diferentes partes de la aplicacion.


mainwindow.h y ui_mainwindow.h:

mainwindow.h: Declara la clase principal de la ventana (MainWindow),  es la interfaz gráfica principal de la aplicación.

ui_mainwindow.h: Es un archivo generado automáticamente por el entorno de desarrollo (como Qt Creator)para el  diseño de la interfaz gráfica(botones, menús, etc.) de la ventana principal.

ventana_productos.h: Este archivo define una clase o funciones relacionadas con la ventana que muestra los productos se gestionan y visualizan en otra ventana

registro_usuario.h:  la funcionalidad para registrar usuarios donde se incluye  formularios de inicio de secion  para ingresar datos como nombre, contraseña, etc.

usuario.h: Define la clase struct  Usuario, que probablemente representa a un usuario en el sistema. Esta clase podría incluir atributos miembro de estructura como nombre, 
ID, rol, y métodos para gestionar usuarios de acuerdo a las preferencias del producto.

catalogo.h: Este archivo esta relacionado con la gestión de catálogo de productos de ropa, zapato y maquillaje. invoca funciones como en el archivo  catalogo.h
donde se llaman a lista de  funciones para inicializar ,  buscar y obtener elementos (productos)en el catálogo.


//////////////////// organizacion de los archivos: 
están organizados para dividir el programa en módulos o componentes que  faciliten  el mantenimiento y la escalabilidad del código.
 si mainwindow.h puede  usar las funcionalidades de ventana_productos.h, registro_usuario.h, y catalogo.h para mostrar diferentes ventanas o manejar datos de busqueda
 si usuario.h puede ser utilizado por registro_usuario.h para crear nuevo usuario o validar información con texto a minuscula a ingresar 
/////////por lo tanto: el código organiza el programa en diferentes módulos, cada uno con una función específica,cumpliendo modularidad, reutilidad defunciones y mantenimiento.
*/
/*
/////////////// 1)explicacion de:          extern Nodoarbol* Usuarios;
extern: es la palabra clave extern indica que la variable Usuarios está declarada sin definirse en este archivo
. Esto significa que la variable Usuarios está definida en otro archivo fuente .cpp , y aqui lo está referenciando. con xtern comparte variables globales
 entre múltiples archivos en un programa.
 
 ////////////2) explicacion de Nodoarbol*:
 
Nodoarbol es un tipo de dato, de una estructura (struct) o una clase (class) definida en el programa , donde el (*) asterisco
indica que Usuarios es un puntero a tipo Nodoarbol, donde en Usuarios se almacenará la dirección de memoria de un  tipo Nodoarbol.

///////// explicacion de Usuarios:

Es el nombre de la variable. donde  Usuarios es un puntero global que apunta a un  ( nodo) de tipo Nodoarbol.

////////////contexto del programa:
Este tipo de declaración se utiliza cuando en este caso se tiene un programa dividido en varios archivos fuente.y la variable Usuarios 
está definida en un archivo principal de implementacion .cpp  y se necesita acceder a ella desde otros archivos.

*/
MainWindow::MainWindow(QWidget *parent)// un constructor de esta clase mainwindow Inicializa la clase base QMainWindow y el puntero ui.
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    /* funciona para construir dentro de la interfaz grafica : 
    MainWindow::MainWindow(QWidget *parent): Este es el constructor de la clase MainWindow usado para inicializar una instancia de esta parte. 
QWidget *parent: Es un puntero al widget padre nodo padre . En este caso, el constructor permite que MainWindow sea un widget hijo de otro widget
: QMainWindow(parent):es una lista de inicialización que llama al constructor de la clase base QMainWindow con el argumento parent. pasa llamado
, ui(new Ui::MainWindow): se inicializa el puntero ui como una nueva instancia de la clase Ui::MainWindow. 
Este puntero se utiliza para manejar la interfaz gráfica generada por el diseñador de Qt  el ui es un puntero que apunta la funcion a la interfaz
    
    */
    
{
    inicializarCatalogo();//Llama a una función para inicializar datos o configuraciones (inicializarCatalogo()).
/*
 llama a una función miembro llamada inicializarCatalogo() para inicializar  tipo de datos  relacionadas con el catálogo de la aplicación. 
 caso base si lista llena 
 
 ///////////////////confguracion de la interfaz :
 
 ui->setupUi(this): Esta función configura la interfaz gráfica de usuario (GUI) de la ventana principal (MainWindow). que Qt la genera automaticamente.
 de aqui, permite enlazar los elementos de la interfaz (botones,  etc.) con el código.
 
 
*/
    ui->setupUi(this);//Configura la interfaz gráfica con setupUi().
    /*
    a partir de aqui se  ocultan elementos de la interfaz, estas líneas ocultan varios elementos de la interfaz gráfica al inicio del programa. 
	La función hide() hace que los widgets de configuaracion no sean visibles en la ventana.
ui->ingresar, ui->volver, ui->label_2, etc.: Son punteros a widgets (botones, campos de texto, etc.) definidos en el archivo .ui de Qt en la fase de diseño
    
    */
    ui->ingresar->hide();// a partir de aqui , oculta varios widgets de la interfaz para que no sean visibles inicialmente.
    ui->volver->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();// hasta aqui, oculta varios widgets de la interfaz para que no sean visibles inicialmente.

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);//Configura un campo de texto para que funcione como un campo de contraseña.
    /*
    configuaracion en el campo de texto:
    ui->lineEdit_2: Es un puntero a un campo de texto (probablemente un QLineEdit).
setEchoMode(QLineEdit::Password): Configura el campo de texto para que oculte los 
caracteres que se escriben, mostrándolos como asteriscos o puntos. Esto es útil para contraseñas.

    */
}

MainWindow::~MainWindow()
{
    delete ui;//es  liberar recursos que la clase haya reservado, como memoria dinámica, archivos abiertos, o conexiones dentro del programa.
    //Aquí se está eliminando un puntero llamado ui.
    /*
    pertenece a la implementación de un destructor en C++ dentro de una clase llamada MainWindow. se estructuró asi:
    
    MainWindow::~MainWindow(): es la definición del destructor de la clase MainWindow. que funciona  tras ejecutarse automaticamente cuando un
    objeto de la clase Mainwindow se destruye  con delete , donde tiene el destructor el mismo nombre de la clase precedida con  (~).

pues, ui  apunta a un objeto creado dinámicamente (con new) en el constructor de la clase MainWindow. , ya se habia reservado memoria anteriormente
    */
}// en interfaz grafica, (por ejemplo, Ui::MainWindow). Este puntero se utiliza para gestionar los elementos de la interfaz gráfica con qt
//////////////////////////////////////////////////////////

void MainWindow::on_Regis_clicked()// declara una funccion mienmbro de la clase mainwindow,El prefijo MainWindow:: indica que pertenece a la clase MainWindow.
{
/*
El nombre on_Regis_clicked esta función es un (método conectado a una señal en Qt) que se ejecuta cuando se hace clic en un botón llamado Regis. de registrar 
*/

    Registro_Usuario *ventanaR = new Registro_Usuario();

//Registro_Usuario *ventanaR = new Registro_Usuario(); creacion dinamica 
/*
Aquí se crea un puntero llamado ventanaR que apunta a un nuevo objeto de la clase Registro_Usuario.
El operador new asigna memoria dinámica para este objeto que luego se debe de liberar al finalizr el proceso
*/

    ventanaR->setAttribute(Qt::WA_DeleteOnClose);// Qt::WA_DeleteOnClose. es atributo que se maneja para evitar fugas de informacion 
/*Este método establece un atributo especial para la ventana ventanaR donde Qt::WA_DeleteOnClose indica 
que el objeto ventanaR será eliminado automáticamente de la memoria cuando la ventana se cierre.  se cierre la gestion de usuario.

*/

    ventanaR->show();
/*
la ventana de la clase Registro_Usuario se hace visible. se muestra en pantalla 
*/

    this->hide();
    /*this se refiere al objeto actual de la clase MainWindow. donde el método hide() oculta la ventana principal (MainWindow) 
	de la interfaz gráfica, pero no la cierra ni la destruye. solo hasta que en la interaccion el mismo usuaario cierre sesion y salga del programa
    */
}
///////////////////////////por lo tanto el proceso seri:
/*Cuando el usuario hace clic en el botón Regis, se ejecuta esta función. entonces, se  crea una nueva ventana (Registro_Usuario)
 y se configura para que se elimine automáticamente al cerrarse saliendo del programa, La nueva ventana se muestra en pantalla.
La ventana principal (MainWindow) se oculta para dar paso a la nueva ventana. la anterior y no posterior.
*/
///////////////////////////////////////////////////////////


///////////////////////////////para explicar la siguiente funcion 
/*
void: Es el tipo de retorno de la función vacio,
MainWindow::: Indica que esta función pertenece a la clase MainWindow. en qt El operador :: (alcance de resolución std ) se usa para definir funciones miembro de una clase. o using namespace std;
on_salir_clicked:nombre de la función. En Qt, este tipo de nombres suelen estar relacionados y son funciones que se ejecutan en respuesta a señales como click en boton llamado a  salir
*/

void MainWindow::on_salir_clicked()//Este fragmento de código cierra la aplicación cuando el usuario hace clic en el botón salir. y sale del programa
{
    QApplication::quit();
    /*
    QApplication: Es una clase de Qt que representa la aplicación en sí.de aqui se maneja los eventos y ventanas y aspectos de la aplicacion 

quit(): Es un método estático de QApplication que finaliza la ejecución de la aplicación. al llamarse se cierra la ventana principal y detiene el bucle de fucniones y eventos de qt aplicacion 
el formato en qt es on_<nombre_del_widget>_<nombre_de_la_señal>(): donde está vinculado a un botón llamado salir en la interfaz gráfica. 
Cuando el usuario hace clic en este botón,  la señal (clicked())se emite  y la misma esta conectada al slot on_salir_clicked(). 


    */
}
///////////////////////////////

void MainWindow::on_Inicio_clicked()
{
    ui->Inicio->hide();//La función hide() oculta los widgets especificados
    ui->Regis->hide();
    ui->salir->hide();
    ui->label->hide();
    ui->ingresar->show();//La función show() hace visibles los widgets especificados.
    ui->volver->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->lineEdit->show();
    ui->lineEdit_2->show();
    
    /*Declaración de la función  void MainWindow::on_Inicio_clicked():
Es un manejador de eventos que se ejecuta cuando el botón llamado Inicio es presionado (clicked), esta funcion es definida dentro de la clase MainWindow, que representa la ventana principal de la aplicación.
    
    definicion y uso de  ui->:
ui es un puntero que permite acceder a los elementos de la interfaz gráfica definidos en el archivo .ui (diseñado con el editor de Qt).
Cada elemento (botones, etiquetas, campos de texto, etc.) tiene un identificador único, como Inicio, Regis, salir, etc.

ya accion sobre wigdets
La función hide() oculta los widgets especificados, haciendolos invisibles en la interfaz gráfica, se ocultan los botones Inicio, Regis, salir y la etiqueta label.

///////////// por lo tanto, en esta funcion se muestra:
los botones ingresar y volver, las etiquetas label_2, label_3, label_4, y los campos de texto lineEdit y lineEdit_2.
    */
}
/////////////////////////////////////

void MainWindow::on_volver_clicked()//La función on_volver_clicked() es un slot que se ejecuta cuando el usuario hace clic en un botón llamado volver.
{/*Los elementos como ui->Inicio, ui->Regis, etc., son widgets (componentes de la interfaz gráfica) que se están manipulando para mostrarse u ocultarse en la aplicacion 
*/

/*
void: Indica que la función no devuelve ningún valor, 
MainWindow::: Especifica que esta función pertenece a la clase MainWindow del programa 
on_volver_clicked: Es el nombre del slot, que se ejecuta cuando el botón volver es clicado por el usuario
*/
    ui->Inicio->show();/////////desde aqui show 
    ui->Regis->show();////////se asegura que los widgets Inicio, Regis, salir y label sean visibles en la interfaz. si le da en boton volver 
    ui->salir->show();
    ui->label->show();//////////hasta aqui show 
    ui->ingresar->hide();///////////////////////////desde qui hide 
    ui->volver->hide();
    ui->label_2->hide();//////////////Estos widgets (ingresar, volver, label_2, etc.) se ocultan, es decir, dejan de ser visibles en la interfaz.
    ui->label_3->hide();
    ui->label_4->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();////////////////////////////hasta aqui hide
}
/*
Manipulación de widgets Dentro de la función, se utilizan métodos como show() y hide() 
para controlar la visibilidad de los widgets de la interfaz gráfica. Estos métodos son parte de la clase base QWidget de qt
 diseñado para cambiar el estado de la interfaz gráfica cuando el usuario hace clic en el botón volver. el color es azul y blanco 
*/
//////////////////////////////////////////////////////
void MainWindow::on_ingresar_clicked()
{
    QString username = ui->lineEdit->text();//// ventana pricipal para ingresar usuario registreandose en registrar nombre  de usuario (usuario ) y clave
    QString password = ui->lineEdit_2->text();/// se llama la funcion para registrar nombre de usuario  y clave 
////////// esta es una ventana a parte 
    if (username.isEmpty() || password.isEmpty()) {// evalua si los campos de entrada de datos no han sido llenados o son vacios 
        QMessageBox::warning(this, "Error", "Por favor complete ambos campos");// muestra en pantalla que deben ser llenados  paara poder ingresar
        return;
    }
//////////////////////
    Nodoarbol* usuarioNodo = buscar(Usuarios, username.toStdString());
/*Tipo de dato: Nodoarbol* donde :
Nodoarbol* Es un puntero a un objeto o estructura de tipo Nodoarbol, la variable usuarioNodo almacenará la dirección de memoria de un nodo en lugar del 
nodo en sí. El uso de punteros es común en estructuras de datos como árboles, permite manejar dinámicamente los nodos.*/
/*la Variable: usuarioNodo es:
la variable que se declara para almacenar el resultado de la función buscar siendo un puntero al nodo que contiene la información del usuario buscado.
*/


/*
buscar(Usuarios, username.toStdString()): en la fucnion buscar realiza una búsqueda en una estructura de datos (como un árbol binario, lista enlazada)
Usuarios: Es el primer argumento que se pasa a la función. Parece ser una estructura de datos que contiene los nodos o elementos donde se realizará la búsqueda del producto
username.toStdString(): Es el segundo argumento, donde username un objeto de tipo QString (de Qt ), y el método toStdString()  convierte este  QString 
en un std::string para leer el texto ingresado por usuario, que es el tipo de dato estándar de cadenas en C++. 
*/////////////////////////
/*por lo tanto: 
La función buscar toma como entrada la estructura Usuarios y el nombre de usuario convertido a std::string para texto ingresado.
Busca en la estructura Usuarios un nodo que coincida con el nombre de usuario.(nombre usuario si se ha registrado)
Devuelve un puntero al nodo encontrado (o nullptr si no se encuentra nada) y el puntero se almacena en la variable usuarioNodo
*/
//////////////////////////////////la estructura en c++
/* caso de un árbol binario de búsqueda y  se quiere buscar un nodo con un valor específico, la funcion buscar se ve:

Nodoarbol* buscar(Nodoarbol* raiz, const std::string& valor) {
    if (raiz == nullptr || raiz->dato == valor) {
        return raiz; // Retorna el nodo si lo encuentra o nullptr si no existe
    }
    if (valor < raiz->dato) {
        return buscar(raiz->izquierdo, valor); // Busca en el subárbol izquierdo en ese nodo
    } else {
        return buscar(raiz->derecho, valor); // Busca en el subárbol derecho en ese nodo 
    }
}


*/



//////////////////////
    if (usuarioNodo && verificarPassword(usuarioNodo, password.toStdString())) {//usuarioNodo: Se verifica si el puntero usuarioNodo no es nulo 

        QMessageBox::information(this, "Éxito", "Inicio de sesión exitoso");//Bloque if (Inicio de sesión exitoso)
//Se muestra un cuadro de mensaje informativo con el título "Éxito" 
//y el texto "Inicio de sesión exitoso". Esto indica al usuario que el inicio de sesión fue correcto.

        Ventana_Productos *ventanaProductos = new Ventana_Productos(&usuarioNodo->dato);
        //Se crea dinámicamente una nueva ventana llamada Ventana_Productos. Se le pasa como argumento un puntero a usuarioNodo->dato,
	 //	 que  contiene información del usuario autenticado despues de su registro.
       
        ventanaProductos->show();//Se muestra la ventana de productos (Ventana_Productos) en pantalla.
        //Ventana_Productos, una clase personalizada que representa una ventana específica en la aplicación donde se muestra todos los productos que el usuario debe seleccionar al inicio 
        this->close();//Se cierra la ventana actual despues de iniciar la sesion de usuario
    } else {
    	
    	//QMessageBox: Es una clase de Qt que permite mostrar cuadros de diálogo con mensajes informativos, de advertencia, o de error en una pestaña.
        QMessageBox::warning(this, "Error", "Usuario o contraseña incorrectos");
    }/*//this: Hace referencia al objeto actual  la ventana de inicio de sesión
        Si la condición del if no se cumple (es decir, el usuario no existe o la contraseña es incorrecta), se muestra un cuadro de mensaje 
		de advertencia con el título "Error" y el texto  en pantalla "Usuario o contraseña incorrectos".
        */
/*
verificarPassword(usuarioNodo, password.toStdString()): Se llama a una función verificarPassword que probablemente compara la contraseña ingresada (password)
 con la almacenada en el nodo del usuario (usuarioNodo). La contraseña se convierte a un std::string  texto usando toStdString(), si y solo si,  
 Ambas condiciones deben ser verdaderas para que el bloque dentro del if se ejecute.
 
///////////////por lo tanto en este segmento de codigo se tiene:

Se verifica si el usuario existe (usuarioNodo) y si la contraseña es correcta (verificarPassword).
Si ambas condiciones son verdaderas, entonces: Se muestra un mensaje de éxito/ Se abre una nueva ventana (Ventana_Productos)/Se cierra la ventana actual.
Si alguna condición falla, en caso contario, entonces: Se muestra un mensaje de error indicando que el usuario o la contraseña son incorrectos.
*/
}
/*

La variable Usuarios es  la raíz de un árbol que almacena información de usuario ingresado con clave y nombre usuario y nodoarbol un nodo  de arbol binarios
si se define la variable : Nodoarbol* Usuarios = nullptr; // Definición de la variable
Al usar extern, otros archivos pueden manipular dicho  árbol sin redefinir la variable.

*/