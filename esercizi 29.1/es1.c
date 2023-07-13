/*Scrivi un programma che generi N numeri casuali compresi tra due valori min e max (con N, min e max inseriti dall’utente) 
 e produca in output il più grande e il più piccolo di essi; alla fine, dai l’opportunità all’utente di ricominciare 
(‘S’ o ‘s’ per confermare, ‘N’ o ‘n’ per terminare). */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
	int n,max,min,nn,c,cc,ccc;
	char s;
	srand(time(NULL));
	do{
	printf("inserisci il numero di numeri che si vuole generare:");
	scanf("%d",&nn);
	printf("inserisci minimo:");
	scanf("%d",&min);
	printf("inserisci massimo:");
	scanf("%d",&max);
	cc=999999;
    ccc=-999999;
    c=0;	
    system("CLS");
	while(c<nn)
	{
            n=rand()%(max-min+1)+min;
            printf("%d  ",n);
            c++;      
            if(n<cc)
            {
                  cc=n;   
            };
            if(n>ccc)
            {
                  ccc=n;          
            };
   
    } printf("\nMinimo %d - Massimo %d",cc ,ccc);
    do{
       printf("\nntinuare? sS/nN");
       s=getch();
       }while(s!='S'&& s!='s' && s!='n' && s!='N');
    }while(s=='S' || s=='s');;
   
 	printf("\n\n");
	 system("PAUSE");
   	return 0;
}


