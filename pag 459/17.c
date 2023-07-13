/*Scrivi un programma che ricerca i primi tre numeri perfetti e li visualizza sullo schermo (un numero è perfetto
se è uguale alla somma dei suoi divisori, per esempio il numero 6 è perfetto dato che 6 = 1 + 2 + 3).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num=2,n,somma=0;
//	printf("inserisci num:");
//	scanf("%d", &num);
	n=num; 
	while(n>=0)
	{
		if(num%n==0)
		{
			printf("%d\n",n);
			somma=n+somma;
		}
		n=n-1;
	num=num+1;
	if(somma==num)
	printf("%d",num);	
	}
	return 0;
}

