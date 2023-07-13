#include <stdio.h>

int
main ()
  {
    int num, n;
    printf ("inserisci num:");
    scanf ("%d", &num);
    n = num;
    while (n > 0)
      {

	if (num % n == 0)
	  printf (" %d  ", n);
	n = n - 1;
      }
    return 0;
}

