#pragma once

#include "estructuras.h"



struct EstadisticasUsuario
{
    ListaString categoriasFrecuentes = nullptr;
    ListaString marcasFrecuentes = nullptr;
    int calidadFrecuente = 0;
};

Recomendaciones generarRecomendaciones(Usuario *usuario);
EstadisticasUsuario obtenerEstadisticasUsuario(Usuario *usuario);
void actualizarPreferenciasDinamicas(Usuario *usuario);
ListaString obtenerTopN(MapaStringInt mapa, int n);
void ordenarPorRelevancia(ListaProducto& lista, Usuario* usuario);
