#pragma once

#include "estructuras.h"



Nodoarbol* crearNodo(Usuario valor);
Nodoarbol* insertar(Nodoarbol*& raiz, Usuario& usuario);
Nodoarbol* buscar(Nodoarbol* raiz, const std::string& usuario);
bool verificarPassword(Nodoarbol* nodo, const std::string& password);
void ComandoRegistrarUsuario();
Usuario* ComandoIngresarUsuario();
void imprimirUsuario(Usuario& usuario);
void seleccionarPreferencias(Usuario* usuario);

extern Nodoarbol* Usuarios;
/*
////////explicacion:

utiliza estructuras de datos para gestionar usuarios,  en un sistema de registro e inicio de sesión.

1. #pragma once
 Es una directiva de preprocesador que evita que el archivo de cabecera se incluya más de 
una vez en el mismo archivo fuente. Esto previene errores de redefinición y mejora la eficiencia de compilación.

2. #include "estructuras.h"
Incluye un archivo de cabecera llamado estructuras.h, que probablemente contiene definiciones 
de estructuras como Nodoarbol y Usuario. estructuras esenciales para el funcionamiento del programa.

3. Declaración de funciones
El programa declara varias funciones que trabajan con un árbol binario (probablemente un árbol de búsqueda binaria)
 para gestionar usuarios:
 
 a. Nodoarbol* crearNodo(Usuario valor);
 Crea un nuevo nodo del árbol con un valor de tipo Usuario. Devuelve un puntero al nodo creado.

b. Nodoarbol* insertar(Nodoarbol*& raiz, Usuario& usuario);
Inserta un nuevo usuario en el árbol binario. La raíz del árbol se pasa por referencia para que pueda ser modificada
 si es necesario.
 
 c. Nodoarbol* buscar(Nodoarbol* raiz, const std::string& usuario);
Propósito: Busca un nodo en el árbol que coincida con el nombre de usuario proporcionado. Devuelve
un puntero al nodo encontrado o nullptr si no existe.


d. bool verificarPassword(Nodoarbol* nodo, const std::string& password);
Propósito: Verifica si la contraseña proporcionada coincide con la almacenada en el nodo del árbol.

e. void ComandoRegistrarUsuario();
Propósito: Implementa la lógica para registrar un nuevo usuario. Probablemente interactúa con el usuario para
 obtener datos y luego llama a insertar.
 
 f. Usuario* ComandoIngresarUsuario();
Propósito: Implementa la lógica para que un usuario inicie sesión. Probablemente utiliza buscar y verificarPassword
 para autenticar al usuario.
 
 g. void imprimirUsuario(Usuario& usuario);
Propósito: Imprime la información de un usuario en la consola. Es útil para depuración o visualización.

h. void seleccionarPreferencias(Usuario* usuario);
Propósito: Permite al usuario seleccionar o modificar sus preferencias. Esto sugiere que la estructura Usuario tiene 
un campo relacionado con preferencias.


4. extern Nodoarbol* Usuarios;
Propósito: Declara una variable global llamada Usuarios que apunta a la raíz del árbol binario. La palabra clave extern 
indica que esta variable está definida en otro archivo fuente
 
 //////////////////////7por lo tanto la fucnionalidad seria:
 Este programa parece ser parte de un sistema de gestión de usuarios que utiliza un árbol binario para almacenar y organizar los datos. Las funciones permiten:

Crear y registrar nuevos usuarios.
Buscar y autenticar usuarios existentes.
Imprimir información de usuarios.
Modificar preferencias de los usuarios.
El uso de un árbol binario  los usuarios están organizados de manera que facilite búsquedas rápidas.
 
 
 
 
*/