1. Pre-procesador: `make preprocessing`
2. Compilacion I: `make assembler`
3. Compilacion II: `make object`
4. Linkeo: `make executable`
gcc -E calculator.pp.c -o calculator.pp.pp.c

Con -E detiene el proceso en este paso de preprocesamiento, evita definir funciones y huevadas usuales (los ##)
Genera el archivo calculator.pp.c

2. ¿Qué agregó el preprocesador?
Incluye definiciones y macros que necesitamos que se usan usualmente
 
3. Identificar en la rutina de assembler las funciones 

En el archivo calculator.asm las funciones son las que llama:
call	add_numbers
call	printf

4. Explicar qué quieren decir los símbolos que se crean en el objeto
Si hacemos:
nm calculator.o
000000000000003c T add_numbers
0000000000000000 T main
                 U printf
Esto quiere decir que las funciones add_numbers y main son archivos de texto que pueden ser leidos por todos (T), y que printif no está definido (U). Para eso tenemos que linkear el printiff a donde sea que esa función está definida.
Ahora con gcc -c genera el ejecutable calculator.e

5. ¿En qué se diferencian los símbolos del objeto y del ejecutable?
Entre otras 1000 cosas aparece:
U printf@@GLIBC_2.2.5     Que nos dice que printif no está definida, pero que la va a buscar y definir en tiempo de ejecución. (genera un linkeo dinámico a la librería GLIB_2.2.5)

Las demás funciones add_numbers y main quedan de la misma manera.













