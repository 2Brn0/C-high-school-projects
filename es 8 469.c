#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

main()
{
      int n,c=0;
      srand(time(NULL));

	  while(c<2)
	  {
            n=rand()%(6)+1;
            printf("\t%d\n",n);
            c++;      
      }

      system("PAUSE");
	
	
	
	  printf("\n\n");
	  system("PAUSE");
}
