// estructuras.h

#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

/*////////////////uso de directivas dentro del modulo archivo estructura.h

1)#pragma once:

Es una directiva de preprocesador que evita que un archivo de encabezado (header file) sea incluido más de una vez en un mismo 
archivo fuente durante la compilación, es por ello que previene posibles errores de redefinicion y mejora la eficicencia durante la fase de compilacion, 
con  #pragma once se  asegura que esas definiciones no se procesen varias veces sino como vez unica.

2)#include <string>:

permite incluyir  la biblioteca estándar de C++ para trabajar con cadenas de texto (std::string), de este tipo para procesar texto de nuestro catalogo 
de productos y asi poder manipular y manejar las cadenas de textos en la consulta del producto de manera mas segura la validacion de datos de entradas de texto 
ya que lo convierte internamente a minuscula asi hallamos ingresados en mayuscula, hace la comparacion  y al coincidir se muestra el producto , se maneja mejor
con string que con  los arreglo de caracter tipo (char []). usado por ejemplo en:
 std::string categoriaLower = aMinusculas(categoriaBuscada);
 
 3)#include <vector>:
 
permite incluyir la biblioteca estándar para trabajar con vectores (std::vector), que trabajan como  contenedores dinámicos 
similares a arreglos ya trabajados , pero con tamaño ajustable de manera automatica, aqui, el uso comun para el vector es el de almacenar 
y gestionar las colecciones  de datos o informacion de los productos en el catalogo 

4) #include <iostream>:

Incluye  a esta biblioteca estándar para entrada y salida de datos en consola, permitiendo el uso de std::cin, std::cout, y std::cerr 
para interactuar con el usuario al ingresar el produco como texto 

5)#include <iomanip>:

se implemento esta biblioteca estándar para manipular la salida formateada en consola y para controlar la precisión de números decimales, 
alinear texto, o establecer anchos de campo.

////////////por lo tanto:

en esta parte del programa,  se esta configuarando  el entorno necesario para trabajar con cadenas, listas , entrada y salida estandar 
y formateo de los datos , lo que nos permite  manipular datos y comunicarse con el usuario que consultara el producto en base a su preferencia 
, al usar #pragma once asegura que el archivo de encabezado no cause  choque por las multiples inclusiones en funciones y estructuras 


*/


struct Producto
{
	/*
	se define una estructura llamada producto donde tiene los siguientes miembros como:  descripción, ID, marca, precio, calidad y categoría.
Permite inicializar los atributos  del producto (miembros)con valores predeterminados o personalizados. un producto se muestra por su nombre , 
tipo de produsto(descripcion), id, el tipo de marca si es nike o no, precio en $ , su calidad (1-5),y categoria de ropa o maquillaje...
	*/
    std::string descripcion;
    int id;
    std::string marca;
    double precio;
    int calidad;
    std::string categoria;

    Producto(std::string desc = "", int id = 0, std::string marca = "",
             double precio = 0.0, int calidad = 1, std::string categoria = "")//descripcion → Cadena vacía ""//marca → Cadena vacía ""//precio → 0.0.//id → 0//
            // calidad → 1 //categoria → Cadena vacía ""//
        : descripcion(desc), id(id), marca(marca), precio(precio), categoria(categoria)
        /*
        aqui tiene un constructor por defecto  permitiendo inicializar el miembro y atributos dentro de la estructura, los parametros por defecto, si no se les 
        proporciona valores al crear un producto , como es el caso , entonces como ya esta creado, se asignan valores predeterminados, la inicialización 
		de la lista es  después de los dos puntos (:) inicializa directamente , y los valores proporcionados y predeterminados 

        */
        
    {
        if (calidad < 1)
            this->calidad = 1;
        else if (calidad > 5)
            this->calidad = 5;
        else
            this->calidad = calidad;//El uso de this->calidad refiere a que este atributo calidad lo lleva a  la instancia actual o producto actual tiene la calidad de 1 al 5
            
            
            /*Validación del atributo calidad, donde el dato validado dentro del cuerpo del programa se realiza una validacion es decir que evalua que este dentro 
            del rango de calificacion de  1 al 
			si la calidad es un atributo, evalua la condicion de que si:
			si el valor de calidad es menor que 1, se ajusta a 1// Si es mayor que 5, se ajusta a 5//Si está entre 1 y 5, se asigna directamente al producto

			
			*/
            
    }
/*
 //////////////DEFINICION DE LA ESTRUCTURA PRODUCTO
 
 La estructura Producto se utiliza para modelar con el  objeto de contener  información sobre un producto dentro del catalogo, los atributos siguienetes son:
std::string descripcion:  permite Almacenar una descripción del producto.
int id: Identificador único del producto como dato de variable miembro id
std::string marca: Marca del producto que esta dentro del catalogo y marca por referencia en la busqueda por el usuario 
double precio: Precio del producto bajo un rango comprendido entre  10-200$ el minimo no puede ser mayor que el maximo
int calidad:  variable tipo dato entero que define el nivel de calidad del producto (entre 1 y 5). supongase como las estrellas de calificacion en playstore

std::string categoria: Categoría a la que pertenece el producto ya sea de ropa , calzado o maquillaje en nuestro maxiestore


*/

};
///////////////////////////////uso de varias estructuras de datos
/*
Se deefine varias estructuras de datos que representan listas enlazadas simples empledas  para diferentes propósitos del programa:


*/
struct NodoProducto {
    Producto dato;// // Un dato de tipo Producto ( Producto es otra estructura o clase definida en el programa en .h productodialog).
    NodoProducto* siguiente;//// Puntero que apunta al siguiente nodo en la lista despues de inicializar.
    /*
 Representa una lista enlazada de productos, el funcionamiento de cada nodo posee un producto y un puntero que apunta a nodo siguiente.

    */
};
using ListaProducto = NodoProducto*;// ListaProducto es un llamado  alias para el puntero al primer nodo de la lista struct NodoProducto

struct Nodolista
{
    std::string dato;//Un dato de tipo string.
    Nodolista *siguiente;//// Puntero al siguiente nodo en la lista
    /*
 en esta estructura, se tiene una lista enlazada de cadenas de texto (std::string), fucnciona similar a ListaProducto donde los 
 datos almacenados son texto cadena

    
    */
    
};
using ListaString = Nodolista*;// el llamado dentro de la estructura Nodolista con un puntero al primer nodo de la lista.

struct NodoSetInt {
	
	
    int dato;//Un dato de tipo entero.
    NodoSetInt* siguiente;//Puntero que apunta  al siguiente nodo en la lista.
};
using SetInt = NodoSetInt*;// llamado de la estructura con un alias que apunte al primer nodo de la lista.
//
/*
en esta estructura, se representa un conjunto de enteros que usa una lista enlazada, para ello,  cada nodo contiene a su vez un entero y un puntero
que debe apuntar al siguiente nodo, de modo que el llamado de set  en la implementacion del programa

*/
struct NodoMapaStringInt {
	/*
	
	*/
    std::string clave;// miembro de l estructura clave, Clave de tipo string.
    int valor;  //// Valor asociado de tipo entero.
    NodoMapaStringInt* siguiente;  //// Puntero al siguiente nodo en la lista. apuntando siempre a siguiente 
    
    /* el objetivo con esta estructura,es de tener representado un historial (mapa como diccionario)donde las claves  on cadenas de textos y valores enteros.
	de alli a cada nodo contiene una clave-valor y un puntero que apunte al siguiente nodo de la lista, al tratarse de una lista enlazada, en el mapa de busqueda 


    */
};
using MapaStringInt = NodoMapaStringInt*;

struct NodoMapaIntInt {
    int clave;//Clave de tipo entero.
    int valor;//// Valor asociado de tipo entero.
    NodoMapaIntInt* siguiente;//Puntero al siguiente nodo en la lista
    
    /* en la parte funcional,  tiene como proposito de representar una especie de mapa de busqueda donde las claves y valores son todos datos tipo de entero,
    fucniona como MapaStringInt pero aqui las claves son enteros y no cadenas 
   

    */
};
using MapaIntInt = NodoMapaIntInt*;// el llamado de la estructura con NodoMapaIntInt un  Alias para un puntero al primer nodo de la lista.
///////////////////////////////////////////////7
struct Usuario
{
    std::string nombre;// Nombre del usuario
    std::string apellido; // Apellido del usuario
    std::string id;// Identificador único del usuario
    std::string usuario; // Nombre de usuario (username)si debe ser usuarios distitos y misma clave y distinto del nombre
    std::string password;// Contraseña del usuario hasta 8 numeros 
    Nodolista *preferencias; // Puntero a una lista de preferencias
    Nodolista *categoriasPreferidas;// Puntero a una lista de categorías preferidas
    Nodolista *historial;// Puntero a una lista de historial
    Nodolista *carrito;// Puntero a una lista de elementos en el carrito de compra especie de catalogo virtual que selecciona producto por preferencia y marca.dato
    Nodolista *listaDeseos;//// Puntero a una lista de deseos las que se sugieren al lad de los productos que estan de modo general en preferencias
    /*
    explicacion de la estructura:
    Estructura del archivo de encabezado donde puede llamarse al Usuario.h. Este archivo define la estructura Usuario y declara los elementos necesarios struct.
    std::string: Se utiliza para almacenar cadenas de texto como el nombre, apellido, ID, usuario y contraseña. aqui, el Nodolista *  se basan en
	punteros a estructuras o clase llamadas Nodolista que son listas enlazadas y estructuras de datos personalizadas para un mejor
	manejo de  las preferencias, categorías, historial, carrito y lista de deseos del usuario.
	
	//////////////implementacion de la estrustura con pragma once:
	al archivo principal main.cpp se usan estas estructuras, si se inicializan punteros a nullptr(si el caso es que no hay lista)
,entonces, modularmente se separa la definicion de Usuario en un archivo de encabezado permitiendo reutilizar en diferentes partes dentro del programa.
Los punteros del Nodolista permiten un manejo dinamico de listas con los datos relacionados al usuario.

    usuario1.preferencias = nullptr;
    usuario1.categoriasPreferidas = nullptr;
    usuario1.historial = nullptr;
    usuario1.carrito = nullptr;
    usuario1.listaDeseos = nullptr;
    
    */
    
};
/////////////////////////////

/* las ultimas dos estructuras, struct Nodoarbol y struct Recomendaciones se implementan juntas  en  arboles binarios donde,
Un árbol binario (Nodoarbol):para organizar usuarios o productos de manera jerárquica.
La estructura Recomendaciones:asociada a un usuario específico que se registro , almacenando las listas de productos recomendados para ese usuario
de acuerdo a su preferencia  en la seleccion despues de ingresar.

*/
struct Nodoarbol
{
    Usuario dato;//Dato almacenado en el nodo (tipo Usuario).
    Nodoarbol *izquierda;//// Puntero al hijo izquierdo.
    Nodoarbol *derecha;// Puntero al hijo derecho.
    /*
    La estructura Nodoarbol representa un nodo de un árbol binario, donde cada nodo  contiene un dato  de tipo Usuario 
	( definido en otro lugar del programa como archivo usuario.cpp de la implementacion y usuario.h de la declaracion de funcion ).
      hay dos punteros uno a(izquierda y derecha) que apuntan a otros nodos del árbol, representando los hijos izquierdo y derecho.evalua si hay hijos por nodo
      donde se puede hacer una busqueda binaria 
    */
    
};

struct Recomendaciones
{
	
/*	Miembros de tipo ListaProducto: de la lista enlazada, donde cada miembro apunta  a una lista de productos recomendados de acuerdo a la preferencia
(criterio especifico) ya sea por:
	*/
    void limitarRecomendaciones(int maxPorSeccion = 10);
    ListaProducto porMarcasPreferidas = nullptr;//porMarcasPreferidas: Productos de marcas favoritas del usuario.
    ListaProducto porOtrasMarcasFrecuentes = nullptr;//porOtrasMarcasFrecuentes: Productos de marcas que el usuario compra con frecuencia.
    ListaProducto porCategoriaPreferida = nullptr;//porCategoriaPreferida: Productos de la categoría favorita del usuario.
    ListaProducto porCategoriaFrecuente = nullptr;//porCategoriaFrecuente: Productos de categorías que el usuario compra frecuentemente.
    ListaProducto porCalidad = nullptr;//porCalidad: Productos recomendados basados en su calidad.
};
/*
La estructura Recomendaciones se diseño para gestionar listas de productos recomendados, organizadas por diferentes criterios, donde:

limitarRecomendaciones: refiere un metodo donde esta una funcion miembro que limita la cantidad de recomendaciones por la seccion.(categoria maquillaje o ropa)
tiene como parametro que el valor por defecto int maxPorSeccion = 10, usando como limite hasta 10 como limite en producto.

*/

