#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//es 2

main()
{
	int num, max=0, count=1;
        
	
	while (count <= 10) 
	{ 
		count+=1;
		printf( "Inserisci un numero: "); 
		scanf( "%d" , &num); 	
		if (num > max ) 
		{
			max = num;
		}	
	} 
	printf ("Il numero maggiore e' %d\n" , max);
	return 0;

	printf("\n\n");
    system("PAUSE");
}

