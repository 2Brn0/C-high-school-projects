/* Scrivi un programma che legge un numero num e quindi successivamente esegue la somma di num numeri inseriti
dall’utente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n1,n2,c=0,somma=0;
	printf("inserisci un numero:");
	scanf("%d", &n1);
  	while(c<n1)
	{
		c=c+1;
		printf("inserisci un numero:");
		scanf("%d", &n2);
		somma=somma+n2;	
	}
	printf("somma=%d", somma);
 	return 0;
}
