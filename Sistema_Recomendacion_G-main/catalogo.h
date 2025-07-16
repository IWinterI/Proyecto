#pragma once

#include "estructuras.h"



void inicializarCatalogo();
ListaProducto buscarPorCategoria(ListaProducto productos, const std::string &categoriaBuscada);
ListaProducto buscarPorRangoPrecios(ListaProducto productos, double precioMin, double precioMax);
ListaProducto buscarPorMarca(ListaProducto productos, const std::string &marcaBuscada);
ListaProducto buscarPorDescripcion(ListaProducto productos, const std::string &textoBuscado);
ListaString obtenerCategoriasUnicas();
ListaString obtenerMarcasUnicas();

extern ListaProducto catalogoGlobal;
