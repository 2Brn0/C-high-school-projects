#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,c;
    float f=1;
    printf("inserisci un numero:");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
              f=f*c;
              printf("%d ",c);         
    }
	printf("\nfattoriale= %.0f",f);

 	printf("\n\n");
    system("PAUSE");   
	return 0;
}
