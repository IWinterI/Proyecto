//registarando al usuario

#include "registro_usuario.h"
#include "ui_registro_usuario.h"
#include "mainwindow.h"
#include "usuario.h"
#include "utilidades.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QVBoxLayout>
/*
documentando el codigo:

trabajando en un proyecto que utiliza Qt Framework para crear una interfaz gráfica de usuario (GUI). se estructura de la siguiente manera:

1. Encabezados y dependencias:
Los #include que mencionas son las dependencias necesarias para el programa.
2. Constructor y configuración inicial:
En el archivo registro_usuario.cpp, el constructor de la clase RegistroUsuario debe inicializar la interfaz y configurar los elementos necesarios,
( como validadores o conexiones de señales y slots).
3. Método para registrar usuario:  como: void RegistroUsuario::registrarUsuario()
Define la lógica para registrar un usuario, incluyendo validaciones y manejo de errores.
4. Destructor: 
Libera la memoria asignada a la interfaz. como:              RegistroUsuario::~RegistroUsuario() {   delete ui;}
5. Conexión con la ventana principal:
Si necesitas abrir esta ventana desde la ventana principal (MainWindow),// Muestra la ventana como un diálogo modal puedes hacerlo así:

void MainWindow::abrirRegistroUsuario() {    RegistroUsuario registro(this);registro.exec();  }
///////////////////por lo tanto, el encabezado consta de:

Encabezados: Incluye solo lo necesario//  Constructor: Configura la interfaz, validadores y conexiones//
Métodos: Implementa la lógica de registro y manejo de errores//Destructor: Libera recursos.
Integración: Conecta esta ventana con otras partes del programa desde el main .cpp





*/
//////////////////////////////////////////////////
extern Nodoarbol* Usuarios; //// Declaración de variable externa
//// Constructor de la clase Registro_Usuario
Registro_Usuario::Registro_Usuario(QWidget *parent)
    : QDialog(parent)//Llama al constructor de la clase base QDialog
    , ui(new Ui::Registro_Usuario)//// Inicializa el puntero ui
{//// Configura la interfaz gráfica
    ui->setupUi(this);
//// Encuentra todos los QCheckBox dentro del grupo brandsGroup
    brandCheckboxes = ui->brandsGroup->findChildren<QCheckBox*>();
/*
///////////////explicacion del codigo:


1) extern Nodoarbol* Usuarios;: 

Declara una variable externa llamada Usuarios de tipo puntero a Nodoarbol.
 Esto significa que la variable está definida en otro archivo o lugar del programa, y aquí solo se está indicando que existe.

2)Registro_Usuario::Registro_Usuario(QWidget *parent):

Es el constructor de la clase Registro_Usuario, que hereda de QDialog.
Recibe un puntero parent (generalmente el widget padre) y lo pasa al constructor de la clase base QDialog.

3)ui->setupUi(this);:

Configura la interfaz gráfica del usuario (UI) utilizando el objeto ui, que es un puntero a la clase generada automáticamente por Qt Designer.

4)brandCheckboxes = ui->brandsGroup->findChildren<QCheckBox*>();:

Busca todos los elementos QCheckBox que son hijos del grupo brandsGroup y los almacena en la lista brandCheckboxes.
////////////////////implementacion:
Nodoarbol:
 Asegúrate de que la clase o estructura Nodoarbol esté correctamente definida en otro archivo y que el archivo donde 
se define esté incluido en este archivo.

ui: 
Es un puntero a la clase generada automáticamente por Qt Designer. Asegúrate de que el archivo .
ui correspondiente esté configurado correctamente y que brandsGroup sea un QGroupBox o similar que contenga los QCheckBox.



*/

}
//////////////////////////////////////////////
Registro_Usuario::~Registro_Usuario()
{
    delete ui;
    /*
    Manejo de memoria: 
Si estás usando new para inicializar ui, recuerda liberar la memoria en el destructor de la clase para evitar fugas de memoria:
Registro_Usuario::~Registro_Usuario() {
    delete ui;// // Liberar memoria asignada dinámicamente
}
//Verificar que ui fue inicializado, Antes de usar delete, asegúrate de que ui fue asignado dinámicamente 
//
    */
    /*///////////////////implementacion en QT
    Uso en Qt (si aplica):
Si estás trabajando con Qt, el puntero ui suele ser generado automáticamente por el sistema de diseño de interfaces (como en QMainWindow o QDialog). 
En este caso, no necesitas preocuparte demasiado, ya que Qt maneja la mayoría de los recursos automáticamente.
    
    */
}

void Registro_Usuario::accept(){
/*
La función void Registro_Usuario::accept() parece ser un método de una clase llamada Registro_Usuario. 
Este método probablemente se utiliza para aceptar o registrar datos de un usuario, la  estructura básica para accept()
Si el propósito de esta función es capturar datos de un usuario

/////////la implementacion de esta parte de codigo:

Captura de datos: Se utiliza std::getline para capturar cadenas como el nombre y el correo, y std::cin para capturar la edad (un entero).
Limpieza del buffer: Después de capturar la edad con std::cin, se limpia el buffer para evitar problemas al usar std::getline posteriormente.
Confirmación: Se imprime un mensaje para confirmar que los datos fueron registrados correctamente.
Mostrar datos (opcional): Se incluye un método adicional mostrarDatos para verificar que los datos se guardaron correctamente.
Personalización
Si necesitas que esta función haga algo más específico, como validar los datos ingresados (por ejemplo, verificar que el correo tenga un formato válido o que la edad sea positiva), puedes agregar lógica adicional dentro del método accept().




*/

}
//////////////////////////////////7
void Registro_Usuario::on_buttonBox_rejected()
{
    MainWindow *ventanaP = new MainWindow();
    ventanaP->show();
    /*
    Declaración de la función:

void Registro_Usuario::on_buttonBox_rejected()
void: Indica que esta función no devuelve ningún valor.

Registro_Usuario::: Esto significa que la función pertenece a la clase Registro_Usuario. Es una función miembro de esta clase.

on_buttonBox_rejected: Es el nombre de la función. Por el contexto, parece ser un manejador de eventos (event handler) 
que se ejecuta cuando ocurre una acción específica, como rechazar o cancelar algo en una interfaz gráfica.

     Cuerpo de la funcion:
     
     MainWindow *ventanaP = new MainWindow();
ventanaP->show();

MainWindow *ventanaP: Declara un puntero llamado ventanaP que apunta a un objeto de tipo MainWindow. 
Esto significa que se está creando dinámicamente una nueva ventana principal.

new MainWindow(): Se utiliza el operador new para crear una instancia de la clase MainWindow en el heap (memoria dinámica).
 Esto es común en aplicaciones gráficas para manejar ventanas o widgets.
 
ventanaP->show();: Llama al método show() del objeto ventanaP. Este método generalmente pertenece a bibliotecas gráficas como Qt 
y se utiliza para mostrar la ventana en pantalla.

/////////////7implementacion del codigo con qt:
Registro_Usuario: Es probablemente una clase que representa una ventana o formulario donde el usuario puede registrarse.
on_buttonBox_rejected: Es un manejador que se ejecuta cuando el usuario cancela o rechaza una acción (por ejemplo, al presionar un botón de "Cancelar").
MainWindow: Representa la ventana principal de la aplicación. Al cancelar el registro, se cierra la ventana actual y se muestra la ventana principal.
     
    */
}
/////////////////////////////////////////////////////7
//parte de un programa que gestiona el registro de usuarios en una interfaz gráfica.
void Registro_Usuario::on_buttonBox_accepted()
{
	//aqui se visualiza el registro o como iingresa el usuario, nombre apellido usuario y contraseña
// usuario no debe de contener espacios , Captura de datos del formulario
    QString nombre = ui->RNombre->text();
    QString apellido = ui->RApellido->text();
    QString usuario = ui->RUsuario->text();
    QString password = ui->RContras->text();
    /*
    en la captura de los datos del usuario:
    ui: Es un puntero al objeto que gestiona la interfaz gráfica de la clase Registro_Usuario. Este objeto contiene los widgets del formulario.
    
RNombre, RApellido, RUsuario, RContras: Son los nombres de los widgets (probablemente campos de texto) definidos en el archivo de diseño de Qt (archivo .ui).

text(): Método que obtiene el texto ingresado en cada campo de texto y lo almacena en variables de tipo QString.
    */
/*
//////////////////////7validacion de los campos con la condicion del if:

isEmpty(): Método de QString que verifica si una cadena está vacía.
Condición: Si alguno de los campos (nombre, apellido, usuario, password) está vacío, se ejecuta el bloque dentro del if.
QMessageBox::warning:
Muestra un cuadro de diálogo de advertencia.
this: Hace referencia al objeto actual de la clase Registro_Usuario.
"Error": Título del cuadro de diálogo.
"Todos los campos son obligatorios": Mensaje que se muestra al usuario.
return: Finaliza la ejecución de la función si la validación falla.

*/
    if(nombre.isEmpty() || apellido.isEmpty() || usuario.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Todos los campos son obligatorios");

        return;
        /*
        1) decalracion de la fucnion:               void Registro_Usuario::on_buttonBox_accepted()
      
void: Indica que la función no devuelve ningún valor.

Registro_Usuario::: Especifica que esta función pertenece a la clase Registro_Usuario. 
Esto es parte de la programación orientada a objetos (POO).

on_buttonBox_accepted: Es el nombre de la función. En Qt, este tipo de funciones suelen estar conectadas a señales 
(signals) de widgets, en este caso, probablemente al evento de aceptar un cuadro de diálogo (como un botón "Aceptar").
        
        2) rpoposto de la funcion:
        
        Esta función se ejecuta cuando el usuario presiona el botón "Aceptar" en un formulario de registro. Su objetivo es:
*Capturar los datos ingresados por el usuario (nombre, apellido, usuario y contraseña).
*Validar que todos los campos estén completos.
*Mostrar un mensaje de advertencia si algún campo está vacío.
////////////////////////7por lo tanto la implementacion de esta parte de codigo :

*El usuario presiona el botón "Aceptar"
*La función captura los datos ingresados en los campos de texto.
*Se verifica que todos los campos estén llenos.
*si algún campo está vacío:
*Se muestra un mensaje de advertencia.
*La función termina sin realizar ninguna otra acción.

        */
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////
//para validar que un nombre solo contenga letras (incluyendo caracteres acentuados y la letra "ñ") y espacios. validacion de caracteres:

/*regexNombre.match(nombre): Aplica la expresión regular al contenido de la variable nombre.
.hasMatch(): Devuelve true si la cadena cumple con el patrón definido por la expresión regular.
!: Niega el resultado, es decir, entra al bloque if si no hay coincidencia.
*/
    QRegularExpression regexNombre("^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$");
    if(!regexNombre.match(nombre).hasMatch()) {//Validación del nombre
    
        QMessageBox::warning(this, "Error", "El nombre solo puede contener letras y espacios");
        // para el manejo de error:
        /*
        QMessageBox::warning: Muestra un cuadro de diálogo de advertencia al usuario.
this: Hace referencia al objeto actual (probablemente una ventana o formulario).
"Error": Es el título del cuadro de diálogo.
"El nombre solo puede contener letras y espacios": Es el mensaje que se muestra al usuario.
        */
        
//si ponemos nombre 123, imprime que solo debe tener letras y espacios 
//msmo caso con el apellido, es decir esta validado con string.
/*Declaración de la expresión regular:

QRegularExpression: Es una clase de la biblioteca Qt que permite trabajar con expresiones regulares.
"^[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]+$": Es la expresión regular que define el patrón permitido:
^: Indica el inicio de la cadena.
[a-zA-ZáéíóúÁÉÍÓÚñÑ\\s]: Define un conjunto de caracteres válidos:
a-zA-Z: Letras mayúsculas y minúsculas del alfabeto inglés.
áéíóúÁÉÍÓÚñÑ: Letras con acentos y la letra "ñ" en mayúscula y minúscula.
\\s: Representa un espacio en blanco.
+: Indica que debe haber al menos un carácter válido (y puede haber más).
$: Indica el final de la cadena.

/////////////////////////////////////por lo tanto, en la implementacio:

Se define una expresión regular que valida nombres con letras y espacios.
Se verifica si el contenido de nombre cumple con el patrón.
Si no cumple, se muestra un mensaje de advertencia al usuario.
Este enfoque es útil para validar entradas de texto en aplicaciones gráficas desarrolladas con Qt.

*/

        return;
    }// el codigo utiliza un entorno de interfaz grafica pero la codificacion es en c++
/////////////////////////////////////////////////////////////////////////////////////////////////////
    if(!regexNombre.match(apellido).hasMatch()) {
        QMessageBox::warning(this, "Error", "El apellido solo puede contener letras y espacios");
//se está validando un apellido ingresado por el usuario para asegurarse de que solo contenga letras y espacios.
//Este fragmento de código valida que el apellido ingresado por el usuario cumpla con un formato específico (solo letras y espacios)
//Si no lo es, se notifica al usuario mediante un cuadro de advertencia y se detiene el flujo de la función.

///////////////implementacion de la validacion del apellido:

/*
a) regexNombre.match(apellido):

regexNombre: Es una instancia de la clase QRegularExpression (de Qt), que se utiliza para trabajar con expresiones regulares.

.match(apellido): Este método aplica la expresión regular almacenada en regexNombre al texto contenido en la variable apellido.
 Devuelve un objeto de tipo QRegularExpressionMatch.

b) .hasMatch():

Este método pertenece al objeto QRegularExpressionMatch y devuelve un valor booleano:

true: Si el texto (en este caso, apellido) coincide con el patrón definido en la expresión regular.
false: Si no hay coincidencia.

c) if (!regexNombre.match(apellido).hasMatch()):

Aquí se verifica si NO hay coincidencia con la expresión regular (por eso el operador !).
Si el apellido no cumple con el patrón (es decir, contiene caracteres no permitidos), se ejecuta el bloque de código dentro del if.

d) QMessageBox::warning(...):

QMessageBox: Es una clase de Qt que permite mostrar cuadros de diálogo con mensajes al usuario.

.warning(...): Muestra un cuadro de advertencia con un título, un ícono de advertencia y un mensaje.

this: Hace referencia al objeto actual (probablemente una ventana o formulario).

"Error": Es el título del cuadro de diálogo.
"El apellido solo puede contener letras y espacios": Es el mensaje que se muestra al usuario.
e. return;
Si el apellido no es válido, el programa termina la ejecución de esta función inmediatamente, evitando que continúe con el flujo normal
*/

        return;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////
//una expresión regular para validar que un nombre de usuario no contenga espacios. 
    QRegularExpression regexUsuario("^\\S+$");// para la expresion regular y asegura que la cadena no contenga espacios y tenga al menos un carácter.
    if(!regexUsuario.match(usuario).hasMatch()) {
        QMessageBox::warning(this, "Error", "El usuario no puede contener espacios");
/*// aqui se garantiza que los nombres  de usuarios sean alidados antes de procesarlos.

1)Declaración de la expresión regular:
QRegularExpression: Es una clase de la biblioteca Qt que permite trabajar con expresiones regulares.

"^\\S+$": Es la expresión regular que se utiliza para validar el texto:

^: Indica el inicio de la cadena.
\\S: Coincide con cualquier carácter que no sea un espacio en blanco (incluye espacios, tabulaciones, etc.).
+: Indica que debe haber uno o más caracteres consecutivos que cumplan con la condición.
$: Indica el final de la cadena.

2) Validación del usuario:   if (!regexUsuario.match(usuario).hasMatch()) {

regexUsuario.match(usuario): Aplica la expresión regular al contenido de la variable usuario.
.hasMatch(): Devuelve true si la cadena cumple con la expresión regular, y false si no la cumple.
!: Niega el resultado, es decir, entra al bloque if si no hay coincidencia (es decir, si el usuario contiene espacios).

3)Mostrar mensaje de error:
QMessageBox::warning: Muestra un cuadro de diálogo de advertencia.
this: Hace referencia al objeto actual (probablemente una ventana o formulario).
"Error": Es el título del cuadro de diálogo.
"El usuario no puede contener espacios": Es el mensaje que se muestra al usuario.



*//*
return;: Finaliza la ejecución del método o función en el que se encuentra. 
Esto evita que el programa continúe si el usuario no cumple con la validación.
////////////////////////////por lo tanto:
Se define una expresión regular para validar que el usuario no tenga espacios.
Se verifica si el contenido de usuario cumple con la expresión regular.
Si no cumple, se muestra un mensaje de advertencia y se detiene la ejecución del flujo actual.


*/
        return;
    }
///////////////////////////////////////////////////////////////////////////////////////////////7
//

    if(password.length() < 8) {// la contarseña puede tener hasta 8 caracteres como maximo
        QMessageBox::warning(this, "Error", "La contraseña debe tener al menos 8 caracteres");// condicion de que contraseña alberga hasta 8 caracteres ingresados por tecla
//

/*la condicional en el codigo:

Condicional if:

La estructura comienza con una condición que evalúa si la longitud de la contraseña (password.length()) es menor a 8.
password.length() es un método que devuelve el número de caracteres en la cadena password.

Condición:

password.length() < 8: Si la longitud de la contraseña es menor a 8, la condición se cumple y el bloque de código dentro de las llaves {} se ejecuta.

Acción en caso de que la condición sea verdadera:

QMessageBox::warning:

Este método pertenece a la biblioteca Qt, que se utiliza para crear interfaces gráficas en C++.
Muestra un cuadro de diálogo de advertencia con un título ("Error") y un mensaje ("La contraseña debe tener al menos 8 caracteres").
this hace referencia al objeto actual (probablemente una ventana o formulario) que está mostrando el mensaje.
return;:

Finaliza la ejecución del método o función en el que se encuentra este código. Esto significa que si la contraseña 
no cumple con la longitud mínima, el programa no continuará ejecutando el resto del código en esa función


*/
        return;
        /*Este fragmento de código verifica si la contraseña ingresada tiene menos de 8 caracteres. Si es así:

Muestra un mensaje de advertencia al usuario indicando que la contraseña debe tener al menos 8 caracteres.
Detiene la ejecución de la función actual con return.
        
        */
    }
/////////////////////////////////////////////////////////////////////////////////////////////
    if(buscar(Usuarios, usuario.toStdString())) {
        QMessageBox::warning(this, "Error", "El usuario ya está registrado");
// si usuario es cuando tiene el mismo nombre  de ingreso  aun con diferente clave al ingresar previamente.
/*
Explicación:
Condicional if:

La estructura comienza con una condición if, que evalúa si la función buscar devuelve un valor verdadero (true).
La función buscar parece ser una función personalizada que toma dos argumentos:
Usuarios: Probablemente una colección (como un vector, lista, o arreglo) que contiene los usuarios registrados.
usuario.toStdString(): Convierte el objeto usuario (posiblemente un QString) a un std::string para que sea compatible con la función buscar.
Propósito: Verificar si el usuario ya existe en la lista de usuarios registrados.

Llamada a QMessageBox::warning:

Si la condición del if es verdadera (es decir, el usuario ya está registrado), se ejecuta este bloque de código.
QMessageBox::warning es una función de la biblioteca Qt que muestra un cuadro de diálogo de advertencia al usuario.
this: Hace referencia al objeto actual (probablemente una ventana o formulario).
"Error": Es el título del cuadro de diálogo.
"El usuario ya está registrado": Es el mensaje que se muestra al usuario.
Propósito: Informar al usuario que el nombre ya está registrado.

return:

La instrucción return finaliza la ejecución de la función actual. Esto significa que no se ejecutará ningún código adicional después de este punto si la condición del if es verdadera.
Propósito: Detener el flujo del programa en este punto, ya que no tiene sentido continuar si el usuario ya existe.

Resumen del flujo:
Se verifica si el usuario ya está registrado mediante la función buscar.
Si el usuario existe:
Se muestra un cuadro de advertencia con un mensaje de error.
Se detiene la ejecución de la función actual con return.


*/
        return;
    }
/////////////////////////////////////////////////////////////////////////////////////////

/*
n programa que gestiona usuarios en una aplicación, probablemente con una interfaz gráfica 
basada en Qt Framework (dado el uso de QStringList, QCheckBox, y toStdString).
*/
    Usuario nuevo;//Creación de un objeto Usuario definida previamente clase atributos como nombre, apellido, usuario, password, id.
    nuevo.nombre = nombre.toStdString();///asignacion de los nombres
    nuevo.apellido = apellido.toStdString();
    nuevo.usuario = usuario.toStdString();
    nuevo.password = password.toStdString();
    nuevo.id = generarID();
/*
nombre, apellido, usuario, password: Son variables (probablemente de tipo QString) que contienen información proporcionada por el usuario. 
Estas se convierten a cadenas estándar de C++ (std::string) usando el método toStdString() y se asignan a los atributos correspondientes del objeto nuevo.

generarID(): Es una función que probablemente genera un identificador único para el usuario. Este valor se asigna al atributo id.
*/
    nuevo.preferencias = nullptr;
    nuevo.categoriasPreferidas = nullptr;
    nuevo.historial = nullptr;
    nuevo.carrito = nullptr;
    nuevo.listaDeseos = nullptr;
/*
inicializacion con punteros a nullptr:

Aquí se inicializan varios punteros a nullptr, lo que indica que estas propiedades del usuario no tienen valores asignados todavía. 
Esto es una buena práctica para evitar punteros colgantes o errores de acceso a memoria.

*/
    QStringList selectedBrands;
    for(QCheckBox *checkbox : brandCheckboxes) {
        if(checkbox->isChecked()) {
            selectedBrands << checkbox->text();
        }
        /* gestion de las marcas seleccionadas:
        
        QStringList selectedBrands;: Se declara una lista de cadenas (QStringList) para almacenar las marcas seleccionadas.
brandCheckboxes: Es una colección (probablemente un contenedor como QList<QCheckBox*>) que contiene punteros a casillas de verificación (QCheckBox).
Bucle for: Recorre cada casilla de verificación en brandCheckboxes:
Si la casilla está marcada (checkbox->isChecked()), se agrega su texto (checkbox->text()) a la lista selectedBrands.
        ////////////////por lo tanto tiene como objetivo la implementacion para: 
        
Crear un nuevo usuario (Usuario nuevo) y asignarle valores básicos como nombre, apellido, usuario, contraseña e ID.
Inicializar punteros relacionados con preferencias, historial, carrito, etc., a nullptr.
Recopilar las marcas seleccionadas por el usuario a través de casillas de verificación y almacenarlas en una lista (selectedBrands).

        */
    }
////////////////////////////////////////////////////////////////////////////////////
//utiliza un bucle for basado en rango para iterar sobre una colección de objetos  del QCheckBox (parte de una interfaz gráfica creada con Qt).

    for(QCheckBox *checkbox : brandCheckboxes) {
        if(checkbox->isChecked()) {
            std::string marca = checkbox->text().toStdString();
            insertarLista(nuevo.preferencias, marca);//Inserción en una lista
        }
    }
    
    /*
    ///////////77Explicacion del bucle for:
    
    QCheckBox *checkbox: Declara un puntero a un objeto QCheckBox. Esto significa que en cada iteración, el puntero checkbox apuntará a un elemento de la colección brandCheckboxes.
brandCheckboxes: Es una colección (probablemente un contenedor de Qt, como QList o std::vector) que contiene punteros a objetos QCheckBox.
:: Indica que se está utilizando un bucle basado en rango, que recorre automáticamente todos los elementos de la colección.

/////////////////////verificacion del estado del checkbox:     if(checkbox->isChecked())

checkbox->isChecked(): Llama al método isChecked() del objeto QCheckBox para verificar si el checkbox está marcado (devuelve true si lo está).
Si el checkbox está marcado, se ejecuta el bloque de código dentro del if.

//////////////////////como se obtiene el texto del checkbox:    std::string marca = checkbox->text().toStdString();

checkbox->text(): Obtiene el texto asociado al checkbox (probablemente el nombre de una marca, en este caso).
.toStdString(): Convierte el texto de tipo QString (propio de Qt) a un objeto de tipo std::string (propio de la biblioteca estándar de C++).

/////////////manera en como se inserta en la lista:

insertarLista: Es una función definida por el programador (no es estándar). Su propósito parece ser insertar un elemento (marca) en una lista.
nuevo.preferencias: Es un atributo o estructura que representa una lista o colección donde se almacenan las preferencias del usuario.
marca: Es el texto del checkbox convertido a std::string, que se agrega a la lista.

/////////por lo tanto la funcionalidad de esta parte de codigo consiste que:

Se recorre la colección brandCheckboxes, que contiene punteros a checkboxes.
Para cada checkbox, se verifica si está marcado (isChecked()).
Si está marcado, se obtiene su texto (text()), se convierte a std::string y se almacena en la variable marca.
Finalmente, se inserta el texto en una lista de preferencias mediante la función insertarLista.

cuando el usuario marca "Nike" y "adidas", el código detectará que esos checkboxes están marcados, los va a extraer dichos textos "Nike" y "adidas", para 
luego Los insertará en la lista nuevo.preferencias.  aqui se captura opciones del usuario por pantalla.

    */
//////////////////////////////////////////////////////////////////////////////////
    insertar(Usuarios, nuevo);
// aqui para mostrar un mensaje de confirmacion.
    QMessageBox::information(this, "Registro exitoso",
                             "Usuario registrado:\n\n"
                             "Nombre: " + nombre + "\n"
                                            "Usuario: " + usuario + "\n"
                                             "ID: " + QString::fromStdString(nuevo.id));


    this->close();

    MainWindow *ventanaP = new MainWindow();
    ventanaP->show();
    /*
    1. Inserción de un usuario en una estructura de datos:    insertar(Usuarios, nuevo);

insertar: Es una función que probablemente agrega un nuevo usuario (nuevo) a una estructura de datos llamada Usuarios.
Usuarios podría ser una lista, vector, mapa u otra colección que almacena los datos de los usuarios.
nuevo es un objeto que representa al usuario que se está registrando. Este objeto probablemente tiene atributos como nombre, usuario e id.

2. Mostrar un mensaje de confirmación: 

QMessageBox::information: Es una función de Qt que muestra un cuadro de diálogo informativo.
this: Se refiere al objeto actual (probablemente una ventana o formulario donde ocurre el registro).
"Registro exitoso": Es el título del cuadro de diálogo.
"Usuario registrado:\n\nNombre: " + nombre + ...: Es el mensaje que se muestra en el cuadro de diálogo. Incluye:
El nombre del usuario (nombre).
El nombre de usuario (usuario).
El ID del usuario (nuevo.id), que se convierte a un QString usando QString::fromStdString (porque nuevo.id parece ser un std::string).
    
    3. Cerrar la ventana actual
    
    his->close(): Cierra la ventana o formulario actual. Esto indica que el registro del usuario ha finalizado y ya no se necesita esta ventana.
    
    4.Abrir la ventana principal
    
    MainWindow: Es la clase que representa la ventana principal de la aplicación.
ventanaP: Es un puntero a un nuevo objeto de tipo MainWindow.
ventanaP->show(): Muestra la ventana principal en pantalla.

///////////////////7por lo tanto en el registro y navegacion de ventanas:

Se registra un nuevo usuario en la estructura Usuarios.
Se muestra un cuadro de diálogo confirmando el registro exitoso, con los datos del usuario.
Se cierra la ventana actual (probablemente un formulario de registro).
Se abre la ventana principal de la aplicación.
    
    */
}

