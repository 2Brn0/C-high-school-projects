/*Scrivi un programma C che legge da tastiera una sequenza di numeri interi terminante con un numero negativo e al termine stampa a
 video il numero dei numeri letti che sono maggiori di zero, di quelli
che sono minori di zero e di quelli nulli.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int max=0,min=0,eq=0,n;
	do
	{
		printf("insesci un numero:");
		scanf("%d",&n);
		if(n!=0)
		{
			if(n<0)
			{
			min++;	
			}	
			else 
			max++;
		}
		else
		eq++;
	}while(n>=0);
	
	printf("numeri maggiori di 0: %d\n",max);
	printf("numeri minori di 0: %d\n",min);
	printf("numeri nulli: %d",eq);	
 	return 0;
}
