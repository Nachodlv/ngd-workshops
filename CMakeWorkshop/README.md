# CMake Workshop

En este workshop van a realizarse 2 ejercicios simples para afianzar un poco de CMake y de librerías.

Ambos deben de realizarse de tal forma que se pueda correr `cmake <path_root_CMakeLists>; cmake --build <path_build>`.
Cualquier cambio en algun codigo fuente que se haga de manera manual va a ser fácilmente detectable y se va a considerar mal hecho.

## Requerimientos

* Instalar [CMake 3.19](https://github.com/Kitware/CMake/releases/download/v3.19.2/cmake-3.19.2.zip)
* Ganas de renegar
* Python 3.9 (se puede bajar desde la Windows store)


# Un completito

En este primer ejercicio existen 2 librerias y un ejecutable.

Las librerias son

```
* Foo
* Bar
```

Y el main source code es lo que está en *src* e *include*.

Se debe compilar Foo como una libreria *dinámica* y Bar como una librería *estática*. Los source files deben permanecer IGUAL sin cambios.

El programa debe compilar y FINALIZAR (es facil darse cuenta que no termina). Además, debe proporcionarse una opción en CMake (un #define)
que se encuentra en una de las librerías.


# Haciendo magia

Perdimos el source code de todo. No solo eso, si no que el ejecutable está fallando por un caso en particular.
Lo único que recordamos es que el programa devuelve la suma de 2 enteros por medio del .dll, pero cuando queremos sumar un numero que su resultado
sea 5, arroja otro valor. Tenemos que arreglar eso.
