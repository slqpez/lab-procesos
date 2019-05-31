# PRÁCTICA 1 - PROCESOS #

## 1. Objetivos ##
1. Familiarizarse con las diferentes estructuras y funciones relacionadas con los procesos en linux.
2. Codificar programas que hagan uso del API de procesos.

## 2. Actividades previas al laboratorio ##

Asignadas en la práctica anterior. 

## 3. Temas a tratar ##
1. Manejo de procesos en Linux.

## 5. Actividades en el laboratorio ##

Realizar los siguientes ejercicios:

1. Escriba un programa que llame un ```fork()```. Antes del llamado del ```fork()```, declare una variable de acceso (e.g., ```x```) y asígnele un valor (e.g., ```100```). Responda las siguientes preguntas:
  * ¿Cuál es el valor de la variable en el proceso hijo?
  * ¿Qué sucede con la variable cuando el proceso hijo y el padre cambian el valor de ```x```?
2. Escriba un programa que abra un archivo (con la llamada ```open()```) y entonces llame a ```fork()```. 
  * ¿Pueden el padre y el hijo acceder al file descriptor retornado por ```open()```? 
  * ¿Qué pasa si ellos empiezan a escribir el archivo de manera concurrente, es decir, a la misma vez?
3. Escriba un programa usnado ```fork()```. El proceso hijo imprimiera ```"Hello"```; el proceso padre imprimirá ```"goodbye"```.
Usted deberá asegurar que el proceso hijo imprima primero; ¿usted puede hacer esto sin llamar ```wait()``` en el padre? 
4. Escriba un programa que llame ```fork()``` y entonces llame alguna forma de ```exec()``` para correr el programa
```/bin/ls```. Vea si puede intentar todas las variaciones de ```exec()``` incluyendo (en linux) ```execl()```, ```execle()```, ```execlp()```, ```execv()```, ```execvp()``` y ```execvpe()```. ¿Por qué usted piensa que hay tantas variaciones para la misma llamada básica?
5. Escriba ahora un programa que use ```wait()``` para esperar que el proceso hijo finalizace. ¿Qué retorna ```wait()```?, ¿Qué pasa si usted usa wait en el hijo?
6. Haga un programa, como el del ejercicio anterior, con una breve modificación, la cual consiste en usar ```waitpid()``` en vez de ```wait()```. ¿Cuándo podría ser ```waitpid()``` útil?
7. Escriba un programa que cree un proceso hijo y entonces en el proceso hijo cierre la salida estandar (```STDOUT FILENO```). ¿Qué pasa si el hijo llama ```printf()``` para imprimir alguna salida después de cerrar el descriptor?
8. Escriba un programa que cree dos hijos y conecte la salida estradas a una entrada estándar del otro usando la llamada a sistema ```pipe()```

## 6. Para la próxima sesión de laboratorio ##
1. **Entregable**: Pendiente.
