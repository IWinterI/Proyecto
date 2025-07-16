 // catalogo.h
#pragma once

#include "estructuras.h"




void inicializarCatalogo();
ListaProducto buscarPorCategoria(ListaProducto productos, const std::string &categoriaBuscada);
ListaProducto buscarPorRangoPrecios(ListaProducto productos, double precioMin, double precioMax);
ListaProducto buscarPorMarca(ListaProducto productos, const std::string &marcaBuscada);
ListaProducto buscarPorDescripcion(ListaProducto productos, const std::string &textoBuscado);
ListaString obtenerCategoriasUnicas();
ListaString obtenerMarcasUnicas();



extern ListaProducto catalogoGlobal;// ENTRA EN UNA DECLARACION GLOBAL,
/*
Declara una variable global llamada catalogoGlobal de tipo ListaProducto, LA PALABRA CLAVE RSERVADA EXTERN ,
 extern indica que esta variable está definida en otro archivo MODULO .CPP catalogo.cpp especificamente.
*/
/*
Uso de #pragma once: porque es un adirectiva de preprocesador que asegura que el archivo de cabecera (header file)
 solo se incluya una vez durante la compilación, asi evitando repeticiones, evitando problemas de duplicados (como redefiniciones de clases o funciones) 
 nuevamente, siendo una alternativa de inclusión con (#ifndef, #define, #endif).
 
 con #include "estructuras.h" se incluye este archivo que tiene  definiciones de estructuras, tipos de dtos necesario para este tipo de archivo como 
 ListaProducto y ListaString definidos 

Aquí se declaran varias funciones que están implementadas en otro archivo .cpp. Estas funciones trabajan con listas  enlazadas de productos
 (ListaProducto) y cadenas de texto (std::string),diseñadas para realizar operaciones específicas. Vamos una por una:
 
 1)void inicializarCatalogo(); tiene el objetivo de inicializar el catalogo  global de productos (catalogoGlobal).
  cargar datos desde un archivo o establecer valores iniciales que en este caso serian las marcas de productos
  
  2)busqueda dentro del catalogo: estas funciones  filtran o aplican filtros de una lista deproductos  (ListaProducto) 

  
  ListaProducto buscarPorCategoria(ListaProducto productos, const std::string &categoriaBuscada);// aqui Filtra productos que pertenezcan a una categoría específica.
ListaProducto buscarPorRangoPrecios(ListaProducto productos, double precioMin, double precioMax);/  productos cuyo precio esté dentro de un rango definido por precioMin y precioMax. DE (0<=200$)
ListaProducto buscarPorMarca(ListaProducto productos, const std::string &marcaBuscada);//Filtra productos que coincidan con una marca específica: ZAPATOS NIKE
ListaProducto buscarPorDescripcion(ListaProducto productos, const std::string &textoBuscado);//Busca los  productos que contengan un texto específico en su descripción ejenlo: NIKE

3)COMO SE OBTIENE categorías y marcas únicas: ESTAS FUCNIONES SOLO DEVUELVEN  LISTAS DE CADENAS (LISTASTRING) 

ListaString obtenerCategoriasUnicas();// AQUI TODAS LAS CATEGORIAS UNICAS  PRESENTES DENTRO DEL CATALOGO SOLO EL USUARIO SELECCIONA EL DE SU PREFERENCIA 
ListaString obtenerMarcasUnicas();// AQUI TODAS LAS MARCAS UNICAS QUE SE MUESTRAN DESPUES DE  OBTENER LA CATEGORIA DE SU PREFERENCIA 

///////////////// la funcionalidad de este modulo archivo  de cabecera catalogo.h

se tiene como finalidad el de definir a funciones relacionadas con la gestión de un catálogo de productos de moda y maquillaje, para ello,  
declara una variable global (catalogoGlobal) que representa el catálogo con los productos denttro del catalogo, se tiene una dependencia con otro archivo de 
cabecera que es el de estructura .h, en este modulo con el archivo de cabecera .h en pragma once evita la duplicacion de otras fucniones y permite
mantener su diseño modularmente , separando las declaracioes dentro del archivo.h de la implementacion en el archivo catalogo.cpp, de esta manera,
facilita acceso y organizacion asi como el matenimiento del codigo, ya se llaman los comandos en un modulo a parte denominado el main.cpp la principal.




*/

