//Scrivi un programma che esegue la moltiplicazione di due numeri inseriti da un utente utilizzando il metodo delle somme successive
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int n1, n2, c=0, ris=0;
	printf("inserisci il primo numero:");
	scanf("%d",&n1);
	printf("inserisci il secondo numero:");
	scanf("%d",&n2);
	while(c<n1)
	{
		c=c+1;
		ris=ris+n2;
	}
	printf("il risultato e' %d\n",ris);
    system("PAUSE");
}

