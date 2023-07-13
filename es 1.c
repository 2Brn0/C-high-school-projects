#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int
main ()
{
  int in, lun, c = 0;
  printf ("inserisci inizio:");
  scanf ("%d", &in);
  printf ("inserisci lun:");
  scanf ("%d", &lun);
  if (lun > 0)
    {
      while (lun > c)
	{
	  c++;
	  in++;
	  printf ("%d ", in);
	}
    }
  else
    {
      while (lun < c)
	{
	  c--;
	  in--;
	  printf ("%d ", in);
	}

    }
  return 0;
}
