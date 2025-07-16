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
/*
///////////// Explicacion, este programa posee:

1. #pragma once
Propósito: Es una directiva de preprocesador que evita que un archivo de encabezado sea incluido más de una vez en un mismo archivo fuente 
durante la compilación. Esto ayuda a prevenir errores de redefinición y mejora la eficiencia del compilador.
Alternativa: Es similar a usar guardas de inclusión (#ifndef, #define, #endif), pero más moderna y concisa.
2. #include "estructuras.h"
Propósito: Incluye el archivo de encabezado estructuras.h, que probablemente contiene definiciones de estructuras, tipos o funciones necesarias para este archivo. Esto permite que el código aquí tenga acceso a esas definiciones.
3. Definición de la estructura EstadisticasUsuario

Copiar el código
struct EstadisticasUsuario {
    ListaString categoriasFrecuentes = nullptr;
    ListaString marcasFrecuentes = nullptr;
    int calidadFrecuente = 0;
};
Propósito: Define una estructura llamada EstadisticasUsuario que agrupa datos relacionados con las estadísticas de un usuario.

Componentes:

ListaString categoriasFrecuentes: Una lista (probablemente definida en estructuras.h) que almacena las categorías más frecuentes asociadas al usuario.
ListaString marcasFrecuentes: Similar a la anterior, pero para marcas frecuentes.
int calidadFrecuente: Un entero que representa la calidad más frecuente (quizás una métrica o puntuación).
Nota: Se inicializan los punteros categoriasFrecuentes y marcasFrecuentes con nullptr para evitar errores de acceso a memoria no válida.

4. Declaración de funciones
Estas son prototipos de funciones, lo que significa que se están declarando para que puedan ser utilizadas en otras partes del programa. La implementación real de estas funciones estará en otro lugar (probablemente en un archivo .cpp).

Recomendaciones generarRecomendaciones(Usuario *usuario);

Propósito: Genera recomendaciones personalizadas para un usuario.
Parámetros:
Usuario *usuario: Un puntero a un objeto de tipo Usuario (probablemente definido en estructuras.h).
Retorno: Devuelve un objeto de tipo Recomendaciones (también definido en estructuras.h).
EstadisticasUsuario obtenerEstadisticasUsuario(Usuario *usuario);

Propósito: Calcula y devuelve las estadísticas de un usuario.
Parámetros: Igual que la anterior.
Retorno: Devuelve un objeto de tipo EstadisticasUsuario.
void actualizarPreferenciasDinamicas(Usuario *usuario);

Propósito: Actualiza dinámicamente las preferencias del usuario basándose en su comportamiento o datos recientes.
Parámetros: Igual que las anteriores.
Retorno: Ninguno (void).
ListaString obtenerTopN(MapaStringInt mapa, int n);

Propósito: Obtiene los n elementos más relevantes de un mapa (probablemente un mapa que asocia cadenas a enteros).
Parámetros:
MapaStringInt mapa: Un mapa de cadenas a enteros.
int n: El número de elementos a obtener.
Retorno: Devuelve una lista de cadenas (ListaString).
void ordenarPorRelevancia(ListaProducto& lista, Usuario* usuario);

Propósito: Ordena una lista de productos (ListaProducto) según su relevancia para un usuario.
Parámetros:
ListaProducto& lista: Una referencia a una lista de productos.
Usuario* usuario: Un puntero al usuario para determinar la relevancia.
Retorno: Ninguno (void).
5. Resumen
Este fragmento de código:

Define una estructura (EstadisticasUsuario) para almacenar datos relacionados con las estadísticas de un usuario.
Declara varias funciones que trabajan con usuarios, estadísticas y recomendaciones.
Utiliza punteros y referencias para manejar datos de manera eficiente.
Se apoya en tipos personalizados (ListaString, MapaStringInt, ListaProducto, etc.) que probablemente están definidos en estructuras.h.
*/