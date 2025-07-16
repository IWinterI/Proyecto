// producto dialog

#include "productodialog.h"
#include "ui_productodialog.h"
/*
#include "productodialog.h": Incluye el archivo de cabecera (header file) de la clase productodialog. 
Este archivo contiene la declaración de la clase y sus miembros (atributos y métodos) se maneja en qt creator designer 
#include "ui_productodialog.h": Incluye el archivo generado automáticamente por Qt Designer que define 
la interfaz gráfica (UI) de productodialog. Este archivo se genera al diseñar la ventana en Qt Designer y compilar el proyecto.
*/
productodialog::productodialog(const Producto& producto, QWidget *parent)
    : QDialog(parent)//heeda de productodialog
    , ui(new Ui::productodialog)
    
    /*productodialog::productodialog: Define el constructor de la clase productodialog. El prefijo productodialog:: indica 
	que este constructor pertenece a la clase productodialog. para la implementacion (.cpp)
const Producto& producto: Recibe un objeto constante de tipo Producto como parámetro. Esto significa que el constructor puede 
acceder a los datos del objeto producto, sin llegar a modificarlo 

QWidget *parent: Es un puntero al widget padre. En Qt, los widgets pueden tener un "padre" que controla su ciclo de vida.
 Si no se especifica, el widget será independiente.
 QDialog(parent): Llama al constructor de la clase base QDialog (de la cual productodialog hereda). 
 Esto asegura que la ventana se comporte como un cuadro de diálogo donde se interactua con el usuario 
 Configura la herencia: Llama al constructor de la clase base QDialog para que productodialog se comporte como un cuadro de diálogo.
 Inicializa la interfaz gráfica: Crea una instancia de Ui::productodialog y la asigna al puntero ui. Esto permite que el programa acceda y 
 manipule los elementos de la interfaz gráfica diseñados en Qt asi como de botones de inicio.
 
 ui(new Ui::productodialog): Inicializa el puntero ui con una nueva instancia de Ui::productodialog. 
 Este puntero se utiliza para manejar los elementos de la interfaz gráfica definidos en el archivo ui_productodialog.h.
    */
    ////por lo tanto:
    /*
    Recibe un objeto Producto y un widget padre (raiz principal). 
Inicializa la clase base QDialog. y Configura la interfaz gráfica utilizando el archivo generado automáticamente por Qt
    */
{
    ui->setupUi(this);
/*
ui->setupUi(this);: // donde ui flechita siguiente a setupUi
aqui es donde se inicializa la interfaz gráfica de usuario (UI) de la ventana o diálogo. en primera instancia se muestra iniciar secion o registro de usuario
ui es un puntero a una clase generada automáticamente por Qt (normalmente llamada Ui::NombreDeLaVentana).
El método setupUi(this) configura todos los elementos visuales (botones, etiquetas, cuadros de texto, etc.) dentro del qt creator 
 definidos en el archivo .ui (diseñado con Qt Designer) y los asocia con la ventana actual (this). 
*/

    ui->lblNombre->setText(QString::fromStdString(producto.descripcion));// descripcion del producto caracteristica o el atributo que tenga.
    /*ui->lblNombre->setText(...):
Aquí se está configurando el texto de un elemento de la interfaz llamado lblNombre (una etiqueta o QLabel).
producto.descripcion es un atributo del objeto producto (donde una instancia de una clase que representa un producto). para implementar en interfaz 
Como producto.descripcion es un std::string (cadena estándar de C++), se convierte a un QString (cadena utilizada por Qt) usando QString::fromStdString() de qt*/
    ui->lblMarca->setText(QString::fromStdString(producto.marca));//tipo de marca del producto asi como Nike es marca de ropaa tipo deportiva o zapatos sport
    
    /*
    ui->lblMarca->setText(...):
Similar al caso anterior, se configura el texto de la etiqueta lblMarca con el valor de producto.marca, convertido de std::string a QString.
    */
    ui->lblPrecio->setText(QString::number(producto.precio, 'f', 2));
    /*ui->lblPrecio->setText(...):
Aquí se configura el texto de la etiqueta lblPrecio con el precio del producto.
producto.precio es un número (como float o double).caso de double  
QString::number() convierte el número a una cadena (QString).
'f' indica que se formatea como un número de punto flotante. del float
2 especifica que se mostrarán 2 decimales como un set presicion toma dependencia de la cantidad de decimales que indica el nuumero dentro en parentesis()
    
    */
    ui->lblCalidad->setText(QString::number(producto.calidad));//calidad
    /*
    ui->lblCalidad->setText(...):
Aquí se configura el texto de la etiqueta lblCalidad con la calidad del producto, la calidad de uno a 5 como un playstore cuando se ve la calificacion de producto 
producto.calidad  un número entero o flotante, este caso es entero por ser de calidad rango de producto de(1-5)
QString::number() vacion que convierte este número a un QString. convierte numero a string 
    */
    ui->lblCategoria->setText(QString::fromStdString(producto.categoria));// categoria 
    
    /*
    ui->lblCategoria->setText(...):// refiere al tipo de producto ropa, zapato,maquillaje,....
Similar a las primeras líneas implementa uiflechita siguiente, se configura el texto de la etiqueta lblCategoria con el valor de 
producto.categoria, convertido de std::string a QString. standar de string a un string modo qt.
    */

    setWindowTitle("Detalles del Producto");
    /*setWindowTitle(...):
Esta línea establece el título de la ventana o diálogo, donde, "Detalles del Producto" es el texto que aparecerá en la barra de título de la ventana en superior
    */
}
/*en aplicaciones Qt que utilizan el patrón MVC (Modelo-Vista-Controlador), 
donde los datos (productos del catalogo ) se pasan a la vista (la ventana) para ser mostrados al usuario y este lo sleccione en preferencias
//////////////////por lo tanto, en este codigo:
Inicializa la interfaz gráfica de la ventana con setupUi. a partir de aqui se configuran las etiquetas 
Configura varias etiquetas (lblNombre, lblMarca, lblPrecio, lblCalidad, lblCategoria) para mostrar información de un objeto producto.
Establece el título de la ventana como "Detalles del Producto" los detalles son la informacion (dato ) actual del producto si sea precio ocaracteristicas
*/
productodialog::~productodialog()
{/*productodialog::~productodialog():
Este es el destructor de la clase productodialog. aprendimos de clase en youtube profesora,En C++, 
un destructor es una función especializada  que se ejecuta automáticamente al momento en que un objeto 
 de la clase es destruido (por ejemplo, cuando sale de su ámbito (ventana) o se elimina explícitamente con delete que  libera memoria).

delete ui;:
Dentro del destructor, se utiliza delete para liberar la memoria asignada dinámicamente al miembro ui. Esto es importante para evitar fugas de memoria
El destructor se asegura de que todos los recursos asignados dinámicamente por la clase sean liberados antes de que el objeto sea destruido.
*/
    delete ui;
}

void productodialog::on_pushButton_clicked()
{/*
Cuando el usuario hace clic en el botón pushButton, se ejecuta el método on_pushButton_clicked.
 Este método simplemente cierra la ventana o diálogo actual llamando a this->close() como comando de la intefaz grafica de qt
 
 this: Es un puntero que hace referencia a actual de la clase productodialog. En este caso, se refiere a la ventana o diálogo que está siendo manejado en ese momento
close(): Es un método heredado de la clase base QWidget (o una de sus derivadas). Este método cierra la ventana o diálogo actual desde qt
*/
    this->close();
}

