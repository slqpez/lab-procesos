# lab-procesos
Laboratorio de procesos

## Homework (Code) ##

### Objetivos ###
* Familiarizarse con el the process management APIs.

In this homework, you are to gain some familiarity with the process
management APIs about which you just read. Don’t worry – it’s even
more fun than it sounds! You’ll in general be much better off if you find
as much time as you can to write some code, so why not start now?

### Ejercicios de programacion  ###

1. Escriba un programa que llame un ```fork()```. Antes del llamado del ```fork()```, declare una variable de acceso (e.g., ```x```) y asignele un valor (e.g., ```100```). Responda las siguientes preguntas:
  * ¿Cual es el valor de la variable en el proceso hijo?
  * ¿Que sucede con la variable cuando el proceso hijo y el padre cambian el valor de ```x```?

Write a program that calls fork(). Before calling fork(), have the main
process access a variable (e.g., x) and set its value to something (e.g., 100).
What value is the variable in the child process? What happens to the variable
when both the child and parent change the value of x?


2. Escriba ub programa que habra un archivo (con la llamada ```open()```) y entonces llame a ```fork()```. 
  * ¿Pueden el padre y el hijo acceder al file descriptor retornado por ```open()```? 
  * ¿Que pasa si ellos empiezan a escribir el archivo de manera concurrente, es decir, a la misma vez?

Write a program that opens a file (with the open() system call) and then
calls fork() to create a new process. Can both the child and parent access
the file descriptor returned by open()? What happens when they are
writing to the file concurrently, i.e., at the same time?

3. Escriba un programa usnado ```fork()```. El proceso hijo imprimiera ```"Hello"```; el proceso padre imprimira ```"goodbye"```.
Usteb deberá asegurar que el proceso hijo imprima primero; ¿usted puede hacer esto si llamar ```wait()``` en el padre? 

Write another program using fork(). The child process should print “hello”;
the parent process should print “goodbye”. You should try to ensure that
the child process always prints first; can you do this without calling wait() in
the parent?


4. Escriba un programa que llame ```fork()``` y entonces llame alguna forma de ```exec()``` para correr el programa
```/bin/ls```. Vea si puede intentar todas las variaciones de ```exec()``` incluyendo (en linux) ```execl()```, ```execle()```, ```execlp()```, ```execv()```, ```execvp()``` y ```execvpe()```. ¿Por que uste piensa que hay tantas variaciones para la misma llamada basica?

Write a program that calls fork() and then calls some form of exec() to
run the program /bin/ls. See if you can try all of the variants of exec(),
including (on Linux) execl(), execle(), execlp(), execv(), execvp(),
and execvpe(). Why do you think there are so many variants of the same
basic call?


5. Escriba ahora un programa que use ```wait()``` para esperar que el proceso hijo finalizace. ¿Que retorna ```wait()```?, ¿Que pasa si usted usa wait en el hijo?

Now write a program that uses wait() to wait for the child process to finish
in the parent. What does wait() return? What happens if you use wait()
in the child?


6. Haga un programa como el del ejercicio anterior con una breve modificación, la cual consiste en usar ```waitpid()``` en vez de ```wait()```. ¿Cuando podria ser ```waitpid()``` util?

Write a slight modification of the previous program, this time using waitpid()
instead of wait(). When would waitpid() be useful?

7. Escriba un programa que cree un proceso hijo, y entonces en el proceso hijo cierre la salida estandar (```STDOUT FILENO```). ¿Que pasa si el hijo llama ```printf()``` para imprimir alguna salida despues de cerrar el descriptor?

Write a program that creates a child process, and then in the child closes
standard output (STDOUT FILENO). What happens if the child calls printf()
to print some output after closing the descriptor?

8. Escriba un programa que cree dos hijos, y conecte la salida estandas a una entrada estanter del otro usando la llamada a sistema ```pipe()```

Write a program that creates two children, and connects the standard output
of one to the standard input of the other, using the pipe() system call.


Write a program that creates a child process, and then in the child closes
standard output (STDOUT FILENO). What happens if the child calls printf()
to print some output after closing the descriptor?
8. Write a program that creates two children, and connects the standard output
of one to the standard input of the other, using the pipe() system call.

Tomado de: http://pages.cs.wisc.edu/~remzi/OSTEP/cpu-api.pdf
