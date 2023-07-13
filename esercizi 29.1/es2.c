/*Scrivi un programma che calcola il fattoriale di un numero intero positivo N 
(controlla che N non sia negativo). Il fattoriale di un Numero si indica con ! 
ed è uguale al prodotto dei primi N numeri naturali (ad esempio se N=4 allora N!=1*2*3*4=24)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n,nn=1,nnn=1,c=0;
	printf("inserisci un numero:");
	scanf("%d",&n);	
	while(c<n)
	{
        nn=nn*nnn;
        c++;      
        nnn++;
    }
    printf("!%d=%d",n,nn);
 	printf("\n\n");
	 system("PAUSE");
   	return 0;
}



