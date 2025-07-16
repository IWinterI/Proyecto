#include "catalogo.h"
#include "utilidades.h"
ListaProducto catalogoGlobal = nullptr;
//se crea una lista llamada producto  catalogo global = nullptr
void inicializarCatalogo()// fucnion void que no retorna ningun valor  ´para inicializar catalogo lafuncion no tiene parametros
{
    catalogoGlobal = nullptr;// a partir de aqui lo que va hacer es insertar en la lista los productos para el catalogo de ropa y maquillaje
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
// las categorias van que del atributo del catalogo, el producto esta en categoria ejemplo: referencia, marca, precio en dolar y categoria tipo ejeplo ropa de mujer 
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
///caegoria de ropa infantil 
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
// categoria de calzado
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
//categoria  de  , cada categoria se compone de producto individual: nombre,referecia,nombre de marca , mas su valor en dolares y ente"" la categoria 
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
// insertar la lista o seleccionar maquijalle de esta categoria
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

/*Esta función recibe una lista de productos (productos) y una categoría a buscar (categoriaBuscada), 
se  recorre la lista y filtra (aplica filtro)los productos que coincidan con esa categoría, 
devolviendo una nueva lista con los resultados encontrados. el filtro se aplica para devolver producto que coincida con opcion buscar ingresada, 
ListaProducto buscarPorCategoria(ListaProducto productos, const std::string &categoriaBuscada)
{*/
    ListaProducto resultados = nullptr;
    std::string categoriaLower = aMinusculas(categoriaBuscada);
// esta parte de codigo me permite que cuando el usuario ingresa en buscar un producto ya sea en minuscula o myuscula (string)
// se devuelve el resultado de la coincidencia del producto en base a la preferencia 
//es decir si yo ingrese con mi usuario, y preferi ropa de caballero , y en buscar escribo nike,en aplicar filtro dvuelve el producto por coincidencia
    NodoProducto* actual = productos; // nodo producto apunta actual = producto 
    while (actual != nullptr)
    {
        if (aMinusculas(actual->dato.categoria) == categoriaLower)// bajo categoria de la lista 
        {
            insertarEnLista(resultados, actual->dato);// en la insersion, devuelve el resultado de la consulta 
        }
        actual = actual->siguiente;
    }// aqui el actual es igual a actual mismo que apunta flechita siguiente
    return resultados;// el resultado de la busqueda 
}
// otra lista que es listaProducto buscarangoPrecios  los precios estan por dolares hay un precio minimo de cosulta y max de consulat 
// evaluara entre ambos presupuesto del cliente y al dar opcion de selecciona luego en aplicar filtro para que genere el producto con esas carateristicas
ListaProducto buscarPorRangoPrecios(ListaProducto productos, double precioMin, double precioMax)
{
    ListaProducto resultados = nullptr;// se declara con nullptr
    NodoProducto* actual = productos;// crea un nodo nODOPRODCTO* APUNTA ACTUAL IGUAL A PRODUCTOS DONDE PRODUCTOS ES EL VALOR A RETORNAR
    while (actual != nullptr)// EVALUA LA CONDICION MIENTRAS QUE ACTAL NO SEA IGUAL A NULLPTR (NULO)ENTONCES  INSERTA EL RESULTADO DE LA BUSQUEDA 
    {
        if (actual->dato.precio >= precioMin && actual->dato.precio <= precioMax)
        {
            insertarEnLista(resultados, actual->dato);// IMPRIME LOS DATOS ACTUALES DEL PRODUCTO 
        }
        actual = actual->siguiente;// DONDE ACTUAL ES IGUAL ACTUAL FLECHITA SIGUIENTE
    }
    return resultados;// EN ESTA FUNCION RETORNA  LOS RESULTADOS DE LA BUSQUEDA DEL PRODUCTO
}
//Este código define una función llamada buscarPorMarca que busca productos en una
// lista enlazada según una marca específica y devuelve una nueva lista con los resultados.
ListaProducto buscarPorMarca(ListaProducto productos, const std::string &marcaBuscada)
{


	*/
    ListaProducto resultados = nullptr;
    std::string marcaLower = aMinusculas(marcaBuscada);// para tomar el texto ingresado y volverlo minusculas 

    NodoProducto* actual = productos;
    while (actual != nullptr)
    {// BUCLE PARA RECORRER LA LISTA
        if (aMinusculas(actual->dato.marca) == marcaLower)
        {
            insertarEnLista(resultados, actual->dato);
        }
        actual = actual->siguiente;
    }
    return resultados;
    
    /*	/*
ListaProducto buscarPorMarca(ListaProducto productos, const std::string &marcaBuscada)

ListaProducto productos: Es el parámetro de entrada, que representa una lista enlazada de productos.

const std::string &marcaBuscada: Es la marca que  desea buscar EL USUARIO, pasada como una referencia constante para evitar copias innecesarias DEL MISMO

ListaProducto: Es el tipo de dato que representa una lista enlazada  de un puntero a un nodo

ListaProducto resultados = nullptr;
std::string marcaLower = aMinusculas(marcaBuscada);
NodoProducto* actual = productos;

PARA LA DECLARACION DE VARIABLES:

resultados: Inicializa una lista vacía (nullptr) que almacenará los productos que coincidan con la marca buscada, Y LO DEVUELVE EN APLICAR FILTRO
marcaLower: Convierte la marca buscada a minúsculas usando la función aMinusculas (probablemente definida en otro lugar del programa). 
Esto asegura que la búsqueda no sea sensible a mayúsculas/minúsculas Y ESTE VALIDADA LA ENTRADA DE LOS DATOS.
actual: Es un puntero que se utiliza para recorrer la lista enlazada de productos.

*/
    /*
    Condición del bucle donde  se ejecuta mientras el puntero actual no sea nullptr, es decir, mientras haya nodos en la lista.
aMinusculas(actual->dato.marca): Convierte la marca del producto actual a minúsculas para compararla con marcaLower.
Comparación en la busqueda : Si la marca del producto actual coincide con la marca buscada, se va a llamar  a la función insertarEnLista para
 agregar el producto a la lista resultados que este caso en qt es una barra debajo de plicar filtros que en el bloque se devuelve los productos coincidentes
Avance del puntero: actual =  apunta a flechita siguiente actual->siguiente mueve el puntero al siguiente nodo de la lista 

para el retorno de los resultados: si se copia el codigo, retorna resultads de la busqueda, donde la funcion  devuelve la lista de resultados , que contienen 


return resultados;
Al final, la función devuelve la lista resultados, que contiene todos los productos cuya marca coincide con la marca buscada.

Se inicializa una lista vacía para los resultados.
Se convierte la marca buscada a minúsculas para realizar comparaciones  a mayúsculas/minúsculas del texto ingresado

Se recorre la lista enlazada de productos: que cumpla lacondicion de que si la marca del producto actual coincide con la marca buscada,
entonces se agrega a la lista de resultados y de este modo, se devuelve la lista de productos que cumplen con la condicion.

Funciones auxiliares:
aMinusculas: nos permite covertir  una cadena ingresada  a minúsculas, validacion de datos con la comparacion  a mayúsculas/minúsculas.
insertarEnLista: en esta fcnion, se inserta un elemento en una lista enlazada, para ello, se debe  maneja la creación de nodos y la actualización de punteros.
es por ello que nodo apunta a actual y flechita siguiente a otro nodo que se integre, la estrcutura de datos de la lista enlazada, 
se uso para busquedas lineales del producto.



    */
    
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

/*
 ListaProducto:      en esta funcion ,  el tipo de dato devuelve a la funcion  el resultado de la lista enlazada que se almacenan los productos en el catalogo 
 
productos: Es el parámetro de entrada, una lista de productos que se va a recorrer y se retorna el resultado de la busqueda 
const std::string &textoBuscado: hace una referencia constante a un texto que se busca en las descripciones de los productos de acurdo a su coincidencia.

en torno a las variales locales:

resultados: Inicializa una lista vacía (o nullptr) donde se almacenarán los productos que coincidan con la búsqueda emitida por el usuario en la seccion de busqueda
textoLower:  aqui se Convierte el texto buscado a minúsculas usando la función aMinusculas. 
Esto asegura que la búsqueda no sea debil a mayúsculas/minúsculas de modo que sea validado texto ingresado.

      
 ahora para recorrer la lista de productos 
 
 NodoProducto* actual: Es un puntero que comienza apuntando al primer nodo de la lista productos despues de haber sido inicializado.
while (actual != nullptr): Iteracion sobre cada nodo de la lista hasta que se llegue al final (cuando actual sea nullptr).

comparacion de descripciones:

descLower: Convierte la descripción del producto actual a minúsculas para compararla de manera insensible a mayúsculas/minúsculas.
descLower.find(textoLower): Busca si el texto buscado (textoLower) está contenido en la descripción del producto (descLower).
Si encuentra coincidencia, devuelve la posición donde comienza el texto.
Si no encuentra coincidencia, devuelve std::string::npos.
Si hay coincidencia, se llama a la función insertarEnLista para agregar el producto actual (actual->dato) a la lista resultados.
luego, Mueve el puntero actual al siguiente nodo de la lista para continuar el recorrid a flechita siguiente
hasta finalizar el recorrido, devolviendo  la lista de resultados que posee los productos cuya descripcion coincida con el texto hallado en buscar  (encontrado)


funcionamiento  de algoritmo de busqueda: 

Convierte el texto buscado e la seccion de buscar  a minúsculas
Recorre la lista de productos para localizar alguna coincidencia 
Convierte cada descripción de producto a minúsculas y verifica si contiene el texto buscado, verifica y compara el producto o descripcion ingresada con la existente en catalogo
Si hay coincidencia,que se cumpla la condicion, entonces procede  agregar el producto a la lista de resultados.
Devuelve la lista de productos coincidentes como resultado de busqueda.

funcion auxiliar en el llamado:


aMinusculas: Convierte un texto a minúsculas
insertarEnLista: Inserta un elemento en una lista enlazada.
NodoProducto: Representa un nodo de la lista enlazada, que contiene un producto (dato) y un puntero al siguiente nodo (siguiente).

*/

//////////////////////////////////////////   ....................

ListaString obtenerCategoriasUnicas() 

{
    ListaString categorias = nullptr;
    NodoProducto* actual = catalogoGlobal;
    while (actual != nullptr)
    {
        if (!existeEnLista(categorias, actual->dato.categoria))// existeEnLista es mi auxiliar que  Comprueba si un elemento está dentro de la lista
        {
            insertarLista(categorias, actual->dato.categoria);// insertarLista es el auxiliar para que  Inserte un elemento en la lista.
        }
        actual = actual->siguiente;// para trabajar con listas enlazadas y no se tengan otro duplicado.
    }
    return categorias;//Al finalizar el bucle, se devuelve la lista categorias, que contiene todas las categorías únicas encontradas en catalogoGlobal despues de preferencia.
    /*
    Esta función sirve para  obtener una lista de categorías únicas a partir de un catálogo global de productos. el catalogo global de productos estan todos los productos 
	 
	 Aquí está el desglose de la estructura de la funcion:     ListaString obtenerCategoriasUnicas()

 La función retorna o devuelve un objeto, aaunque no se ha trabajado objetos en el aula, investigamos como hacerlo 
   asignar un objeto de tipo ListaString, para  ser una estructura o clase que represente una lista de cadenas de texto. que al ingresar el texto lo vuelva a minuscula.
la funcion  obtenerCategoriasUnicas no recibe parametros 

las variables inicializadas son:

ListaString categorias = nullptr     y     NodoProducto* actual = catalogoGlobal;

 Se inicializa como nullptr a categoria de la funcion ListaString obtenerCategoriasUnicas, porque inicialmente esta vacia la lista de categorias 


actual es un puntero que apunta al inicio de una lista enlazada llamada catalogoGlobal donde tienen todos los productos para que luego sea buscado de acuerdo por 
preferencias y coincidencias

la lista se recorre mediante un bucle while 


dicho bucle cumple con la condicon y  se ejecuta mientras actual no sea nullptr, es decir, mientras haya nodos dentro de la lista catalogoGlobal.
 la condicion del if ,  si if (!existeEnLista(...)), es para verificar  si la categoría del producto actual (actual->dato.categoria) 
 no está ya en la lista categorias  , es decir que pregunta si eta vacía , sino, si esta llena,  La función existeEnLista
  comprueba si un elemento ya está presente existente  en la lista.
insertarLista(...) en esta condicion,  Si la categoría no está en la lista si se ecuantra nula, se insertará en categorias usando la función insertarLista para insertar elemento 

actual = actual->siguiente;// Se avanza al siguiente nodo de la lista enlazada catalogoGlobal de los productos se recorre para obtener a categoria siguiente
	 
	 ////////////////proceso en este segmento de codigo:
	 
1 )Se inicializa una lista vacía para almacenar las categorías únicas.
2)Se recorre la lista enlazada catalogoGlobal nodo por nodo para verificar por cada nodo de la lista si la categoria  esta dentro de la lista de categorias Unicas 
3)si no esta la categoria dentro de la lista, entonces,  se agrega a la lista, finalmente el retorno es la lista de categorias unicas
Si no está, se agrega a la lista.

////////////////////estructuras dentro del segmento del codigo:

ListaString: Representa una lista de cadenas de texto ( aqui se lee el producto ingresado, se toma por coincidencia el texto validado texto de string a minuscula )
NodoProducto: Representa un nodo de la lista enlazada catalogoGlobal cada nodo (producto) contiene caracteriasticas (informacion) dato  del producto,
 incluye su categoría (dato.categoria). 
 

    */
    
}

ListaString obtenerMarcasUnicas()   //  La función devuelve un objeto de tipo ListaString, para manejar lista de cadenas de texto 
{ //No recibe parámetros,  trabaja directamente con variables globales o externas, como catalogoGlobal donde se encuentran los prductos 
    ListaString marcas = nullptr;
    NodoProducto* actual = catalogoGlobal;
    while (actual != nullptr)//  recorre la lista enlazada catalogoGlobal nodo por nodo hasta que llega al final (cuando actual es nullptr).
    {
        if (!existeEnLista(marcas, actual->dato.marca))// aqui se verifica si es unico 
        /*Se verifica si la marca del producto actual (actual->dato.marca) ya está dentro de lista marcas y 
La función existeEnLista  es una función auxiliar para comprobar si un elemento ya está presente en una lista marcas 
        */
               
        {
            insertarLista(marcas, actual->dato.marca);
            
            /*insercion de la lista 
            Si la marca no está en la lista marcas,entonces  se inserta usando la función insertarLista, 
			que  añade un nuevo nodo con la marca a la lista 
            */
        }
        actual = actual->siguiente;//Se mueve al nodo siguiente en la lista enlazada catalogoGlobal de productos.
    }
    return marcas;// se devuelve la lista marcas, que contiene todas las marcas únicas encontradas de acuerdo a la preferencia 
    /*
   en esta parte del codigo, se define  una función llamada obtenerMarcasUnicas para recopilar una lista de marcas únicas 
   a partir de un catálogo global de productos( donde ya los roductos estan cargados en sistema previamente) y devolvera o retornara la marca obtenida desde el catalogo
    
    //////////////7en la estructura del codigo ListaString obtenerMarcasUnicas()

    las variables inicializadas : 
ListaString marcas = nullptr;
NodoProducto* actual = catalogoGlobal;

marcas es una lista inicialmente vacía (nullptr), donde se almacenarán las marcas únicas del catalogo, y actual es un puntero que apunta al comienzo de la lista global
 llamada catalogoGlobal, que trata de una lista enlazada de productos 

    /////////////////////proceso de la estrcutura logica que compone este segmento de codigo
    

Se inicializa una lista vacía para almacenar marcas únicas, luego, se va recorriendo la lista enlazada de productos(catalogoGlobal),
por cada producto dentro de la lista, se verifica si dicha marca esta o no en la lista de marcas unicas , ya que por cada producto, se verifica si no esta,
entonces se agrega a la lista, devolviendo la lista de marcas unicas cuando se le da  aplicar filtros con la interfaz grafica de usuario

/////////////// inserciones en el programa

Este código depende de estructuras como ListaString, NodoProducto y funciones auxiliares como existeEnLista e insertarLista. 
Estas funciones estan definidas en otro modulo en .h funcion  del programa. si la lista marcas es una lista simple, 
entonces la eficiencia u optimizacion del codigo va a depnder de la operacion en existeEnLista por cada insercion

    
    */
    
    
}

