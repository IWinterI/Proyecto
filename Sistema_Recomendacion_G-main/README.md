# Sistema de Recomendación de Productos - Tienda en Línea

## Descripción del Proyecto

Este proyecto implementa un sistema de recomendación de productos para una tienda en línea, desarrollado con C++ y Qt. Permite a los usuarios registrarse, iniciar sesión, explorar productos por categoría, recibir recomendaciones personalizadas basadas en su historial y preferencias, y buscar productos utilizando diversos filtros (categoría, marca, rango de precios).

## Diagrama de flujo principal del programa

```mermaid
    flowchart TD
    %% ===== SECCIÓN INICIAL =====
    A[Inicio] --> B[Pantalla Principal]
    B --> C{Selección Usuario}
    C -->|Registrarse| D[Formulario Registro]
    C -->|Iniciar Sesión| E[Formulario Login]
    C -->|Salir| F[Terminar App]
    
    %% ===== SECCIÓN REGISTRO =====
    D --> G[Validar Datos]
    G -->|Válidos| H[Crear Nuevo Usuario]
    H --> I[Insertar en Árbol Binario]
    I --> J[Mostrar Confirmación]
    J --> B
    
    G -->|Inválidos| K[Mostrar Error]
    K --> D
    
    %% ===== SECCIÓN LOGIN =====
    E --> L[Verificar Credenciales]
    L -->|Correctas| M[Ventana Productos]
    L -->|Incorrectas| N[Mostrar Error]
    N --> E
    
    %% ===== SECCIÓN PRODUCTOS =====
    M --> O[Cargar Categorías]
    M --> P[Cargar Productos]
    M --> Q[Generar Recomendaciones]
    
    Q --> R[Obtener Historial Usuario]
    R --> S[Calcular Estadísticas]
    S --> T[Actualizar Preferencias]
    T --> U[Filtrar Productos No Vistos]
    U --> V[Ordenar por Relevancia]
    V --> W[Limitar a 10 por Sección]
    W --> X[Mostrar Recomendaciones]
    
    %% ===== INTERACCIÓN USUARIO =====
    M --> Y{Interacción Usuario}
    Y -->|Seleccionar Categoría| Z[Filtrar por Categoría]
    Z --> CC[Actualizar Lista Productos]
    
    Y -->|Aplicar Filtros| AA[Búsqueda Avanzada]
    AA --> DD[Filtrar por:\n- Texto\n- Categoría\n- Marca\n- Precio]
    DD --> EE[Mostrar Resultados]
    
    Y -->|Ver Producto| BB[Mostrar Detalles]
    BB --> FF[Registrar en Historial]
    FF --> GG[Actualizar Recomendaciones]
    GG --> Q
    
    Y -->|Volver| B
    
    %% ===== RELACIONES SECCIONALES =====
    classDef section fill:#e6f7ff,stroke:#3399ff,stroke-width:2px
    classDef decision fill:#ffe6cc,stroke:#ff9933,stroke-width:2px
    
    class A,B,C section
    class D,G,H,I,J,K section
    class E,L,M,N section
    class O,P,Q,R,S,T,U,V,W,X section
    class Y,Z,AA,BB,CC,DD,EE,FF,GG section
    class C,Y decision
```

## Descripcion por secciones

### Seccion inicial

```mermaid
    flowchart TD
    A[Inicio] --> B[Pantalla Principal]
    B --> C{Selección Usuario}
    C -->|Registrarse| D[Formulario Registro]
    C -->|Iniciar Sesión| E[Formulario Login]
    C -->|Salir| F[Terminar App]
```

- *Pantalla Principal*: Menú con 3 opciones.
- *Decisión*: Usuario selecciona una acción.

---

### Seccion de registro

```mermaid
    flowchart TD
    D[Formulario Registro] --> G[Validar Datos]
    G -->|Válidos| H[Crear Nuevo Usuario]
    H --> I[Insertar en Árbol Binario]
    I --> J[Mostrar Confirmación]
    J --> B[Pantalla Principal]
    
    G -->|Inválidos| K[Mostrar Error]
    K --> D
```

- *Validación*: Nombre, usuario único, contraseña segura
- *Creación*: Genera ID único y almacena en árbol binario
- *Retroalimentación*: Confirmación o mensajes de error

---

### Seccion de login

```mermaid
    flowchart TD
    E[Formulario Login] --> L[Verificar Credenciales]
    L -->|Correctas| M[Ventana Productos]
    L -->|Incorrectas| N[Mostrar Error]
    N --> E
```

- *Verificación*: Compara con datos en árbol binario
- *Acceso*: Solo con credenciales válidas
- *Error*: Mensaje específico para usuario/contraseña incorrectos

---

### Seccion de productos (Vista previa)

```mermaid
    flowchart TD
        M[Ventana Productos] --> O[Cargar Categorías]
        M --> P[Cargar Productos]
        M --> Q[Generar Recomendaciones]
```

- *Carga inicial*: Organiza productos por categoría
- *Recomendaciones*: Personalizadas basadas en preferencias

---

### Seccion sistema de recomendacion (basica, mas adelante se explica mas detalladamente)

```mermaid
    flowchart TD
    Q[Generar Recomendaciones] --> R[Obtener Historial Usuario]
    R --> S[Calcular Estadísticas]
    S --> T[Actualizar Preferencias]
    T --> U[Filtrar Productos No Vistos]
    U --> V[Ordenar por Relevancia]
    V --> W[Limitar a 10 por Sección]
    W --> X[Mostrar Recomendaciones]
```

- *Personalización*: Basada en historial de visualizaciones
- *Filtrado*: Excluye productos ya vistos
- *Limitación*: Máximo 10 productos por sección

---

### Interaccion del usuario

```mermaid
    flowchart TD
    M[Ventana Productos] --> Y{Interacción Usuario}
    Y -->|Seleccionar Categoría| Z[Filtrar por Categoría]
    Y -->|Aplicar Filtros| AA[Búsqueda Avanzada]
    Y -->|Ver Producto| BB[Mostrar Detalles]
    Y -->|Volver| B[Pantalla Principal]
    
    Z --> CC[Actualizar Lista Productos]
    AA --> DD[Filtrar por:\n- Texto\n- Categoría\n- Marca\n- Precio]
    DD --> EE[Mostrar Resultados]
    BB --> FF[Registrar en Historial]
    FF --> GG[Actualizar Recomendaciones]
    GG --> Q[Generar Recomendaciones]
```

- *Navegación*: Entre categorías y productos
- *Búsqueda*: Combinación múltiple de filtros
- *Historial*: Registro automático al ver detalles
- *Actualización*: Recomendaciones en tiempo real

---

## Diagrama de Flujo Detallado del Sistema de Recomendaciones

```mermaid
    flowchart TD
    A[Inicio: generarRecomendaciones] --> B[Actualizar Preferencias Dinámicas]
    B --> C{Obtener Historial Usuario}
    C -->|Historial Existente| D[Calcular Estadísticas]
    C -->|Sin Historial| E[Usar Preferencias Registro]
    
    D --> F[Contar Categorías Frecuentes]
    D --> G[Contar Marcas Frecuentes]
    D --> H[Identificar Calidad Frecuente]
    
    F --> I[Top 2 Categorías]
    G --> J[Top 2 Marcas]
    H --> K[Calidad Más Común]
    
    I --> L[Generar Candidatos]
    J --> L
    K --> L
    
    L --> M[Por Marcas Preferidas]
    L --> N[Por Otras Marcas Frecuentes]
    L --> O[Por Categoría Preferida]
    L --> P[Por Categoría Frecuente]
    L --> Q[Por Calidad Similar]
    
    M --> R[Filtrar Productos No Vistos]
    N --> R
    O --> R
    P --> R
    Q --> R
    
    R --> S[Excluir: Historial, Carrito, Deseos]
    S --> T[Barajar Aleatoriamente]
    T --> U[Limitar a 10 Productos]
    
    U --> V[Crear Sección Recomendaciones]
    V --> W[Devolver Recomendaciones]
    
    %% Subproceso Actualizar Preferencias
    subgraph Actualizar Preferencias Dinámicas
        B1[Inicio actualizarPreferencias] --> B2{Historial Vacío?}
        B2 -->|Sí| B3[Terminar]
        B2 -->|No| B4[Contar Categorías Historial]
        B4 --> B5[Contar Marcas Historial]
        B5 --> B6[Top 2 Categorías]
        B6 --> B7[Top 2 Marcas]
        B7 --> B8[Actualizar Preferencias Usuario]
        B8 --> B9[Fin]
    end
    
    %% Subproceso Obtener Estadísticas
    subgraph Obtener Estadísticas
        D1[Inicio obtenerEstadísticas] --> D2{Historial Vacío?}
        D2 -->|Sí| D3[Devolver Vacío]
        D2 -->|No| D4[Recorrer Historial]
        D4 --> D5[Buscar Producto en Catálogo]
        D5 --> D6[Incrementar Contadores]
        D6 --> D7[Calcular Top Categorías]
        D7 --> D8[Calcular Top Marcas]
        D8 --> D9[Identificar Calidad Más Frecuente]
        D9 --> D10[Devolver Estadísticas]
    end
```

## Explicacion detallada del proceso

### Actualización de Preferencias Dinámicas

```mermaid
    flowchart TD
    B1[Inicio] --> B2{¿Historial Vacío?}
    B2 -->|Sí| B3[Terminar]
    B2 -->|No| B4[Recorrer Historial]
    B4 --> B5[Por cada producto en historial]
    B5 --> B6[Buscar en catálogo]
    B6 --> B7[Incrementar contador categoría]
    B7 --> B8[Incrementar contador marca]
    B8 --> B9[Fin de productos?]
    B9 -->|No| B5
    B9 -->|Sí| B10[Seleccionar Top 2 categorías]
    B10 --> B11[Seleccionar Top 2 marcas]
    B11 --> B12[Actualizar preferencias usuario]
    B12 --> B13[Fin]
```

- *Análisis de Historial*: Examina todos los productos vistos por el usuario
- *Conteo de Preferencias*: Registra frecuencia de categorías y marcas
- *Actualización*: Reemplaza preferencias iniciales con las nuevas detectadas

---

### Cálculo de Estadísticas de Usuario

```mermaid
    flowchart TD
    D1[Inicio] --> D2{¿Historial Vacío?}
    D2 -->|Sí| D3[Devolver estructura vacía]
    D2 -->|No| D4[Inicializar contadores]
    D4 --> D5[Recorrer historial]
    D5 --> D6[Obtener ID producto]
    D6 --> D7[Buscar en catálogo]
    D7 --> D8[Incrementar contadores]
    D8 --> D9[Contador categoría ++]
    D9 --> D10[Contador marca ++]
    D10 --> D11[Contador calidad ++]
    D11 --> D12[Fin productos?]
    D12 -->|No| D5
    D12 -->|Sí| D13[Calcular top categorías]
    D13 --> D14[Calcular top marcas]
    D14 --> D15[Identificar calidad más frecuente]
    D15 --> D16[Devolver estadísticas]
```

- *Recolección de Datos*: Para cada producto en historial
- *Categorización*: Clasifica por categoría, marca y calidad
- *Cálculo de Tops*: Identifica los 2 elementos más frecuentes en cada categoría

---

### Generación de Candidatos

```mermaid
    flowchart TD
    L1[Inicio] --> L2{Preferencias}
    L2 -->|Marcas Preferidas| L3[Buscar productos por marca]
    L2 -->|Otras Marcas| L4[Buscar marcas frecuentes no preferidas]
    L2 -->|Categoría Preferida| L5[Buscar por categoría preferida]
    L2 -->|Categoría Frecuente| L6[Buscar por categoría frecuente]
    L2 -->|Calidad| L7[Buscar por calidad similar]
    
    L3 --> L8[Agrupar candidatos 1]
    L4 --> L8
    L5 --> L8
    L6 --> L8
    L7 --> L8
    
    L8 --> L9[Filtrar duplicados]
    L9 --> L10[Devolver lista candidatos]
```

- *Búsqueda Multicriterio*: 5 fuentes diferentes de recomendaciones
- *Agrupamiento*: Combina resultados de todas las fuentes
- *Deduplicación*: Elimina productos repetidos entre categorías

---

### Filtrado y Limpieza

```mermaid
    flowchart TD
    R1[Inicio] --> R2[Crear lista productos excluidos]
    R2 --> R3[Agregar historial usuario]
    R3 --> R4[Agregar carrito usuario]
    R4 --> R5[Agregar lista deseos]
    
    R5 --> R6[Recorrer candidatos]
    R6 --> R7{¿Producto en excluidos?}
    R7 -->|Sí| R8[Descartar]
    R7 -->|No| R9[Agregar a finales]
    R8 --> R10[Fin candidatos?]
    R9 --> R10
    R10 -->|No| R6
    R10 -->|Sí| R11[Barajar aleatoriamente]
    R11 --> R12[Limitar a 10 productos]
    R12 --> R13[Devolver recomendaciones]
```

- *Exclusión*: Elimina productos ya conocidos por el usuario
- *Aleatorización*: Mezcla productos para mayor variedad
- *Limitación*: Selecciona máximo 10 productos por sección

---

### Reglas Clave del Sistema

1. **Jerarquía de Recomendaciones**

```mermaid
flowchart TD
    A[Marcas Preferidas] --> B[Otras Marcas Frecuentes]
    B --> C[Categoría Preferida]
    C --> D[Categoría Frecuente]
    D --> E[Calidad Similar]
```

2. **Lógica de Filtrado**
    - Los productos vistos (historial) tienen máxima prioridad de exclusión.
    - Los productos en carrito o en la lista de deseos se excluyen automáticamente.
    - Si no hay historial, se utilizan las preferencias registradas por el usuario.

3. **Mecanismo de Actualización**
    - El sistema de recomendaciones se regenera completamente al:
      - Iniciar sesión
      - Ver detalles de un producto
      - Cambiar de categoría
    - Actualización en tiempo real: entre 100 y 500 ms según el tamaño del historial.

4. **Algoritmos Clave**
    - Map-Reduce para el conteo de frecuencias.
    - Barajado Fisher-Yates para la aleatorización.
    - Búsqueda binaria para filtrado eficiente.
    - Árboles binarios para la gestión de exclusiones.

## Modulos del programa

### 1. mainwindow (Ventana Principal)
**Descripción:** Ventana inicial de la aplicación con opciones para registrarse, iniciar sesión o salir.

**Funciones:**
- `on_Regis_clicked()`: Abre ventana de registro
- `on_salir_clicked()`: Cierra la aplicación
- `on_Inicio_clicked()`: Muestra formulario de inicio de sesión
- `on_volver_clicked()`: Vuelve a pantalla inicial
- `on_ingresar_clicked()`: Verifica credenciales y abre ventana de productos

---

### 2. registro_usuario (Registro de Usuario)
**Descripción:** Ventana para registrar nuevos usuarios con sus preferencias.

**Funciones:**
- `on_buttonBox_accepted()`: Valida y registra usuario
- `on_buttonBox_rejected()`: Cancela registro

---

### 3. ventana_productos (Ventana de Productos)
**Descripción:** Interfaz principal después del login con productos y recomendaciones.

**Funciones:**
- `llenarFiltros()`: Carga categorías/marcas/precios
- `cargarProductosPorCategoria()`: Muestra productos por categoría
- `cargarRecomendaciones()`: Genera recomendaciones personalizadas
- `mostrarDetallesProducto()`: Muestra detalles del producto
- `on_pushButton_clicked()`: Realiza búsqueda con filtros

---

### 4. productodialog (Diálogo de Producto)
**Descripción:** Muestra detalles completos de un producto.

**Funciones:**
- `on_pushButton_clicked()`: Cierra el diálogo

---

### 5. catalogo (Catálogo de Productos)
**Descripción:** Gestiona el catálogo global de productos.

**Funciones:**
- `inicializarCatalogo()`: Carga productos iniciales
- Funciones de búsqueda (`buscarPorCategoria`, `buscarPorMarca`, etc.)

---

### 6. usuario (Gestión de Usuarios)
**Descripción:** Maneja operaciones con usuarios (inserción, búsqueda).

**Funciones:**
- `crearNodo()`, `insertar()`, `buscar()`, `verificarPassword()`

---

### 7. utilidades (Funciones Auxiliares)
**Descripción:** Proporciona funciones de utilidad general.

**Funciones:**
- `generarID()`, `aMinusculas()`, manipulación de listas, sets y mapas

---

### 8. recomendacion (Sistema de Recomendación)
**Descripción:** Genera recomendaciones personalizadas basadas en historial.

**Funciones:**
- `generarRecomendaciones()`, `obtenerEstadisticasUsuario()`, `actualizarPreferenciasDinamicas()`

## Estructuras de Datos y sus Atributos
Definidas en estructuras.h
### Producto
Representa un artículo en el catálogo.

- **descripcion**: `std::string` — Nombre del producto.
- **id**: `int` — Identificador único.
- **marca**: `std::string` — Fabricante del producto.
- **precio**: `double` — Valor en dólares.
- **calidad**: `int` — Valoración (1-5 estrellas).
- **categoria**: `std::string` — Grupo de clasificación.

---

### NodoProducto
Nodo para lista enlazada de productos.

- **dato**: `Producto` — Producto almacenado.
- **siguiente**: `NodoProducto*` — Puntero al siguiente nodo.

---

### ListaProducto
Lista enlazada de productos.

- Tipo: `NodoProducto*`

---

### Nodolista
Nodo para listas enlazadas de cadenas de texto.

- **dato**: `std::string` — Valor almacenado.
- **siguiente**: `Nodolista*` — Puntero al siguiente nodo.

---

### ListaString
Lista enlazada de cadenas de texto.

- Tipo: `Nodolista*`

---

### Usuario
Datos de usuario registrado.

- **nombre**: `std::string`
- **apellido**: `std::string`
- **id**: `std::string` — Identificador único.
- **usuario**: `std::string` — Nombre de usuario.
- **password**: `std::string`
- **preferencias**: `ListaString` — Marcas favoritas.
- **categoriasPreferidas**: `ListaString`
- **historial**: `ListaString` — IDs de productos vistos.
- **carrito**: `ListaString` — IDs en carrito.
- **listaDeseos**: `ListaString` — IDs en lista de deseos.

---

### Nodoarbol
Nodo para árbol binario de usuarios.

- **dato**: `Usuario`
- **izquierda**: `Nodoarbol*`
- **derecha**: `Nodoarbol*`

---

### Recomendaciones
Resultados del sistema de recomendación.

- **porMarcasPreferidas**: `ListaProducto`
- **porOtrasMarcasFrecuentes**: `ListaProducto`
- **porCategoriaPreferida**: `ListaProducto`
- **porCategoriaFrecuente**: `ListaProducto`
- **porCalidad**: `ListaProducto`

---

### EstadisticasUsuario
Datos estadísticos de comportamiento.

- **categoriasFrecuentes**: `ListaString`
- **marcasFrecuentes**: `ListaString`
- **calidadFrecuente**: `int`

## Módulos y sus Funciones

### 1. mainwindow (Gestión de Ventana Principal)
- **on_Regis_clicked()**: Abre ventana de registro.
- **on_Inicio_clicked()**: Muestra formulario de login.
- **on_ingresar_clicked()**: Valida credenciales de usuario.
- **on_salir_clicked()**: Cierra la aplicación.
- **on_volver_clicked()**: Regresa a pantalla inicial.

---

### 2. registro_usuario (Registro de Nuevos Usuarios)
- **on_buttonBox_accepted()**: Valida y registra nuevo usuario.
- **on_buttonBox_rejected()**: Cancela registro.

---

### 3. ventana_productos (Interfaz Principal de Productos)
- **llenarFiltros()**: Carga categorías/marcas en comboboxes.
- **cargarProductosPorCategoria()**: Muestra productos por categoría.
- **cargarRecomendaciones()**: Genera y muestra recomendaciones.
- **mostrarDetallesProducto()**: Abre diálogo con detalles de producto.
- **on_pushButton_clicked()**: Ejecuta búsqueda con filtros.
- **on_Volver_clicked()**: Regresa a pantalla principal.

---

### 4. recomendacion (Sistema de Recomendaciones)
- **generarRecomendaciones()**: Coordina proceso completo.
- **obtenerEstadisticasUsuario()**: Calcula preferencias de usuario.
- **actualizarPreferenciasDinamicas()**: Ajusta preferencias basado en historial.
- **obtenerTopN()**: Selecciona N elementos más frecuentes.
- **ordenarPorRelevancia()**: Ordena productos por relevancia.

---

### 5. catalogo (Gestión de Productos)
- **inicializarCatalogo()**: Carga datos iniciales de productos.
- **buscarPorCategoria()**: Filtra productos por categoría.
- **buscarPorRangoPrecios()**: Filtra por rango de precios.
- **buscarPorMarca()**: Filtra por marca.
- **buscarPorDescripcion()**: Búsqueda textual en descripciones.
- **obtenerCategoriasUnicas()**: Lista categorías disponibles.
- **obtenerMarcasUnicas()**: Lista marcas disponibles.

---

### 6. usuario (Gestión de Usuarios)
- **crearNodo()**: Inicializa nodo de árbol.
- **insertar()**: Inserta usuario en árbol binario.
- **buscar()**: Busca usuario en árbol.
- **verificarPassword()**: Compara contraseñas.

---

### 7. utilidades (Funciones Auxiliares)
- **generarID()**: Crea identificador único.
- **aMinusculas()**: Normaliza texto a minúsculas.
- **insertarLista()**: Agrega elemento a lista enlazada.
- **existeEnLista()**: Verifica existencia en lista.
- **insertarEnLista()**: Agrega producto a lista.
- **longitudLista()**: Calcula tamaño de lista.
- **barajarLista()**: Aleatoriza orden de lista.
- **buscarEnSet()**: Verifica existencia en conjunto.
- **insertarEnSet()**: Agrega elemento a conjunto.
- **incrementarEnMapa()**: Aumenta contador en mapa.
- **mapaEstaVacio()**: Verifica si mapa está vacío.

---

### 8. productodialog (Diálogo de Detalles de Producto)
- **on_pushButton_clicked()**: Cierra el diálogo.
