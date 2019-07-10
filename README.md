# PRÃCTICA 1 - PROCESOS #

## 1. Objetivos ##
1. Familiarizarse con las diferentes estructuras y funciones relacionadas con el manejo de procesos en linux.
2. Codificar programas que hagan uso del API de procesos.

## 2. Actividades previas al laboratorio ##

Asignadas en la prÃ¡ctica anterior.
Leer el capÃ­tulo 5 del libro guÃ­a (link).

## 3. Actividades en el laboratorio ##

Realizar los siguientes ejercicios:

1. Escriba un programa que llame un ```fork()```. Antes del llamado del ```fork()```, declare una variable de acceso (por ejemplo, ```x```) y asÃ­gnele un valor (por ejemplo, ```100```). Responda las siguientes preguntas:
  * Â¿CuÃ¡l es el valor de la variable en el proceso hijo?
  * Â¿QuÃ© sucede con la variable cuando el proceso hijo y el padre cambian el valor de ```x```?
2. Escriba un programa que abra un archivo (con la llamada ```open()```) y entonces llame a ```fork()```. 
  * Â¿Pueden el padre y el hijo acceder al file descriptor retornado por ```open()```? 
  * Â¿QuÃ© pasa si ellos empiezan a escribir el archivo de manera concurrente, es decir, a la misma vez?
3. Escriba un programa usando ```fork()```. El proceso hijo imprimirÃ¡ ```"Hello"```; el proceso padre imprimirÃ¡ ```"goodbye"```. Usted deberÃ¡ asegurar que el proceso hijo imprima en primer lugar; Â¿usted podrÃ­a hacer esto sin llamar ```wait()``` en el padre? 
4. Escriba un programa que llame ```fork()``` y entonces llame alguna forma de ```exec()``` para correr el programa ```/bin/ls```. Intente probar todas las variaciones de la familia de funciones ```exec()``` incluyendo (en linux) ```execl()```, ```execle()```, ```execlp()```, ```execv()```, ```execvp()``` y ```execvpe()```. Â¿Por quÃ© piensa usted que existen tantas variaciones para la misma llamada bÃ¡sica?
5. Escriba ahora un programa que use ```wait()``` para esperar que el proceso hijo finalice su ejecuciÃ³n. Â¿CuÃ¡l es el valor de retorno de la funciÃ³n ```wait()```?, Â¿QuÃ© pasa si usted usa la funciÃ³n ```wait``` en el hijo?
6. Haga un programa, como el del ejercicio anterior, con una breve modificaciÃ³n, la cual consiste en usar ```waitpid()``` en lugar de ```wait()```. Â¿CuÃ¡ndo podrÃ­a ser ```waitpid()``` Ãºtil?
7. Escriba un programa que cree un proceso hijo y entonces en el proceso hijo cierre la salida estandar (```STDOUT FILENO```). Â¿QuÃ© pasa si el hijo llama ```printf()``` para imprimir alguna salida despuÃ©s de cerrar el descriptor?
8. Escriba un programa que cree dos hijos y conecte la salida estÃ¡ndar de un hijo a la entrada estÃ¡ndar del otro usando la llamada a sistema ```pipe()```

## 4. Para la prÃ³xima sesiÃ³n de laboratorio ##
1. **Entregable**: Pendiente.
