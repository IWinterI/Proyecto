#include "usuario.h"
#include "utilidades.h"
#include "catalogo.h"
#include <iostream>
#include <sstream>
#include <chrono>
#include <thread>

Nodoarbol* Usuarios = nullptr;

Nodoarbol *crearNodo(Usuario valor)
{
    Nodoarbol *nuevo = new Nodoarbol;
    nuevo->dato = valor;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;
    return nuevo;
}

Nodoarbol *insertar(Nodoarbol *&raiz, Usuario &usuario)
{
    if (raiz == nullptr)
    {
        raiz = crearNodo(usuario);
        return raiz;
    }

    if (usuario.usuario < raiz->dato.usuario)
    {
        raiz->izquierda = insertar(raiz->izquierda, usuario);
    }
    else if (usuario.usuario > raiz->dato.usuario)
    {
        raiz->derecha = insertar(raiz->derecha, usuario);
    }

    return raiz;
}

Nodoarbol *buscar(Nodoarbol *raiz, const std::string &usuario)
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
}

bool verificarPassword(Nodoarbol *nodo, const std::string &password)
{
    return nodo && nodo->dato.password == password;
}






