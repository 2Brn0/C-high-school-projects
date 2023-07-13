/*Scrivi un programma basato su un ciclo a controllo iniziale che prenda in input un numero 
positivo N e verifichi se è deficiente (i numeri deficienti sono quei numeri maggiori della somma
dei loro divisori escluso se stessi; ad esempio 10 è deficiente perché 1+2+5=8<10).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n, num,s=0,c=0;
	printf("inserisci un numero:");
	scanf("%d",&num);		
	n=num; 
	while(n>0)
	{
		if(num%n==0)
		s+=n;
		n=n-1;
	}
	s=s-num;
//	printf("somma=%d",s);
	if(s<num)
	printf("%d e' deficiente",num);
	else
	printf("%d non e' deficiente",num);
 	printf("\n\n");
	 system("PAUSE");
   	return 0;
}


