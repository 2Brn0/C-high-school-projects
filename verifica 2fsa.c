#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
      int in,lun,lun2,lun3,c=0;
      printf("inserisci inizio:");
      scanf("%d",&in);
      printf("inserisci lunghezza:");
      scanf("%d",&lun);
      if(lun>0)
      {              
               do{
                  in=in+1;
                  printf("%d ",in);
                  c++;
               } while(c<lun);              
      }
      else
      {
          lun2=pow(lun,2);
          lun3=sqrt(lun2);
         do{
                  in=in-1;
                  printf("%d ",in);
                  c++;
               } while(c<lun3);    
      }   
    printf("\n\n");
    system("PAUSE");
}

