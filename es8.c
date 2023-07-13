#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      int num, count=0;
      printf("inserisci num:");
      scanf("%d",&num);
      
      while(num%2==0)
      { 
                     printf("inserisci num:");
                     scanf("%d",&num);
                     count=count+1;                     
      }
      printf("hai inserito %d numeri pari",count);
     
      
      printf("\n\n");
      system("PAUSE");
   
}
