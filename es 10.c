/* Scrivi un programma che effettua la somma dei numeri inseriti dall’utente fino a raggiungere il numero 1000
e indica quanti numeri sono stati sommati.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,c=0,s;
	do
	{
	printf("insesci un numero :");
	scanf("%d",&n);
	s+=n;
	c++;
	}while(s<=1000);
	printf("\nnumeri sommanti= %d\n",c);
 	return 0;
}
