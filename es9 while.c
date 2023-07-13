#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//es 9
/*Scrivi un programma che legge una sequenza di numeri interi positivi terminanti con l’immissione del numero 0 e
ne ricerca il valore minimo visualizzandolo sullo schermo.*/
main()
{
	int num,num2, min;
	while(num2==0 && num<0)
	{
		printf("inserisci num:");
		scanf("%d",&num);
		num2=num%2;
		if(min<num)
		{
			min=num;
		}
		
	}
	printf("il numero minore e' %d",min);
	printf("\n\n");
    system("PAUSE");
}
