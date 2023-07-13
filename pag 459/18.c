/*Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito (il fattoriale di un numero
si ottiene moltiplicando il numero per tutti i suoi predecessori: per esempio, il fattoriale di 5 è dato
da 5*4*3*2*1 e si indica con 5!).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num,n,fatt;
	printf("inserisci un numero:");
	scanf("%d",&num);
	fatt=1;
	n=num;
	while(n>0)
	{
		fatt=fatt*n;
		n=n-1;	
	}
	printf("%d! = %d",num, fatt);
	return 0;
}
