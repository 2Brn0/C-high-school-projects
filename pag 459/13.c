//Scrivi un programma che legge una serie di numeri interi positivi arrestandosi quando la somma dei numeri immessi
//supera un valore costante letto come primo numero della sequenza.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num,num2,somma=0;
	printf("inserisci un valore per num:");
	scanf("%d",&num);
	while(somma<=num)
	{
		printf("inserisci un valore per num:");
		scanf("%d",&num2);	
		somma=somma+num2;
	}
//	printf("la somma e' %d",somma);
	return 0;
}

