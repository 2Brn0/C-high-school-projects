#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
  int conta=1, num, max=-99999;
   printf("inserisci %d numero:",conta);
   scanf("%d",&num);
   max=num;
  while(conta<10)
  {
         conta=conta+1;
         printf("inserisci %d numero:",conta);
         scanf("%d",&num);
         if(num>max)
         {
                    max=num;
         }
         
         
  }
                
  printf("il massimo e'%d", max);
  printf("\n\n");
  system("PAUSE");
   
}
