#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num, min;
	printf("inserisci num:");
	scanf("%d",&min);
//	min=num;
	while(num>=1)
	{
		printf("inserisci num:");
		scanf("%d",&num);
		if(num < min)
		{
			min=num;
		}			
	}
	printf("min=%d",min);
	return 0;
}

