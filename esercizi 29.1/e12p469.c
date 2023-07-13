/*Scrivi un programma che effettua il calcolo della media dei voti della pagella, inserendoli uno alla volta
e terminando con l’inserimento del numero 0.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int v,n=0;
	float s=0, m;
	do
	{	printf("inserisci un voto:");
		scanf("%d",&v);
		n++;
		s+=v;
		m=s/n;	
		printf("media=%.2f\n",m);	
	}while(v!=0);
	//printf("media=%.2f",m);
	return 0;
}
