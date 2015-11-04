# Símbolos 
Compilamos el objeto 'visibility.c' generando el objeto 'visibility.o'

nm visibility.o -n

                 U printf
0000000000000000 t add_abs
0000000000000000 r val1
0000000000000000 d val3
0000000000000004 R val2
0000000000000004 D val4
000000000000002a T main

printif está indefinido porque todavía no lo linkeamos. (U)
add_abs es una función estática, sólo accecible localmente por el main del programa visibility. (t)
val1 es una constante estática, sólo se puede leer localmente. (r)
val2 es una constante estática, se puede leer por todos. (R)
val3 un entero estático, sólo se lee locamente. (d)
val4 un entero que puede ser leído por todos. (D)
Main es una función que puede ser accesada por todos. (T)
