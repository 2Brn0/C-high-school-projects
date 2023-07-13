/*Scrivi un programma che legge da tastiera una sequenza di numeri positivi e a ogni numero letto ne stampa
la somma progressiva. Il programma termina quando si introduce un numero minore o uguale a zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num,somma=0;
	printf("inserisci un valore per num:");
	scanf("%d",&num);
	somma=num;
	printf("somma= %d",somma);	
	while(num>0)
	{
		printf("\ninserisci un valore per num:");
		scanf("%d",&num);	
		somma=somma+num;
		printf("somma= %d",somma);
	}
	return 0;
}

