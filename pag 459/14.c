/*Scrivi un programma che legge da tastiera una sequenza di lunghezza ignota a priori di numeri interi positivi. Il
programma, a partire dal primo numero introdotto, stampa ogni volta la media di tutti i numeri introdotti. Termina
quando il numero inserito è negativo.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num,c,somma=0;
	float media;
	printf("inserisci un valore per num:");
	scanf("%d",&num);
	media=num;
	printf("media= %.2f",media);
	c=1;
	somma=num;
	while(num>0)
	{
		c=c+1;
		printf("\ninserisci un valore per num:");
		scanf("%d",&num);	
		somma=somma+num;
		media=(float)somma/c;
		printf("media= %.2f", media);
	}
	return 0;
}
