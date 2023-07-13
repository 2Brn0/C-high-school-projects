/* Scrivi un programma che legge un numero intero in ingresso e lo converte in numero binario mediante successiva
divisione per 2.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n,c=0,d=2;
	printf("inserisci il numero da convertire:");
	scanf("%d",&n);
	printf("xxxxxxxxx IL RISULTATO SI LEGGE AL CONTRARIO xxxxxxxxx\n");
	while(n>0)
	{
	c++;
	if(n%d!=0)
	printf("1");
 	else
 	printf("0");
	n=n/d;	
	}
 	printf("\n\n");

	 system("PAUSE");
   
	return 0;
}

