#include <stdio.h>
#include <unistd.h>

int main (void)
{
  int x = 100;
  int z = fork();
  
  if(z == 0) 
  {
     // Codigo hijo
      
     printf("Hello\n");
  }else if (z>0){
     sleep(5);
     printf("Goodbay\n");
    
     
   }else{
       printf("Error");
   }

  return 0;
}