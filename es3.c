#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      int num, pari;
      printf("inserisci num1:");
      scanf("%d",&num);
      
      if(num%2==0)
      {
               pari=num-2;                        
      }
      else
      {
               pari=num-1;
      }
      while(pari>=2)
      {
      printf("%d ",pari);
      pari=pari-2;
      }
      
      printf("\n\n");
      system("PAUSE");
   
}
