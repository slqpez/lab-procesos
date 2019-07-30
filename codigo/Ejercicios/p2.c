#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main (void)
{
    FILE * filedesc;
    filedesc = fopen("/home/estudiantes/juan.posada5/Desktop/Lab1/lab-procesos/prueba.txt", "wt");
    int z = fork();
    if(z == 0) 
    {
        for(int i=0; i<100000; i++){
                fputc ( 'H' , filedesc );
        }
       
      
    }else if (z>0){
    
         for(int i=0; i<100000; i++){
                fputc ( 'P' , filedesc );
         }
    }else{
       printf("Error");
       }
    fclose(filedesc);

   return 0;
}