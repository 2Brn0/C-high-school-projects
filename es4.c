#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int a=10, s=0;
	while(a>=10 && a<=100)
	{
		if(a%5==0)
		{
			s+=a;
		}
		a+=1;
	}
	printf("la somma e'%d\n",s);
    system("PAUSE");
}

