//Scrivi un programma che legge un numero num ed esegui il calcolo della somma dei primi num numeri interi positivi pari.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int n1, n2, c=0, somma;
	printf("inserisci un numero:");
	scanf("%d",&n1);
	
	while(c<n1)
	{
		c=c+1;
		somma=somma+c;
	}
	somma-=1;
	printf("il risultato e' %d\n",somma);
    return 0;
}

