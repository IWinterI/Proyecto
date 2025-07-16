#include "utilidades.h"
#include <iostream>
#include <random>
#include <algorithm>
#include <cctype>
#include <limits>
/*
incluye varias bibliotecas y un archivo de cabecera personalizado (utilidades.h).

Estas son bibliotecas estándar de C++ que proporcionan funcionalidades específicas:

#include <iostream>: Permite la entrada y salida de datos, como usar std::cin para leer datos del usuario y std::cout para imprimir en la consola.

#include <random>: Proporciona herramientas para generar números aleatorios, como generadores de números pseudoaleatorios y distribuciones estadísticas.

#include <algorithm>: Contiene funciones para manipular colecciones de datos, como ordenar (std::sort), buscar (std::find), o transformar elementos (std::transform).

#include <cctype>: Ofrece funciones para manipular caracteres, como verificar si un carácter es alfabético (std::isalpha), convertir a mayúsculas (std::toupper), o a minúsculas (std::tolower).

#include <limits>: Proporciona información sobre los límites de los tipos de datos, como el valor máximo o mínimo que puede almacenar un int o un double.

Inclusión de un archivo de cabecera personalizado:

#include "utilidades.h":  un archivo creado por el programador para manejar datos, utilidades.h contiene funciones, clases o constantes que 
son específicas del programa.

 Declaraciones globales: Constantes, variables globales o funciones declaradas en utilidades.h.
 
Funciones principales: Uso de las bibliotecas estándar para realizar tareas como: Generar números aleatorios con <random>.
Manipular colecciones o arreglos con <algorithm>.
Procesar caracteres con <cctype>.
Función main(): El punto de entrada del programa, donde se ejecuta la lógica principal main al .cpp donde se maneja la implementacion de las funciones.



*/
///////////////////////////////////
const std::string CARACTERES_VALIDOS =
    "1234567890"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";
    //las cadenas de texto entre comillas dobles (") que están separadas por espacios o líneas consecutivas se concatenan automáticamente. 
    //equivalente:    "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    /*1) en la declaracion con constante:
    
    const: Indica que el valor de esta variable no puede ser modificado después de su inicialización.
std::string: Es el tipo de dato que representa una cadena de texto en C++ (de la biblioteca estándar).
CARACTERES_VALIDOS: Es el nombre de la constante, que sigue una convención de nombres en mayúsculas para indicar que es inmutable.

2)asignacion dde valor( esto es fucnional para la validacion:
Aquí se asigna una cadena de texto que contiene caracteres válidos (números, letras mayúsculas y minúsculas).
////////////////////por lo tanto la funcionalidad es :
 definir un conjunto de caracteres permitidos o válidos es la forma en que realizamos la validacion de los datos, consiste en:Validar entradas de usuario,
Generar contraseñas aleatorias cuando el usuario ingrese, Filtrar caracteres en un texto caso para el id del usuario

 el proceso de código se crea una constante de tipo std::string que contiene todos los números del 0 al 9, las letras mayúsculas de la A a la Z y 
las letras minúsculas de la a a la z. La concatenación implícita en la misma linea.
    
    */
////////////////////////////////////
std::string generarID()
{
    std::random_device rd;//// desde aqui se generan los numeros aleatorios para la id 
    std::mt19937 generador(rd());
    std::uniform_int_distribution<int> distribucion(0, CARACTERES_VALIDOS.size() - 1);/// hasta aqui se genera los numeros aleatorios. 
//Se construye un identificador de 10 caracteres seleccionados aleatoriamente.
    std::string id;
    for (int i = 0; i < 10; i++)// constructor del identificador  id usuario
    {
        id += CARACTERES_VALIDOS[distribucion(generador)];
    }
    return id;//Retorno del identificador donde Devuelve la cadena generada como resultado de la función.
    // generará un identificador aleatorio como "aB3dE9FgH2" la funcion.
    /*
   define una función llamada generarID que genera un identificador aleatorio de 10 caracteres utilizando una lista de caracteres válidos.(validacion precia)
    1.Declaración de la función:  std::string generarID()

std::string: Es el tipo de dato que devuelve la función, en este caso, una cadena de texto.
generarID: Es el nombre de la función


2.Generación de números aleatorios:

std::random_device rd: Es un generador de números aleatorios que se utiliza como semilla para inicializar el generador principal.
std::mt19937 generador(rd()): Es un generador de números aleatorios basado en el algoritmo Mersenne Twister, inicializado con la semilla rd.
std::uniform_int_distribution<int>: Define una distribución uniforme de números enteros en un rango específico. En este caso, el rango es de 0 
a CARACTERES_VALIDOS.size() - 1, donde CARACTERES_VALIDOS es una cadena o lista de caracteres válidos.


3. Construcción del identificador:
std::string id: Se declara una cadena vacía que almacenará el identificador generado.
for (int i = 0; i < 10; i++): Un bucle que se ejecuta 10 veces para generar un identificador de 10 caracteres.
CARACTERES_VALIDOS[distribucion(generador)]: Se selecciona un carácter aleatorio de la lista CARACTERES_VALIDOS utilizando el índice 
generado por la distribución aleatoria.
id += ...: Se agrega el carácter seleccionado a la cadena a id



    
    */
}
////////////////////////////////////////////////
//Define una función llamada aMinusculas que convierte todos los caracteres de una cadena de texto (std::string) a minúsculas.
std::string aMinusculas(const std::string &texto)
{
    std::string resultado = texto;// desde aqui la transformacion de caracteres
    std::transform(resultado.begin(), resultado.end(), resultado.begin(),
                   [](unsigned char c)
                   { return std::tolower(c); });// desde aqui la transformacion de los caracteres
    return resultado;//Retorno del resultado que  contiene todos los caracteres en minúsculas.
    
    /*
    1. Declaración de la función
    
std::string: Es el tipo de dato que devuelve la función, en este caso, una cadena de texto.
const std::string &texto: Es el parámetro de entrada. Se pasa como una referencia constante para evitar copiar
 la cadena completa y garantizar que no se modifique el valor original.
 
 2.Creación de una copia de la cadena:   std::string resultado = texto;

Se crea una copia de la cadena de entrada (texto) llamada resultado. Esto permite trabajar sobre la copia sin alterar el texto original.

3.Transformación de caracteres:

se utiliza la función std::transform de la biblioteca estándar <algorithm> para convertir cada carácter de la cadena a minúsculas. Desglosemos:

resultado.begin() y resultado.end(): Representan los iteradores que marcan el inicio y el final de la cadena resultado.

resultado.begin() (tercer argumento): Es el iterador donde se almacenará el resultado transformado (en este caso, se sobrescribe en la misma cadena resultado).

[](unsigned char c) { return std::tolower(c); }:
 Es una lambda function (función anónima)toma un carácter(unsigned char c) y devuelve su versión a minúscula utilizando std::tolower.

/////////////// por lo tanto la fucnionalidad  consiste en:
Se recibe una cadena de texto como entrada.
Se crea una copia de la cadena para trabajar sobre ella.
Se transforma cada carácter de la copia a minúsculas usando std::transform y una función lambda.
Se devuelve la cadena transformada.
    
    */
    
}
/////////////////////////////////////////////
/*
aqui una función llamada leertexto() que se utiliza para leer una línea de texto desde la entrada estándar (std::cin) 
y devolverla como una cadena (std::string), eliminando los espacios en blanco al principio y al final de la entrada. 
*/
std::string leertexto()
{
    std::string entrada;
    if (std::cin.peek() == '\n')
    {
        std::cin.ignore();
    }
    std::getline(std::cin, entrada);
    size_t inicio = entrada.find_first_not_of(" ");
    size_t fin = entrada.find_last_not_of(" ");
    if (inicio == std::string::npos)
    {
        return "";
    }
    return entrada.substr(inicio, fin - inicio + 1);
    
    /*
    ////////////estructuracion del programa:
    
    
1)Declaración de la función
std::string leertexto():  La función leertexto devuelve un valor de tipo std::string. No recibe parámetros.

2)Declaración de variables:          std::string entrada;

Se declara una variable entrada de tipo std::string para almacenar la línea de texto que se leerá desde la entrada estándar.

3)Manejo de un salto de línea pendiente:    

    if (std::cin.peek() == '\n')
{
    std::cin.ignore();
}
 donde:
std::cin.peek():  permite inspeccionar el siguiente carácter en el flujo de entrada sin consumirlo.
Si el siguiente carácter es un salto de línea ('\n'), se utiliza std::cin.ignore() para descartarlo.
 Esto es útil para evitar problemas si hay un salto de línea residual en el búfer de entrada.
 
4)Lectura de la línea completa:       std::getline(std::cin, entrada);

std::getline lee una línea completa desde la entrada estándar y la almacena en la variable entrada.

5)Eliminación de espacios en blanco al inicio y al final

size_t inicio = entrada.find_first_not_of(" ");
size_t fin = entrada.find_last_not_of(" ");
find_first_not_of(" "): Encuentra la posición del primer carácter que no sea un espacio en blanco.
find_last_not_of(" "): Encuentra la posición del último carácter que no sea un espacio en blanco.

6)Manejo de cadenas vacías:Si find_first_not_of no encuentra ningún carácter que no sea un espacio (es decir, la cadena está vacía o 
contiene solo espacios), devuelve una cadena vacía ("").

if (inicio == std::string::npos)
{
    return "";
}

7)Recorte de la cadena:     return entrada.substr(inicio, fin - inicio + 1);
donde: substr(inicio, fin - inicio + 1) crea una subcadena desde la posición inicio hasta la posición fin, eliminando 
los espacios en blanco al principio y al final.
////////////////////////////////////////////////por lo tanto la funcionalidad seria:

Verificar si hay un salto de línea pendiente y lo descarta.
Lee una línea completa desde la entrada estándar.
Identifica los límites de los caracteres significativos (no espacios) en la cadena.
Si la cadena está vacía o contiene solo espacios, devuelve una cadena vacía.
Si no, recorta los espacios al principio y al final y devuelve la cadena resultante

    */
}

////////////////////////////////////////////////////
//aqui define una función llamada insertarLista que permite insertar un nuevo elemento al final de una lista enlazada.
void insertarLista(ListaString& lista, const std::string& valor)
{
    Nodolista *nuevo = new Nodolista;//creacion de un nuevo nodo.
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;

    if (lista == nullptr)
    {
        lista = nuevo;
    }
    else
    {
        Nodolista *actual = lista;
        while (actual->siguiente != nullptr)
        {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
    /*
    1)Definición de la función:  void insertarLista(ListaString& lista, const std::string& valor)

ListaString& lista: Es una referencia a la lista enlazada donde se insertará el nuevo nodo. 
Se pasa por referencia para que los cambios realizados dentro de la función afecten directamente a la lista original.

const std::string& valor: Es el valor que se desea insertar en la lista. Se pasa como una referencia constante para 
evitar copias innecesarias y proteger el valor original.

2)Creación de un nuevo nodo:
Nodolista *nuevo = new Nodolista;
nuevo->dato = valor;
nuevo->siguiente = nullptr;

Se crea dinámicamente un nuevo nodo (nuevo) usando new.
Se asigna el valor proporcionado (valor) al campo dato del nodo.
El puntero siguiente del nodo se inicializa como nullptr, indicando que será el último nodo de la lista.

Caso 1: Lista vacía: 

if (lista == nullptr)// Si la lista está vacía (es decir, lista apunta a nullptr), el nuevo nodo se convierte en el primer nodo de la lista.
{
    lista = nuevo;
}

Caso 2: Lista no vacía:

else
{
    Nodolista *actual = lista;
    while (actual->siguiente != nullptr)
    {
        actual = actual->siguiente;
    }
    actual->siguiente = nuevo;
}
//Si la lista no está vacía, se utiliza un puntero auxiliar (actual) para recorrer 
//la lista hasta encontrar el último nodo (aquel cuyo campo siguiente es nullptr).

//Una vez encontrado el último nodo, su campo siguiente se actualiza para apuntar al nuevo nodo, añadiéndolo al final de la lista.

/////////////por lo tanto la fucnionalidad de esta lista enlazada:

1) lista enlazada: Es una estructura de datos compuesta por nodos, donde cada nodo contiene un dato y un puntero al siguiente nodo.
En este caso, ListaString es probablemente un alias para un puntero al primer nodo de la lista (Nodolista*).

2)nodo: La estructura Nodolista no está incluida en el fragmento, pero se puede inferir que tiene al menos dos miembros:
struct Nodolista {
    std::string dato;
    Nodolista* siguiente;
};

3)Gestión dinámica de memoria: Se utiliza new para crear nodos dinámicamente. Es importante asegurarse de liberar la memoria
 con delete cuando los nodos ya no sean necesarios, para evitar fugas de memoria.
 
 para la lista enlazada se tiene que se crea un nuevo nodo con el valor proporcionado.Si la lista está vacía, el nuevo nodo se convierte en el primer nodo.
Si la lista no está vacía, se recorre hasta el final y se enlaza el nuevo nodo al último nodo existente.

    */
}
/////////////////////////////////////////////////////////////////
//define una función llamada existeEnLista que verifica si un valor específico (de tipo std::string) existe dentro de una lista enlazada. 
bool existeEnLista(ListaString lista, const std::string& valor)
{
    Nodolista *actual = lista;
    while (actual != nullptr)
    {
        if (actual->dato == valor)
        {
            return true;//encontrado
        }
        actual = actual->siguiente;
    }
    return false;
    /*
    1.. Declaración de la función:      bool existeEnLista(ListaString lista, const std::string& valor)
    
bool: Es el tipo de retorno de la función. Devuelve true si el valor existe en la lista, y false si no.
ListaString lista: Es el parámetro que representa la lista enlazada. Se asume que ListaString es un alias o tipo definido previamente que representa el nodo inicial de la lista.
const std::string& valor: Es el valor que se busca en la lista. Se pasa como una referencia constante para evitar copias innecesarias y proteger el valor de modificaciones
  
  2.Inicialización del puntero:             Nodolista *actual = lista;
Aquí se inicializa un puntero llamado actual que apunta al primer nodo de la lista (lista).
Se asume que Nodolista es una estructura o clase que representa un nodo de la lista enlazada. Probablemente tiene al menos dos miembros:
dato: El valor almacenado en el nodo.
siguiente: Un puntero al siguiente nodo de la lista.

3)Bucle while para recorrer la lista:       while (actual != nullptr)
Este bucle recorre la lista nodo por nodo. La condición actual != nullptr asegura que el  recorrido se detenga cuando se llegue al final de la lista (es decir, cuando no haya más nodos
  
 4) Comparación del valor=        if (actual->dato == valor) 
En cada iteración, se compara el valor almacenado en el nodo actual (actual->dato) con el valor buscado (valor).
Si son iguales, significa que el valor existe en la lista, y la función retorna true.

5)Avance al siguiente nodo:     actual = actual->siguiente;
Si el valor no coincide, el puntero actual se mueve al siguiente nodo de la lista usando actual->siguiente.

6)Retorno final:  return false;
Si se recorre toda la lista sin encontrar el valor, la función retorna false, indicando que el valor no está en la lista.

/////////////////////por lo tanto la funcionalidad seria:
Resumen del flujo
Se inicializa un puntero al primer nodo de la lista.
Se recorre la lista nodo por nodo.
En cada nodo, se compara el valor almacenado con el valor buscado.
Si se encuentra el valor, se retorna true.
Si se llega al final de la lista sin encontrar el valor, se retorna false.

    */
}
///////////////////////////////
//define una función llamada insertarEnLista que se utiliza para insertar un nuevo elemento (un producto) al final de una lista enlazada
void insertarEnLista(ListaProducto& lista, const Producto& valor) {
    NodoProducto* nuevo = new NodoProducto();
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;
    if (lista == nullptr) {
        lista = nuevo;
    } else {
        NodoProducto* actual = lista;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
    
    /*
    1) definicion de funcion:  void insertarEnLista(ListaProducto& lista, const Producto& valor)

   ListaProducto& lista: Es una referencia a la lista enlazada donde se insertará el nuevo producto. Se pasa por referencia para que los cambios
 realizados en la función afecten directamente a la lista original.
 
const Producto& valor: Es el producto que se desea insertar en la lista. Se pasa como referencia constante para evitar copias innecesarias y 
garantizar que no se modifique dentro de la función.


2) Creación de un nuevo nodo
NodoProducto* nuevo = new NodoProducto();
nuevo->dato = valor;
nuevo->siguiente = nullptr;

NodoProducto* nuevo: Se crea un nuevo nodo dinámicamente en memoria con new.
nuevo->dato = valor: Se asigna el producto (valor) al campo dato del nodo.
nuevo->siguiente = nullptr: Se inicializa el puntero siguiente del nodo como nullptr, ya que será el último nodo de la lista

3)Verificación si la lista está vacía:   if (lista == nullptr) {    lista = nuevo;}
Si la lista está vacía (es decir, lista == nullptr), el nuevo nodo se convierte en el primer nodo de la lista. Esto se logra asignando nuevo a lista.

4)Inserción al final de la lista:  
else {
    NodoProducto* actual = lista;
    while (actual->siguiente != nullptr) {
        actual = actual->siguiente;
    }
    actual->siguiente = nuevo;
}

donde: Si la lista no está vacía, se recorre la lista desde el primer nodo (actual = lista) hasta encontrar el último nodo (aquel cuyo siguiente es nullptr).
Una vez encontrado el último nodo, se actualiza su puntero siguiente para que apunte al nuevo nodo (actual->siguiente = nuevo).

///////////////////7por lo tanto la fucnionalidad del codigo seria: se nesecita estructura del nodo y definicion de lista y estructura producto.

Se crea un nuevo nodo con el producto a insertar.
Si la lista está vacía, el nuevo nodo se convierte en el primer nodo.
Si la lista no está vacía, se recorre hasta el final y se enlaza el nuevo nodo al último nodo existente.
por lo que  agregará los productos p1 y p2 a la lista enlazada, asegurando que estén en el orden en que se insertaron.   
    
    */
}
///////////////////////////////////
int longitudLista(ListaProducto lista) {
    int count = 0;
    NodoProducto* actual = lista;
    while (actual != nullptr) {
        count++;
        actual = actual->siguiente;
    }
    return count;//La función recorre la lista enlazada nodo por nodo, contando cuántos nodos hay, y devuelve ese número.
}
////////////////////////////////////////////////////////
//función llamada longitudLista que calcula la longitud de una lista enlazada de productos. 
Producto& obtenerElementoEn(ListaProducto lista, int indice) {
    NodoProducto* actual = lista;
    for (int i = 0; i < indice; ++i) {
        actual = actual->siguiente;
    }
    return actual->dato;
    /*
    1)Definición de la función:             int longitudLista(ListaProducto lista)
Tipo de retorno: int. La función devuelve un número entero que representa la longitud de la lista.
Parámetro: ListaProducto lista. Se asume que ListaProducto es un tipo de dato que representa el inicio 
de una lista enlazada (probablemente un puntero al primer nodo de la lista).

2) Variables locales:
int count = 0;
NodoProducto* actual = lista;
count: Se inicializa en 0 y se utiliza para contar los nodos de la lista.
actual: Es un puntero que se usa para recorrer la lista. Se inicializa apuntando al inicio de la lista (lista).

3)bucle while:
while (actual != nullptr) {
    count++;
    actual = actual->siguiente;
}
Condición: El bucle se ejecuta mientras actual no sea nullptr (es decir, mientras no se haya llegado al final de la lista).
Cuerpo del bucle: Incrementa el contador count en 1 por cada nodo encontrado y Avanza al siguiente nodo de la lista asignando actual = actual->siguiente

4)Retorno del resultado:  return count;
Una vez que el bucle termina (cuando actual es nullptr), se devuelve el valor de count, que contiene la cantidad de nodos en la lista.

5)Estructura de la lista enlazada: Para que esta función funcione, se asume que la lista enlazada está definida de la siguiente manera:
a)NodoProducto: Representa un nodo de la lista.
b) ListaProducto: Es un puntero al primer nodo de la lista, como:   typedef NodoProducto* ListaProducto;


    */
}
//////////////////////////////////////////////////////////////////////////////
//implementa una función llamada barajarLista que mezcla aleatoriamente los elementos de una lista de productos (ListaProducto). 
void barajarLista(ListaProducto& lista) {
    int n = longitudLista(lista);
    if (n > 1) {
        std::random_device rd;
        std::mt19937 gen(rd());
        for (int i = n - 1; i > 0; --i) {
            std::uniform_int_distribution<int> dist(0, i);
            int j = dist(gen);
            Producto temp = obtenerElementoEn(lista, i);
            obtenerElementoEn(lista, i) = obtenerElementoEn(lista, j);
            obtenerElementoEn(lista, j) = temp;
        }
    }
    /*
    1)Definición de la función:

void barajarLista(ListaProducto& lista)
void: La función no devuelve ningún valor.
ListaProducto& lista: Recibe como parámetro una referencia a una lista de productos (ListaProducto)..

2) Obtener la longitud de la lista

int n = longitudLista(lista);
Aquí se llama a una función longitudLista (que no está definida en el fragmento, pero se asume que existe) para obtener 
el número de elementos en la lista y almacenarlo en la variable n

3)Verificar si la lista tiene más de un elemento:

if (n > 1) {
Si la lista tiene 1 o menos elementos, no es necesario mezclarla, ya que no hay suficientes elementos para intercambiar.
 Por eso, el código dentro del if solo se ejecuta si n > 1
 
 4)Configurar el generador de números aleatorios

std::random_device rd;
std::mt19937 gen(rd());
std::random_device rd: Se utiliza para generar una semilla aleatoria.
std::mt19937 gen(rd()): Se inicializa un generador de números aleatorios basado en el algoritmo Mersenne Twister, utilizando la semilla generada por rd.

5)Mezclar los elementos de la lista

for (int i = n - 1; i > 0; --i) {
Este bucle for recorre la lista desde el último elemento (n - 1) hasta el segundo elemento (i > 0), en orden descendente.
El objetivo es intercambiar cada elemento con otro elemento aleatorio que esté en una posición anterior o igual.


   de esta particion, se tiene:
   
   5.1.1. Generar un índice aleatorio

std::uniform_int_distribution<int> dist(0, i);
int j = dist(gen);
std::uniform_int_distribution<int> dist(0, i): Crea una distribución uniforme de números enteros entre 0 e i.
int j = dist(gen): Genera un índice aleatorio j dentro del rango [0, i].

    5.2.1 Intercambiar los elementos:

Producto temp = obtenerElementoEn(lista, i);
obtenerElementoEn(lista, i) = obtenerElementoEn(lista, j);
obtenerElementoEn(lista, j) = temp;
obtenerElementoEn(lista, i): Se asume que esta función devuelve una referencia al elemento en la posición i de la lista.
Intercambio: para que se haga una lista mezclada aleatoriamente:
                     Se guarda el elemento en la posición i en una variable temporal temp.
                     Se asigna el elemento en la posición j a la posición i
                     Se asigna el valor de temp (el elemento original de i) a la posición j
//////////////por lo tanto, en la implementacion,

Este código implementa el algoritmo de Fisher-Yates (también conocido como "Knuth Shuffle"), que es un método eficiente 
y justo para mezclar elementos de una lista.

 en este segmento de codigo: 
 
Se verifica que la lista tenga más de un elemento.
Se inicializa un generador de números aleatorios.
Se recorre la lista desde el último elemento hacia el primero.
En cada iteración, se selecciona un índice aleatorio y se intercambia el elemento actual con el elemento en ese índice.
Al final, la lista queda mezclada de manera aleatoria.
Este enfoque es eficiente y tiene una complejidad de tiempo de O(n), donde n es el número de elementos en la lista.        

    */
}

////////////////////////////////////////////////////////////////////////////
//define una función llamada buscarEnSet que busca un valor específico dentro de una estructura de datos tipo conjunto (SetInt).

bool buscarEnSet(SetInt set, int valor) {
    NodoSetInt* actual = set;
    while (actual != nullptr) {
        if (actual->dato == valor) return true;
        actual = actual->siguiente;
    }
    return false;
    
    
    
    /*
    1)1. prototipo  de la función:  bool buscarEnSet(SetInt set, int valor)

bool buscarEnSet(SetInt set, int valor)
bool: La función devuelve un valor booleano (true o false), indicando si el valor buscado está presente en el conjunto.
SetInt set: Es el conjunto donde se buscará el valor. Se asume que SetInt es una estructura de datos que contiene nodos enlazados.
int valor: Es el valor que queremos buscar dentro del conjunto

2)Variables locales

NodoSetInt* actual = set;
NodoSetInt* actual: Es un puntero que apunta al nodo actual del conjunto. Inicialmente, apunta al primer nodo del conjunto (set).

3)Bucle while

while (actual != nullptr) {
Este bucle recorre la lista enlazada del conjunto nodo por nodo.
La condición actual != nullptr asegura que el bucle se detenga cuando se llegue al final de la lista (es decir, cuando no haya más nodos)

4)Comparación del valor

if (actual->dato == valor) return true;
En cada iteración, se compara el valor almacenado en el nodo actual (actual->dato) con el valor buscado (valor).
Si se encuentra una coincidencia, la función devuelve true inmediatamente, indicando que el valor está presente en el conjunto.

5)Avance al siguiente nodo:
actual = actual->siguiente;
Si no se encuentra el valor en el nodo actual, el puntero actual avanza al siguiente nodo de la lista enlazada (actual->siguiente).

6)Retorno final

return false;
Si se recorren todos los nodos y no se encuentra el valor, la función devuelve false, indicando que el valor no está en el conjunto.
Estructura general del programa:
Entrada: Un conjunto (SetInt) y un valor entero (valor).
Proceso: Se recorre la lista enlazada del conjunto nodo por nodo,Se compara el valor de cada nodo con el valor buscado,Si se encuentra el valor, se devuelve true.
Si se llega al final de la lista sin encontrar el valor, se devuelve false.
Salida: Un valor booleano (true o false).

/////////////////por lo tanto la funcionalidad del programa radica que:

La función recorrerá los nodos y encontrará el valor (producto), devolviendo true, o si  buscamos un valor que no está en el conjunto,La función recorrerá todos los nodos y devolverá false.

    
    */
    
    
    
}
////////////////////////////////////////////////
//define una función llamada insertarEnSet, que parece estar diseñada para insertar un valor en una estructura de datos personalizada llamada SetInt.
void insertarEnSet(SetInt& set, int valor) {
    if (!buscarEnSet(set, valor)) {
        NodoSetInt* nuevo = new NodoSetInt{valor, nullptr};
        if (set == nullptr) {
            set = nuevo;
        } else {
            NodoSetInt* actual = set;
            while (actual->siguiente != nullptr) {
                actual->siguiente = nuevo;
            }
        }
    }
    /*
    1) Definición de la función:

void insertarEnSet(SetInt& set, int valor).
Tipo de retorno: void, lo que significa que esta función no devuelve ningún valor.
Parámetros:
SetInt& set: Una referencia a un conjunto (SetInt), que parece ser una lista enlazada o una estructura similar.
int valor: El valor entero que se desea insertar en el conjunto.

2)Verificación de existencia del valor:

if (!buscarEnSet(set, valor)) { 
Antes de insertar el valor, se verifica si ya existe en el conjunto utilizando una función llamada buscarEnSet. 
Si el valor no está presente (!buscarEnSet), se procede con la inserción.

3)Creación de un nuevo nodo:

NodoSetInt* nuevo = new NodoSetInt{valor, nullptr};
Se crea un nuevo nodo de tipo NodoSetInt (probablemente una estructura o clase definida previamente). Este nodo:
Contiene el valor a insertar (valor).
Apunta a nullptr, indicando que será el último nodo de la lista.

4) inserción en el conjunto
Caso 1: El conjunto está vacío

Copiar el código
if (set == nullptr) {
    set = nuevo;
}
//Si el conjunto está vacío (set == nullptr), el nuevo nodo se convierte en el primer nodo del conjunto.

Caso 2: El conjunto no está vacío

Copiar el código
else {
    NodoSetInt* actual = set;
    while (actual->siguiente != nullptr) {
        actual = actual->siguiente;
    }
    actual->siguiente = nuevo;
}
//Si el conjunto ya tiene elementos:
a)Se utiliza un puntero (actual) para recorrer la lista enlazada hasta llegar al último nodo (donde actual->siguiente == nullptr).
b)Una vez encontrado el último nodo, se enlaza el nuevo nodo (nuevo) al final de la lista.

/////////////7por lo tanto tien la funcionalidad de:
Este programa implementa la inserción de un valor en una lista enlazada que representa un conjunto (SetInt). La función verifica si el valor 
ya existe antes de insertarlo, y si no, lo agrega al final de la lista.
    
    */
}
///////////////////////////////////////////////
//define una función llamada incrementarEnMapa, que tiene como objetivo incrementar el valor asociado a una clave específica (tipo dato producto catalogo)
//en una estructura de datos personalizada que simula un mapa tabla de diccionario por indices y coincidencias en retorno al buscar.
void incrementarEnMapa(MapaStringInt& mapa, const std::string& clave) {
    NodoMapaStringInt* actual = mapa;
    while (actual != nullptr) {
        if (actual->clave == clave) {
            actual->valor++;
            return;
        }
        actual = actual->siguiente;
    }
    NodoMapaStringInt* nuevo = new NodoMapaStringInt{clave, 1, mapa};
    mapa = nuevo;
    /*
    1. Parámetros de la función:  void incrementarEnMapa(MapaStringInt& mapa, const std::string& clave)
MapaStringInt& mapa: Es una referencia a la estructura que representa el mapa. Este mapa parece estar implementado como una lista enlazada de nodos.
const std::string& clave: Es la clave que se busca en el mapa. Si la clave ya existe, se incrementa su valor asociado. Si no existe,
 se agrega un nuevo nodo con esta clave y un valor inicial de 1.
 
 2.Variables locales

NodoMapaStringInt* actual = mapa;
Se inicializa un puntero llamado actual que apunta al inicio del mapa (la cabeza de la lista enlazada). Este puntero se usará para recorrer la lista.

3.Bucle para buscar la clave

Copiar el código
while (actual != nullptr) {
    if (actual->clave == clave) {
        actual->valor++;
        return;
    }
    actual = actual->siguiente;
}
Condición del bucle: Mientras actual no sea nullptr (es decir, mientras no se haya llegado al final de la lista), se ejecuta el bucle.
Comparación de claves: Si la clave del nodo actual (actual->clave) coincide con la clave buscada (clave), se incrementa el 
valor asociado (actual->valor++) y se termina la función con return.
Avance en la lista: Si no se encuentra la clave en el nodo actual, se pasa al siguiente nodo (actual = actual->siguiente).

4. Inserción de un nuevo nodo: 

Si el bucle termina sin encontrar la clave (es decir, la clave no existe en el mapa), se crea un nuevo nodo:

NodoMapaStringInt* nuevo = new NodoMapaStringInt{clave, 1, mapa};
mapa = nuevo;
Creación del nodo: Se usa new para crear dinámicamente un nuevo nodo de tipo NodoMapaStringInt. Este nodo se inicializa con:
clave: La clave que se buscaba.
1: El valor inicial asociado a la clave.
mapa: El puntero al nodo actual de la lista (la cabeza anterior del mapa). Esto asegura que el nuevo nodo se convierta en la nueva cabeza de la lista.
Actualización del mapa: El puntero mapa se actualiza para que apunte al nuevo nodo, convirtiéndolo en la nueva cabeza de la lista.

5. Estructura de datos utilizada
Aunque no se muestra explícitamente en el código, se puede deducir que MapaStringInt es un alias para un puntero a un nodo de tipo NodoMapaStringInt. 
La estructura de NodoMapaStringInt se puede definirse  así:

struct NodoMapaStringInt {
    std::string clave;       // Clave del nodo
    int valor;               // Valor asociado a la clave
    NodoMapaStringInt* siguiente; // Puntero al siguiente nodo
};
Esto implementa una lista enlazada donde cada nodo contiene:

Una clave de tipo std::string.
Un valor de tipo int.
Un puntero al siguiente nodo.

//////////////////por lo tanto la funcionalidad seria:

La función recorre la lista enlazada buscando un nodo con la clave especificada.
Si encuentra la clave, incrementa su valor y termina.
Si no encuentra la clave, crea un nuevo nodo con la clave y un valor inicial de 1, y lo inserta al inicio de la lista.

    
    */
}
////////////////////////////////////////////////
//define una función llamada incrementarEnMapa que trabaja con una estructura de datos personalizada para manejar un mapa (o diccionario) de enteros a enteros.
void incrementarEnMapa(MapaIntInt& mapa, int clave) {
    NodoMapaIntInt* actual = mapa;
    while (actual != nullptr) {
        if (actual->clave == clave) {
            actual->valor++;
            return;
        }
        actual = actual->siguiente;
    }
    NodoMapaIntInt* nuevo = new NodoMapaIntInt{clave, 1, mapa};
    mapa = nuevo;
    /*
    1. Definición de la función

void incrementarEnMapa(MapaIntInt& mapa, int clave)
MapaIntInt& mapa: Es una referencia a un mapa (probablemente implementado como una lista enlazada). Este mapa contiene pares clave-valor.
int clave: Es la clave que queremos buscar o agregar al mapa.

2.Recorrido del mapa

NodoMapaIntInt* actual = mapa;
while (actual != nullptr) {
    if (actual->clave == clave) {
        actual->valor++;
        return;
    }
    actual = actual->siguiente;
}
NodoMapaIntInt* actual = mapa;: Se inicializa un puntero llamado actual que apunta al inicio del mapa.
while (actual != nullptr): Se recorre la lista enlazada hasta que se llegue al final (nullptr).
if (actual->clave == clave): Si se encuentra un nodo cuya clave coincide con la clave buscada:
Se incrementa el valor asociado a esa clave (actual->valor++).
Se termina la función con return, ya que no es necesario seguir buscando.

3.Inserción de un nuevo nodo

NodoMapaIntInt* nuevo = new NodoMapaIntInt{clave, 1, mapa};
mapa = nuevo;
Si no se encuentra la clave en el mapa, se crea un nuevo nodo con:
clave: La clave que se quiere agregar.
1: El valor inicial asociado a esa clave.
mapa: El puntero al nodo actual del mapa (el nuevo nodo se convierte en la cabeza de la lista enlazada).
Finalmente, el puntero mapa se actualiza para que apunte al nuevo nodo.

///////////////por lo tanto,  la funcionalidad seria:

La función busca si la clave ya existe en el mapa:
Si la encuentra, incrementa el valor asociado.
Si no la encuentra, crea un nuevo nodo con la clave y un valor inicial de 1, y lo inserta al inicio de la lista enlazada.



    */
}
//////////////////////////////////////
bool mapaEstaVacio(MapaStringInt mapa) {
    return mapa == nullptr;
    
    /*
    
    
1.Declaración de la función:

bool mapaEstaVacio(MapaStringInt mapa):
bool: Es el tipo de retorno de la función, lo que significa que esta función devolverá un valor booleano (true o false).
mapaEstaVacio: Es el nombre de la función, que indica que su propósito es verificar si un mapa está vacío.
MapaStringInt mapa: Es el parámetro de entrada de la función. Se espera que sea un objeto o estructura llamada MapaStringInt. 
Este tipo de dato no es estándar en C++, por lo que probablemente sea una clase, estructura o alias definido en otro lugar del programa.

2.Cuerpo de la función:

return mapa == nullptr;:
Aquí se compara el parámetro mapa con nullptr.
nullptr es un valor especial en C++ que representa un puntero nulo, es decir, un puntero que no apunta a ningún objeto válido.
Si mapa es igual a nullptr, significa que no tiene un valor asignado o no apunta a un objeto válido, y la función devolverá true. 
De lo contrario, devolverá false.

    */
}
////////////////////////////////////////////
bool mapaEstaVacio(MapaIntInt mapa) {
    return mapa == nullptr;
    
    /*
    1.Declaración de la función:

bool mapaEstaVacio(MapaIntInt mapa):
La función se llama mapaEstaVacio.
Devuelve un valor de tipo bool (es decir, true o false).
Recibe un parámetro llamado mapa de tipo MapaIntInt.

2.Tipo de dato MapaIntInt:

Aunque no está definido en el fragmento de código, MapaIntInt parece ser un tipo de dato personalizado. Podría ser un alias (usando typedef o using) o una clase/estructura que representa un mapa (estructura de datos que asocia claves con valores).
Es  que MapaIntInt sea un puntero, ya que se compara con nullptr.

3.Cuerpo de la función:

return mapa == nullptr;:
La función verifica si el parámetro mapa es igual a nullptr.
nullptr es un valor especial en C++ que representa un puntero nulo (es decir, que no apunta a ninguna dirección válida en memoria).
Si mapa es nullptr, significa que el mapa está vacío o no ha sido inicializado, y la función devuelve true.
Si mapa no es nullptr, significa que el mapa contiene datos o está inicializado, y la función devuelve false.
    
    */
}
////////////////////