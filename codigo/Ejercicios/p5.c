#include <stdio.h>
#include <unistd.h>

int main (void)
{
  int z = fork();
  int p = getpid();
  if(z == 0) 
  {
     // Codigo hijo
      int x = waitpid(p-1);
     printf("Soy el hijo%d\n",x);
  }else if (z>0){
     
     printf("I am your father%d\n",x);
     
   }else{
       printf("Error");
   }

  return 0;
}
