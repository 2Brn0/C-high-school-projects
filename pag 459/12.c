//Scrivi un programma che legge un numero num e visualizza sullo schermo tutti i suoi fattori.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num,n;
	printf("inserisci num:");
	scanf("%d", &num);
	n=num; 
	while(n>0)
	{
		if(num%n==0)
		printf("%d\n",n);
		n=n-1;
	}
	return 0;
}

