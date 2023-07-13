#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//es 8
/* Scrivi un programma che chiede in ingresso un numero finché non si inserisce un numero dispari. Quando questo
avviene, il programma termina scrivendo quanti numeri pari erano stati inseriti in precedenza.*/
main()
{
	int num,num2, count=0;

	while(num2==0)
	{
		printf("inserisci num:");
		scanf("%d",&num);
		count=count+1;
		num2=num%2;
	}
	count=count-1;
	printf("sono stati scritti %d numeri positivi", count);
	

	printf("\n\n");
    system("PAUSE");
}

