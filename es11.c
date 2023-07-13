#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num, conta=0, somma=0;
	printf("inserisci num:");
	scanf("%d",&num);
	while(num>=conta)
	{
		somma=somma+2*conta;
		conta=conta+1;
	}
	printf("la somma e'%d",somma);
	printf("\n");
    system("PAUSE");
}

