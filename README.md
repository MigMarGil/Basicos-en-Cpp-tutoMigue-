# Tutorial de Programación básica en C++

Este repositorio contiene los materiales prácticos y guías en formato de código comentado (`.cpp`) diseñados para el aprendizaje de lo básico en C++

---

## Estructura de la Carpeta y Contenidos

Los ficheros están ordenados progresivamente para cubrir desde los conceptos más elementales hasta las estructuras de datos y paradigmas avanzados:

1. **`basico.cpp`**: Estructura básica de un programa en C++, uso de librerías (`<iostream>`), el espacio de nombres `std`, entrada (`cin`) y salida (`cout`).
2. **`variables.cpp`**: Declaración y uso de tipos de datos simples (`int`, `float`, `bool`, `char`, `string`).
3. **`condicionales_y_bucles.cpp`**: Control de flujo mediante estructuras condicionales (`if`, `else if`, `else`, `switch-case`) y bucles (`while`, `do-while`, `for`).
4. **`arrays.cpp`**: Introducción a los vectores o arreglos unidimensionales, manejo de índices, inicialización y prevención de valores basura.
5. **`funciones.cpp`**: Creación de subprogramas, paso de parámetros y tipos de retorno (`void` y tipos primitivos).
6. **`structs.cpp`**: Agrupación de datos heterogéneos bajo estructuras personalizadas (`struct`) y operador punto (`.`).
7. **`poo.cpp`**: Introducción a la Programación Orientada a Objetos (POO), clases, constructores, atributos privados y métodos públicos.

---

**Nota importante sobre modularidad a partir de Funciones (`5.Funciones`, `6.Structs`, `7.POO`):**

Aunque en estos ficheros de tutorial y por simplicidad docente todo el código se mantenga autocontenido dentro de un único archivo (`main`), **se recomienda encarecidamente que a partir del archivo de funciones (y especialmente en estructuras complejas y POO) comiences a dividir tu código en múltiples ficheros** (por ejemplo, separando la declaración en archivos de cabecera `.h` / `.hpp` y la implementación en `.cpp`). En entornos de desarrollo reales y proyectos de mayor envergadura, separar los módulos facilita enormemente el mantenimiento, la depuración y la reutilización del código, a pesar de que este tutorial inicial los presente agrupados para facilitar su comprensión secuencial.
