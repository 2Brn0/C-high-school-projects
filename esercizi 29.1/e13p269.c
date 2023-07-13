/* Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo delle somme successive dopo
aver controllato l’input e accettato solo valori maggiori di 0.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n1,n2,n=0,r=0;

	printf("inserire n1:");
	scanf("%d",&n1);
	printf("inserire n2:");
	scanf("%d",&n2);
	do
	{
		n++;
		r+=n2;
	}while(n<n1);		
	printf("risultato: %d",r);
	printf("\n\n");
    system("PAUSE");
	return 0;
}

