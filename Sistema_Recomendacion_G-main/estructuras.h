#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>



struct Producto
{
    std::string descripcion;
    int id;
    std::string marca;
    double precio;
    int calidad;
    std::string categoria;

    Producto(std::string desc = "", int id = 0, std::string marca = "",
             double precio = 0.0, int calidad = 1, std::string categoria = "")
        : descripcion(desc), id(id), marca(marca), precio(precio), categoria(categoria)
    {
        if (calidad < 1)
            this->calidad = 1;
        else if (calidad > 5)
            this->calidad = 5;
        else
            this->calidad = calidad;
    }


};

struct NodoProducto {
    Producto dato;
    NodoProducto* siguiente;
};
using ListaProducto = NodoProducto*;

struct Nodolista
{
    std::string dato;
    Nodolista *siguiente;
};
using ListaString = Nodolista*;

struct NodoSetInt {
    int dato;
    NodoSetInt* siguiente;
};
using SetInt = NodoSetInt*;

struct NodoMapaStringInt {
    std::string clave;
    int valor;
    NodoMapaStringInt* siguiente;
};
using MapaStringInt = NodoMapaStringInt*;

struct NodoMapaIntInt {
    int clave;
    int valor;
    NodoMapaIntInt* siguiente;
};
using MapaIntInt = NodoMapaIntInt*;

struct Usuario
{
    std::string nombre;
    std::string apellido;
    std::string id;
    std::string usuario;
    std::string password;
    Nodolista *preferencias;
    Nodolista *categoriasPreferidas;
    Nodolista *historial;
    Nodolista *carrito;
    Nodolista *listaDeseos;
};

struct Nodoarbol
{
    Usuario dato;
    Nodoarbol *izquierda;
    Nodoarbol *derecha;
};

struct Recomendaciones
{
    void limitarRecomendaciones(int maxPorSeccion = 10);
    ListaProducto porMarcasPreferidas = nullptr;
    ListaProducto porOtrasMarcasFrecuentes = nullptr;
    ListaProducto porCategoriaPreferida = nullptr;
    ListaProducto porCategoriaFrecuente = nullptr;
    ListaProducto porCalidad = nullptr;
};
