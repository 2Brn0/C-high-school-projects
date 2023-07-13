#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

main()
{
      int n,nn,c=0;
      srand(time(NULL));
      printf("inserisci un numero:");
      scanf("%d",nn);
	  while(c<nn)
	  {
            n=rand()%(200)+2;
            printf("\t%d",n);
            c++;      
      }

      system("PAUSE");
	
	
	
	  printf("\n\n");
	  system("PAUSE");
}
