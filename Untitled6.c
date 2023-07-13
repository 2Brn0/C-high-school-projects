#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n1,n2, conta=0,prod;
	printf("n1:");
	scanf("%d",&n1);
	printf("n2:");
	scanf("%d",&n2);
	prod=0;
	while(conta<n2)
	{
		conta=conta+1;
		prod=n1+prod;
	}
	printf("prodotto=%d",prod);
	return 0;
}
