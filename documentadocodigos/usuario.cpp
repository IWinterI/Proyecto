// para usuario

#include "usuario.h"
#include "utilidades.h"
#include "catalogo.h"
#include <iostream>
#include <sstream>
#include <chrono>
#include <thread>
/*
Inclusión de Archivos de Cabecera:

Archivos personalizados: Estos archivos (usuario.h, utilidades.h, catalogo.h) son cabeceras creadas por el programador.
usuario.h: Probablemente define una clase o funciones relacionadas con la gestión de usuarios (como nombre, contraseña, permisos, etc.).
utilidades.h: Es posible que contenga funciones auxiliares o herramientas genéricas que se usan en varias partes del programa
(como validaciones, conversiones, etc.).
catalogo.h: Podría estar relacionado con la gestión de un catálogo, como productos, servicios o cualquier tipo de lista estructurada. 

Inclusión de Librerías Estándar:

son librerías estándar de C++ que aportan funcionalidades específicas:

<iostream>: Permite la entrada y salida de datos (por ejemplo, std::cout para imprimir en consola y std::cin para leer datos).
<sstream>: Proporciona herramientas para trabajar con cadenas de texto como flujos (útil para convertir entre cadenas y otros tipos de datos).
<chrono>: Se utiliza para trabajar con tiempo y fechas, como medir intervalos de tiempo o manejar temporizadores.
<thread>: Permite la creación y gestión de hilos para ejecutar tareas en paralelo o con retardos.

Organización Modular:
que cada archivo tiene una responsabilidad específica:

Cabeceras (.h): Contienen las declaraciones de clases, funciones y constantes. Estas se incluyen en los archivos .cpp correspondientes.
Implementaciones (.cpp): Los archivos .cpp asociados a las cabeceras (usuario.cpp, utilidades.cpp, catalogo.cpp) contendrán la lógica y 
las definiciones de las funciones declaradas en las cabeceras.

COMO fluye el programa:
Gestión de usuarios: Usar la funcionalidad de usuario.h para autenticar o registrar usuarios.
Utilidades: Usar funciones genéricas de utilidades.h para tareas comunes, como formatear datos o validar entradas.
Catálogo: Usar catalogo.h para mostrar, buscar o gestionar elementos en un catálogo.
Uso de librerías estándar:
std::cout y std::cin para interactuar con el usuario.
std::chrono y std::this_thread::sleep_for para manejar tiempos o pausas.



*/
////////////////////////////////////////////////7
Nodoarbol* Usuarios = nullptr;// Declaración de un puntero a un nodo del árbol
//relacionado con la creación de nodos para un árbol binario en C++.
Nodoarbol *crearNodo(Usuario valor)//Función crearNodoF
{//Esta función se encarga de crear un nuevo nodo para el árbol binario.
    Nodoarbol *nuevo = new Nodoarbol;  // creacion del nodo y reservar memoria con new.
    nuevo->dato = valor;// a partir de aqui se asignan los valores.
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;
    return nuevo;// retorno del nodo .Devuelve el puntero al nodo recién creado para que pueda ser utilizado en el árbol.
}

/*
1. Declaración de un puntero a un nodo del árbol:
Nodoarbol*: Declara un puntero a un nodo de tipo Nodoarbol. Este será la raíz del árbol binario.
Usuarios = nullptr;: Inicializa el puntero como nullptr, indicando que el árbol está vacío al inicio

2.Función crearNodo:
Nodoarbol*: Es el tipo de dato que devuelve la función, un puntero a un nodo de tipo Nodoarbol.
Usuario valor: Es el parámetro que recibe la función, un dato de tipo Usuario que será almacenado en el nodo.

new Nodoarbol: Reserva dinámicamente memoria para un nuevo nodo de tipo Nodoarbol.
nuevo: Es un puntero que apunta al nodo recién creado.

//asignacion de los valore:
nuevo->dato = valor;: Asigna el valor recibido como parámetro (valor) al campo dato del nodo.
nuevo->izquierda = nullptr;: Inicializa el puntero izquierdo (izquierda) como nullptr, indicando que no tiene hijo izquierdo.
nuevo->derecha = nullptr;: Inicializa el puntero derecho (derecha) como nullptr, indicando que no tiene hijo derecho.
//////////////////////implementacion del arbol binario cuyos miembros de la estructura son:



dato: Para almacenar el valor del nodo (en este caso, de tipo Usuario).
izquierda: Un puntero al hijo izquierdo.
derecha: Un puntero al hijo derecho.
El árbol comienza vacío (Usuarios = nullptr) y se van añadiendo nodos mediante la función crearNodo.


*/

////////////////////////////////////////
//////////////////implementa una función para insertar un nodo en un árbol binario de búsqueda 
Nodoarbol *insertar(Nodoarbol *&raiz, Usuario &usuario)// funcion definida para el nodo.
{
    if (raiz == nullptr)//Caso base: Árbol vacío:
    {
        raiz = crearNodo(usuario);
        return raiz;
    }

    if (usuario.usuario < raiz->dato.usuario)  //Comparación para decidir la ubicación:
    {
        raiz->izquierda = insertar(raiz->izquierda, usuario);
    }
    else if (usuario.usuario > raiz->dato.usuario)
    {
        raiz->derecha = insertar(raiz->derecha, usuario);
    }

    return raiz;//Retorno final
    /* 
	Definición de la función:        Nodoarbol *insertar(Nodoarbol *&raiz, Usuario &usuario)
	
1)	Parámetros:
Nodoarbol *&raiz: Un puntero por referencia que apunta a la raíz del árbol o subárbol donde se realizará la inserción.
Usuario &usuario: Una referencia a un objeto de tipo Usuario, que contiene los datos que se desean insertar en el árbol.
Retorno: Devuelve un puntero al nodo raíz del árbol (o subárbol) después de la insercion.

2)Caso base: Árbol vacío:
    
    Si el árbol (o subárbol) está vacío (raiz == nullptr), se crea un nuevo nodo con los datos del usuario utilizando la función crearNodo(usuario).
Este nuevo nodo se asigna como la raíz del árbol (o subárbol) y se retorna.

3)Comparación para decidir la ubicación:

Se compara el valor del atributo usuario del objeto Usuario con el valor almacenado en el nodo actual (raiz->dato.usuario):
Si es menor, se inserta en el subárbol izquierdo (raiz->izquierda).
Si es mayor, se inserta en el subárbol derecho (raiz->derecha).
La función se llama recursivamente para continuar la búsqueda en el subárbol correspondiente.

4)Retorno final:
Una vez realizada la inserción, se retorna la raíz del árbol (o subárbol) actualizado.

/////////////////////7por lo tanto, la implementacion seria:

Si el árbol está vacío, se crea un nuevo nodo con los datos del usuario y se convierte en la raíz.
Si el árbol no está vacío, se compara el valor del usuario con el nodo actual:
Si es menor, se busca en el subárbol izquierdo.
Si es mayor, se busca en el subárbol derecho.
Este proceso se repite recursivamente hasta encontrar la posición adecuada para el nuevo nodo.
Finalmente, se retorna la raíz del árbol actualizado.

se implementarioa con otras Funciones auxiliares :
crearNodo: Esta función no está incluida en el fragmento, pero se asume que crea un nuevo nodo del árbol con los datos del usuario. 
Nodoarbol *crearNodo(Usuario &usuario) {
    Nodoarbol *nuevo = new Nodoarbol();
    nuevo->dato = usuario;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;
    return nuevo;
}


Estructura del nodo (Nodoarbol):
struct Nodoarbol {
    Usuario dato;
    Nodoarbol *izquierda;
    Nodoarbol *derecha;
};



Estructura del usuario (Usuario):
struct Usuario {
    std::string usuario; // Nombre o identificador del usuario
    // Otros atributos del usuario
};
/////////////////////implementacion de la fucnion de nodo para la jerarquia:

Utiliza recursión para encontrar la posición adecuada en el árbol, basándose en comparaciones entre
 los valores del usuario a insertar y los valores ya presentes en los nodos del árbol.
 
    */
    
}
///////////////////////////////////////////////////////////////////
/*
implementa una función para buscar un nodo en un árbol binario  basado en un valor específico como el nombre de un usuario.

*/
Nodoarbol *buscar(Nodoarbol *raiz, const std::string &usuario)//  se define la funcion.
{
    if (raiz == nullptr || raiz->dato.usuario == usuario)
    {
        return raiz;
    }

    if (usuario < raiz->dato.usuario)
    {
        return buscar(raiz->izquierda, usuario);
    }
    else
    {
        return buscar(raiz->derecha, usuario);
    }
    /*
    
    1. Definición de la función:
    Nodoarbol *: Es el tipo de dato que devuelve la función. En este caso, devuelve un puntero a un nodo del árbol (Nodoarbol).
Nodoarbol *raiz: Es un puntero al nodo raíz del árbol. Este es el punto de partida para la búsqueda.
const std::string &usuario: Es el valor que se busca en el árbol. Se pasa como una referencia constante para evitar copia
innecesarias y garantizar que no se modifique.

2.Clase o estructura Nodoarbol:

define una clase o estructura llamada Nodoarbol que representa los nodos del árbol. 
usuario: Almacena el dato que identifica al nodo (en este caso, el nombre del usuario).
izquierdo y derecho: Son punteros a los nodos hijos izquierdo y derecho, respectivamente.
Constructor: Inicializa el nodo con un valor y establece los punteros a nullptr.

3.Lógica de la función buscar: utiliza recursión para recorrer el árbol. como :

Nodoarbol *buscar(Nodoarbol *raiz, const std::string &usuario) {
    if (raiz == nullptr) {
        return nullptr; // Caso base: el nodo no existe
    }
    if (raiz->usuario == usuario) {
        return raiz; // Caso base: se encontró el nodo
    }
    // Buscar en el subárbol izquierdo o derecho
    if (usuario < raiz->usuario) {
        return buscar(raiz->izquierdo, usuario); // Buscar en el lado izquierdo
    } else { // despalzamiento a nodo siguiente
        return buscar(raiz->derecho, usuario); // Buscar en el lado derecho
    }
}

////////por lo tanto, los casos bases y la implementacion serian:

Caso base 1: Si el nodo actual (raiz) es nullptr, significa que no se encontró el usuario.
Caso base 2: Si el valor del nodo actual coincide con el usuario buscado, se devuelve el nodo.
Recursión: Si el usuario buscado es menor que el valor del nodo actual, se busca en el subárbol izquierdo; de lo contrario, en el derecho

La función buscar recorre un árbol binario de búsqueda para localizar un nodo que contenga un valor específico. Utiliza recursión para navegar 
por los subárboles izquierdo y derecho, dependiendo de la comparación entre el valor buscado y el valor del nodo actual


    
    */
    
}
///////////////////////////////////////////////////
//  utiliza una evaluación lógica directamente para verificar la validez(validacion) del nodo y la coincidencia de la contraseña en una sola línea.
bool verificarPassword(Nodoarbol *nodo, const std::string &password)
{
    return nodo && nodo->dato.password == password;
    /*
    Declaración de la función:

//bool verificarPassword(Nodoarbol *nodo, const std::string &password):


La función se llama verificarPassword. Devuelve un valor de tipo bool (verdadero o falso).

Recibe dos parámetros:
   Nodoarbol *nodo: Un puntero a un objeto de tipo Nodoarbol. Esto indica que la función trabaja con nodos de un árbol.
   
   const std::string &password: Una referencia constante a un objeto de tipo std::string. Esto significa que el valor de password no 
   será modificado dentro de la función.Cuerpo de la función:

//return nodo && nodo->dato.password == password;: 

La función evalúa y devuelve el resultado de una expresión lógica.
 
 
    Desglose de la expresión:
   nodo: Verifica si el puntero nodo no es nulo (es decir, si apunta a un nodo válido).

    nodo->dato.password == password: Si el puntero es válido, accede al miembro dato del nodo y compara su atributo password 
con el valor de password pasado como argumento.
    &&: Es un operador lógico "AND". La expresión completa será verdadera solo si ambas condiciones son verdaderas:
El puntero nodo no es nulo y el atributo password del nodo coincide con el valor de password.

//////////////777por lo tanto la fucncionalidad del programa seria:

Esta función verifica si: Existe un nodo válido (nodo no es nulo)/El atributo password del nodo coincide con el valor proporcionado como argumento y si
Si ambas condiciones se cumplen, devuelve true. De lo contrario, devuelve false.
    
    */
    
}






