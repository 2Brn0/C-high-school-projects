#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int n,c=0;
	srand(time(NULL));

	while(c<100)
	{
                //rand()%(num2-num1+1)+num1;
            n=rand()%(100-18+1)+18;
            printf("\t%d",n);
            c++;      
    }

    system("PAUSE");

}
