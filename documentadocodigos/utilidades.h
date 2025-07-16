#pragma once

#include "estructuras.h"
#include <string>
/*
1. #pragma once: Es una directiva de preprocesador que evita que un archivo de cabecera (header file) sea incluido más de una 
vez en un mismo archivo fuente durante la compilación.

2. #include "estructuras.h":Esta línea incluye un archivo de cabecera llamado estructuras.h.
Los archivos .h suelen contener definiciones de estructuras, clases, funciones, constantes, 
o variables globales que serán utilizadas en el programa.

3. #include <string>: Esta línea incluye la biblioteca estándar de C++ para trabajar con cadenas de texto (std::string).
Es parte de la STL (Standard Template Library) y permite manejar cadenas de forma más segura y funcional que los arreglos de caracteres (char[]).
ejemplo: std::cout << saludo << std::endl;


*/
////////////////////////////////
std::string generarID();
std::string aMinusculas(const std::string &texto);
std::string leertexto();
void clearScreen();
void pausarConsola();
void opcioninvalida(int min, int max);
void printCentered(const std::string &text, int width = 50);
void encabezado(const std::string &titulo);
void seccion(const std::string &titulo);
/*
1. std::string generarID();
Propósito: Esta función probablemente genera un identificador único (ID) en forma de cadena de texto. para asignar identificadores a usuarios, 
productos, registros, etc.

2. std::string aMinusculas(const std::string &texto);
Propósito: Convierte una cadena de texto a minúsculas.
Parámetro: Recibe una referencia constante a un std::string (el texto a convertir).

3. std::string leertexto();
Propósito: Lee una entrada de texto desde el usuario.
Retorno: Devuelve el texto ingresado como un std::string.

4. void clearScreen();
Propósito: Limpia la pantalla de la consola.

5. void pausarConsola();
Propósito: Pausa la ejecución del programa hasta que el usuario presione una tecla.

6. void opcioninvalida(int min, int max);
Propósito: Muestra un mensaje de error cuando el usuario selecciona una opción fuera del rango permitido.
Parámetros:
min: Valor mínimo permitido.
max: Valor máximo permitido

7. void printCentered(const std::string &text, int width = 50);  
Implementación típica: Calcula los espacios necesarios para centrar el texto y los imprime antes del texto.
Propósito: Imprime un texto centrado en la consola.
Parámetros:
text: El texto a imprimir.
width: El ancho total de la línea (por defecto, 50 caracteres).

8. void encabezado(const std::string &titulo);
Propósito: Imprime un encabezado estilizado con un título.
Parámetro: Recibe el título como un std::string.

9. void seccion(const std::string &titulo);
Propósito: Similar a encabezado, pero probablemente se usa para dividir secciones dentro del programa.
Parámetro: Recibe el título de la sección.

//por lo tanto:
Este conjunto de funciones sugiere que el programa está diseñado para ser interactivo y amigable con el usuario. Podría ser un sistema de menús 
o una aplicación de consola que organiza su flujo de trabajo con encabezados, secciones, validación de entradas y limpieza de pantalla.


*/

////////////////////////////////////////
// se trabaja con dos tipos de listas: ListaString (listas de cadenas de texto) y ListaProducto (listas de objetos de tipo Producto).
void insertarLista(ListaString& lista, const std::string& valor);
bool existeEnLista(ListaString lista, const std::string& valor);
void insertarEnLista(ListaProducto& lista, const Producto& valor);
int longitudLista(ListaProducto lista);
Producto& obtenerElementoEn(ListaProducto lista, int indice);
void barajarLista(ListaProducto& lista);
void barajarLista(ListaString& lista);
/*
1. void insertarLista(ListaString& lista, const std::string& valor);
Propósito: Inserta un elemento de tipo std::string en una lista de cadenas (ListaString).
Parámetros:
ListaString& lista: Una referencia a la lista de cadenas donde se insertará el valor.
const std::string& valor: El valor de tipo std::string que se desea insertar.
Funcionamiento:
La función probablemente agrega el valor al final de la lista o en una posición específica, dependiendo de cómo esté implementada la estructura ListaString.

2. bool existeEnLista(ListaString lista, const std::string& valor);
Propósito: Verifica si un valor de tipo std::string existe en una lista de cadenas (ListaString).
Parámetros:
ListaString lista: Una copia de la lista de cadenas donde se buscará el valor.
const std::string& valor: El valor que se desea buscar.
Funcionamiento:
La función recorre la lista y compara cada elemento con el valor proporcionado. Si encuentra una coincidencia, devuelve true; de lo contrario, devuelve false.

3. void insertarEnLista(ListaProducto& lista, const Producto& valor);
Propósito: Inserta un elemento de tipo Producto en una lista de productos (ListaProducto).
Parámetros:
ListaProducto& lista: Una referencia a la lista de productos donde se insertará el valor.
const Producto& valor: El objeto de tipo Producto que se desea insertar.

4. int longitudLista(ListaProducto lista);
Propósito: Calcula la longitud (cantidad de elementos) de una lista de productos (ListaProducto).
Parámetros:
ListaProducto lista: Una copia de la lista de productos cuya longitud se desea calcular.
Funcionamiento:
La función recorre la lista y cuenta los elementos, devolviendo un entero que representa la cantidad total.

5. Producto& obtenerElementoEn(ListaProducto lista, int indice);
Propósito: Obtiene una referencia al elemento en una posición específica de la lista de productos (ListaProducto).
Parámetros:
ListaProducto lista: Una copia de la lista de productos.
int indice: La posición del elemento que se desea obtener.
Funcionamiento:
La función accede al elemento en la posición indice y devuelve una referencia a él.

6. void barajarLista(ListaProducto& lista);
Propósito: Mezcla aleatoriamente los elementos de una lista de productos (ListaProducto).
Parámetros:
ListaProducto& lista: Una referencia a la lista de productos que se desea barajar.
Funcionamiento:
Utiliza un algoritmo de mezcla (como el algoritmo de Fisher-Yates) para reorganizar los elementos de la lista en un orden aleatorio

7. void barajarLista(ListaString& lista);
Propósito: Mezcla aleatoriamente los elementos de una lista de cadenas (ListaString).
Parámetros:
ListaString& lista: Una referencia a la lista de cadenas que se desea barajar.
Funcionamiento:
Similar a barajarLista para ListaProducto, pero trabaja con cadenas

/// para su implementacion ,  la Definición de Tipos de Datos con ListaString y ListaProducto 
probablemente son estructuras o clases que encapsulan listas de cadenas y productos, respectivamente. 
*/

/////////////////////////////////////7
bool buscarEnSet(SetInt set, int valor);
void insertarEnSet(SetInt& set, int valor);
/*
1. bool buscarEnSet(SetInt set, int valor);
Esta función tiene como propósito buscar un valor en un conjunto (SetInt) y devolver un valor booleano (true o false) dependiendo de si el valor está presente o no.

la estructura que posee:
Tipo de retorno: bool indica que la función devuelve un valor lógico (verdadero o falso).
Parámetros:
SetInt set: Se pasa el conjunto como argumento. Aquí parece que se pasa por valor, lo que significa que se crea una copia del conjunto dentro de la función (esto puede ser ineficiente si el conjunto es grande).
int valor: Es el valor entero que se desea buscar en el conjunto.
Funcionamiento esperado:
La función probablemente recorre el conjunto o utiliza un método interno del contenedor para verificar si el valor existe. y
Devuelve true si el valor está presente y false si no lo está.

2. void insertarEnSet(SetInt& set, int valor);
Esta función tiene como propósito insertar un valor en el conjunto (SetInt).

Estructura:
Tipo de retorno: void indica que la función no devuelve ningún valor.
Parámetros:
SetInt& set: El conjunto se pasa por referencia (gracias al símbolo &), lo que significa que cualquier cambio realizado dentro de la función afectará directamente al conjunto original. Esto es eficiente porque evita copiar el conjunto.
int valor: Es el valor entero que se desea insertar en el conjunto.

*/
//////////////////////////////////////////////
//mapas (estructuras de datos tipo std::map) en C++

void incrementarEnMapa(MapaStringInt& mapa, const std::string& clave);
void incrementarEnMapa(MapaIntInt& mapa, int clave);
bool mapaEstaVacio(MapaStringInt mapa);
bool mapaEstaVacio(MapaIntInt mapa);

/*
1. Función incrementarEnMapa:
Esta función está sobrecargada, lo que significa que tiene dos versiones con el mismo nombre pero diferentes parámetros.
 Esto permite que la función trabaje con diferentes tipos de mapas.

Primera versión:      void incrementarEnMapa(MapaStringInt& mapa, const std::string& clave);

Parámetros:
MapaStringInt& mapa: Un mapa que asocia claves de tipo std::string con valores de tipo int. El uso de & indica que el mapa se pasa por referencia,
lo que permite modificarlo directamente.
const std::string& clave: Una clave de tipo std::string que se usará para buscar o insertar en el mapa. Se pasa como referencia constante
 para evitar copias innecesarias.
Propósito: Incrementa el valor asociado a la clave dada en el mapa. Si la clave no existe, probablemente la función la inserta con un valor inicial de 1.

Segunda versión:    void incrementarEnMapa(MapaIntInt& mapa, int clave);

Parámetros:
MapaIntInt& mapa: Un mapa que asocia claves de tipo int con valores de tipo int.
int clave: Una clave de tipo entero.
Propósito: Similar a la primera versión, pero trabaja con claves enteras en lugar de cadenas (std::string).

Ambas versiones permiten trabajar con diferentes tipos de mapas, dependiendo de si las claves son cadenas o enteros.

 ////////2. Función mapaEstaVacio


Esta función también está sobrecargada y tiene dos versiones para trabajar con diferentes tipos de mapas.

Primera versión:      bool mapaEstaVacio(MapaStringInt mapa);
Parámetros:
MapaStringInt mapa: Un mapa que asocia claves de tipo std::string con valores de tipo int. Aquí el mapa se pasa por valor, lo que significa que se crea una copia del mapa original.
Propósito: Verifica si el mapa está vacío. Devuelve true si el mapa no contiene elementos, y false en caso contrario.

Segunda versión:    bool mapaEstaVacio(MapaIntInt mapa);
Parámetros:
MapaIntInt mapa: Un mapa que asocia claves de tipo int con valores de tipo int.
Propósito u objetivo : Igual que la primera versión, pero trabaja con mapas que tienen claves enteras.

Detalles importantes:
Sobrecarga de funciones: Las funciones incrementarEnMapa y mapaEstaVacio están sobrecargadas para trabajar con diferentes tipos de mapas 
(MapaStringInt y MapaIntInt).
Tipos personalizados: Los nombres MapaStringInt y MapaIntInt probablemente son alias definidos con typedef o using. Por ejemplo:

using MapaStringInt = std::map<std::string, int>;
using MapaIntInt = std::map<int, int>;

Paso por referencia vs. por valor:
En incrementarEnMapa, los mapas se pasan por referencia (&) para modificar el mapa original.
En mapaEstaVacio, los mapas se pasan por valor, lo que puede ser ineficiente si los mapas son grandes, ya que se crea una copia.

el proposito es similar al objetivo de cada parte del programa
*/


//////////////////////////////////////