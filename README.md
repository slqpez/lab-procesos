# PRACTICA 1 - PROCESOS #

## 1. Objetivos ##
1. Familiarizarse con las diferentes estructuras y funciones relacionadas con los procesos en linux.
2. Codificar programas que hagan uso del API de procesos.

## 2. Actividades previas al laboratorio ##

**Actividad 1**: Traer leido el [Interlude: Process API](http://pages.cs.wisc.edu/~remzi/OSTEP/cpu-api.pdf). Compilar todos los codigos de este los cuales se encuentran en el siguiente [enlace](https://github.com/so-udea/ostep-code/tree/master/cpu-api).
 
**Actividad 2 - Entregable**: Con base en lo leido, responder las siguientes pregunas:
1. ¿Que hace la llamada ```fork``` y que devuelve?
2. ¿Que es un PID y como se obtiene?
3. ¿Para que sirve la llamada ```wait```?
4. ¿Que hace la llamada ```exec```, cuantas variaciones de esta existen?
5. Dado el siguiente codigo:

```C
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  pid_t pid_h1, pid_h2, pid_h3;
  pid_t pid_n;
  int i = 0;  
  pid_h1 = fork();
  if(pid_h1 == 0) {
    i++;
    pid_n = fork();
    if(pid_n==0) {
      i++;
      printf("NIETO: i = %d\n",i);      
    }else {
      printf("HIJO 1: i = %d\n",i);      
    }   
  }else {
    pid_h2 = fork();
    if(pid_h2 == 0) {
      i++;
      printf("HIJO 2: i = %d\n",i);   
    }else {
      pid_h3 = fork();
      if(pid_h3 == 0) { 
         i++;
         printf("HIJO 3: i = %d\n",i);   
      }else {  
         printf("PAPA: i = %d\n",i);   
      }
    }
  }
  return 0;
}
```
Responda las siguientes preguntas:
  1. ¿Cuantos hijos tiene cada uno de los procesos anteriormente creados?
  2. ¿Cual proceso se acaba primero?
  3. ¿La variable i es la misma para todos los procesos?, ¿Cual es su valor?

## 3. Temas a tratar ##
1. Manejo de procesos en Linux.

## 5. Actividades en el laboratorio ##

Realizar los siguientes ejercicios:

1. Escriba un programa que llame un ```fork()```. Antes del llamado del ```fork()```, declare una variable de acceso (e.g., ```x```) y asignele un valor (e.g., ```100```). Responda las siguientes preguntas:
  * ¿Cual es el valor de la variable en el proceso hijo?
  * ¿Que sucede con la variable cuando el proceso hijo y el padre cambian el valor de ```x```?
2. Escriba ub programa que habra un archivo (con la llamada ```open()```) y entonces llame a ```fork()```. 
  * ¿Pueden el padre y el hijo acceder al file descriptor retornado por ```open()```? 
  * ¿Que pasa si ellos empiezan a escribir el archivo de manera concurrente, es decir, a la misma vez?
3. Escriba un programa usnado ```fork()```. El proceso hijo imprimiera ```"Hello"```; el proceso padre imprimira ```"goodbye"```.
Usteb deberá asegurar que el proceso hijo imprima primero; ¿usted puede hacer esto si llamar ```wait()``` en el padre? 
4. Escriba un programa que llame ```fork()``` y entonces llame alguna forma de ```exec()``` para correr el programa
```/bin/ls```. Vea si puede intentar todas las variaciones de ```exec()``` incluyendo (en linux) ```execl()```, ```execle()```, ```execlp()```, ```execv()```, ```execvp()``` y ```execvpe()```. ¿Por que uste piensa que hay tantas variaciones para la misma llamada basica?
5. Escriba ahora un programa que use ```wait()``` para esperar que el proceso hijo finalizace. ¿Que retorna ```wait()```?, ¿Que pasa si usted usa wait en el hijo?
6. Haga un programa como el del ejercicio anterior con una breve modificación, la cual consiste en usar ```waitpid()``` en vez de ```wait()```. ¿Cuando podria ser ```waitpid()``` util?
7. Escriba un programa que cree un proceso hijo, y entonces en el proceso hijo cierre la salida estandar (```STDOUT FILENO```). ¿Que pasa si el hijo llama ```printf()``` para imprimir alguna salida despues de cerrar el descriptor?
8. Escriba un programa que cree dos hijos, y conecte la salida estandas a una entrada estanter del otro usando la llamada a sistema ```pipe()```

## 6. Para la proxima sesion de laboratorio ##
1. **Entregable**: Pendiente.
