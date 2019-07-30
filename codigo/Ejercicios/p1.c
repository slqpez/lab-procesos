#include <stdio.h>
#include <unistd.h>

int main (void)
{
  int x = 100;
  int z = fork();
  
  if(z == 0) 
  {
     // Codigo hijo
      x = 200;
     printf("El valor de x del hijo es: %d\n",x);
  }else if (z>0){
    
     printf("El valor de x del padre es: %d\n",x);
     
   }else{
       printf("Error");
   }

  return 0;
}
