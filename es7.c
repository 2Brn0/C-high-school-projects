/*Scrivi un programma che effettua il conto alla rovescia a partire da un valore minore di 20 inserito dall’utente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	printf("insesci un numero minore di 20:");
	scanf("%d",&n);
	do
	{
	n--;
	printf("%d\n",n);

	}while(n>0);
	

 	return 0;
}
