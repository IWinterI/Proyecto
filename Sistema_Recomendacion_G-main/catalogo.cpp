#include "catalogo.h"
#include "utilidades.h"

ListaProducto catalogoGlobal = nullptr;

void inicializarCatalogo()
{
    catalogoGlobal = nullptr;
    insertarEnLista(catalogoGlobal, {"Blusa de Seda Elegante", 1001, "Zara", 49.99, 5, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Jeans Skinny High Waist", 1002, "Levi's", 69.95, 4, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Vestido Midi Floral", 1003, "H&M", 39.90, 4, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Chaqueta Denim Clásica", 1004, "Gap", 79.99, 5, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Top Cropped Básico", 1005, "Nike", 24.50, 4, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Falda Plisada A-line", 1006, "Adidas", 36.75, 4, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Suéter Oversized Cable", 1007, "Nike", 54.99, 5, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Traje de Baño Enterizo", 1008, "Adidas", 58.25, 5, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Pantalón Palazzo Fluido", 1009, "Gap", 44.95, 4, "Ropa de Mujer"});
    insertarEnLista(catalogoGlobal, {"Abrigo Trench Impermeable", 1010, "Levi's", 129.99, 5, "Ropa de Mujer"});

    insertarEnLista(catalogoGlobal, {"Camisa Oxford Slim Fit", 1011, "Zara", 59.99, 5, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Chinos Classic Fit", 1012, "H&M", 55.00, 4, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Sudadera Tech Fleece", 1013, "Nike", 89.95, 5, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Bermudas Swim Trunks", 1014, "Maybelline", 42.50, 4, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Chaleco Acolchado", 1015, "Levi's", 79.25, 5, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Traje Slim Fit Navy", 1016, "Gap", 249.99, 5, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Polo Performance", 1017, "Adidas", 45.95, 4, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Parka Stormbreak", 1018, "Zara", 149.90, 5, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Jeans Relaxed Comfort", 1019, "Adidas", 64.75, 4, "Ropa de Hombre"});
    insertarEnLista(catalogoGlobal, {"Boxer Bamboo Pack x3", 1020, "Zara", 32.99, 4, "Ropa de Hombre"});

    insertarEnLista(catalogoGlobal, {"Body Orgánico Recién Nacido", 1021, "Revlon", 22.99, 5, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Vestido Niña Tutú", 1022, "Adidas", 34.50, 4, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Sudadera Dinosaur Print", 1023, "Gap", 39.00, 4, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Jeans Stretch Elastic Waist", 1024, "Levi's", 29.95, 4, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Pijama Unicornio Fleece", 1025, "Revlon", 26.99, 5, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Chaqueta Puffer Infantil", 1026, "Revlon", 49.75, 5, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Leggings Brillos Arcoíris", 1027, "H&M", 18.99, 4, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Conjunto Deportivo Dry-Fit", 1028, "Nike", 35.50, 5, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Abrigo Oso Polar", 1029, "Zara", 56.99, 5, "Ropa Infantil"});
    insertarEnLista(catalogoGlobal, {"Falda Ballet Layer", 1030, "Zara", 24.25, 4, "Ropa Infantil"});

    insertarEnLista(catalogoGlobal, {"Zapatillas Air Max", 1031, "Nike", 149.99, 5, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Botines Chelsea Cuero", 1032, "H&M", 189.95, 5, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Sandalias Gladiadoras Plata", 1033, "Maybelline", 69.99, 4, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Oxford Cap Toe", 1034, "Maybelline", 159.00, 5, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Crocs Clásicos Infantiles", 1035, "Gap", 39.99, 4, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Alpargatas Yute Artesanales", 1036, "Gap", 52.75, 5, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Tacones Stiletto Nude", 1037, "Revlon", 119.25, 5, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Mocasines Driving", 1038, "H&M", 89.99, 4, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Botas Sorel Winter", 1039, "Revlon", 199.50, 5, "Calzado"});
    insertarEnLista(catalogoGlobal, {"Chanclas Quick-Dry", 1040, "Adidas", 24.99, 4, "Calzado"});

    insertarEnLista(catalogoGlobal, {"Base HD PhotoReady", 1041, "Revlon", 34.99, 4, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Corrector Full Coverage", 1042, "Maybelline", 29.50, 4, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Polvo Compacto Translúcido", 1043, "MAC", 42.99, 5, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Iluminador Liquid Glow", 1044, "L'Oréal", 36.75, 5, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Bronzer Sun Stalk'r", 1045, "L'Oréal", 39.25, 5, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Rubor Cloud Paint", 1046, "Maybelline", 30.00, 4, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Primer Poreless Putty", 1047, "MAC", 44.99, 5, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Paleta Contour Pro", 1048, "MAC", 59.95, 5, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"BB Cream SPF 50", 1049, "L'Oréal", 38.75, 5, "Maquillaje Rostro"});
    insertarEnLista(catalogoGlobal, {"Setting Spray All Nighter", 1050, "Maybelline", 33.99, 5, "Maquillaje Rostro"});

    insertarEnLista(catalogoGlobal, {"Paleta Sombras Naked", 1051, "L'Oréal", 64.99, 5, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Máscara Lash Paradise", 1052, "L'Oréal", 14.99, 4, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Lápiz Labial Matte Ink", 1053, "Maybelline", 12.95, 4, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Delineador Epic Ink", 1054, "MAC", 19.75, 4, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Gloss Lip Jelly", 1055, "Revlon", 16.99, 5, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Gel Cejas Brow Freeze", 1056, "Revlon", 24.00, 5, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Sombras Líquidas Chroma", 1057, "Maybelline", 22.50, 4, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Labial Tinta Velvet Tint", 1058, "MAC", 26.75, 5, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Rimel Telescopic Lift", 1059, "L'Oréal", 13.25, 4, "Maquillaje Ojos/Labios"});
    insertarEnLista(catalogoGlobal, {"Liner Doble Effet", 1060, "Maybelline", 28.99, 5, "Maquillaje Ojos/Labios"});
}


ListaProducto buscarPorCategoria(ListaProducto productos, const std::string &categoriaBuscada)
{
    ListaProducto resultados = nullptr;
    std::string categoriaLower = aMinusculas(categoriaBuscada);

    NodoProducto* actual = productos;
    while (actual != nullptr)
    {
        if (aMinusculas(actual->dato.categoria) == categoriaLower)
        {
            insertarEnLista(resultados, actual->dato);
        }
        actual = actual->siguiente;
    }
    return resultados;
}

ListaProducto buscarPorRangoPrecios(ListaProducto productos, double precioMin, double precioMax)
{
    ListaProducto resultados = nullptr;
    NodoProducto* actual = productos;
    while (actual != nullptr)
    {
        if (actual->dato.precio >= precioMin && actual->dato.precio <= precioMax)
        {
            insertarEnLista(resultados, actual->dato);
        }
        actual = actual->siguiente;
    }
    return resultados;
}

ListaProducto buscarPorMarca(ListaProducto productos, const std::string &marcaBuscada)
{
    ListaProducto resultados = nullptr;
    std::string marcaLower = aMinusculas(marcaBuscada);

    NodoProducto* actual = productos;
    while (actual != nullptr)
    {
        if (aMinusculas(actual->dato.marca) == marcaLower)
        {
            insertarEnLista(resultados, actual->dato);
        }
        actual = actual->siguiente;
    }
    return resultados;
}

ListaProducto buscarPorDescripcion(ListaProducto productos, const std::string &textoBuscado)
{
    ListaProducto resultados = nullptr;
    std::string textoLower = aMinusculas(textoBuscado);

    NodoProducto* actual = productos;
    while (actual != nullptr)
    {
        std::string descLower = aMinusculas(actual->dato.descripcion);
        if (descLower.find(textoLower) != std::string::npos)
        {
            insertarEnLista(resultados, actual->dato);
        }
        actual = actual->siguiente;
    }
    return resultados;
}

ListaString obtenerCategoriasUnicas()
{
    ListaString categorias = nullptr;
    NodoProducto* actual = catalogoGlobal;
    while (actual != nullptr)
    {
        if (!existeEnLista(categorias, actual->dato.categoria))
        {
            insertarLista(categorias, actual->dato.categoria);
        }
        actual = actual->siguiente;
    }
    return categorias;
}

ListaString obtenerMarcasUnicas()
{
    ListaString marcas = nullptr;
    NodoProducto* actual = catalogoGlobal;
    while (actual != nullptr)
    {
        if (!existeEnLista(marcas, actual->dato.marca))
        {
            insertarLista(marcas, actual->dato.marca);
        }
        actual = actual->siguiente;
    }
    return marcas;
}
