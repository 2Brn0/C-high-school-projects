/*Scrivi un programma che legge una sequenza di numeri interi positivi terminanti con l’immissione del numero 0 e
ne ricerca il valore minimo visualizzandolo sullo schermo.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int min,n1;
	printf("inserisci un numero:");
	scanf("%d", &n1);
	min=n1;
	while(n1!=0)
	{
		printf("inserisci un numero:");
		scanf("%d", &n1);
		if(n1<min)
		{
			min=n1;
		}
	//printf("il numero minore e': %d",min);
			
	}
	printf("il numero minore e': %d",min);
 	return 0;
}
