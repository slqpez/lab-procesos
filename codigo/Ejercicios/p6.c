#include <stdio.h>
#include <unistd.h>

int main (void)
{
  int z = fork();
  
  if(z == 0) 
  {
     // Codigo hijo
      int x = waitpid();
     printf("Soy el hijo%d\n",x);
  }else if (z>0){
     int x = wait();
     printf("I am your father\n",x);
     
   }else{
       printf("Error");
   }

  return 0;
}
