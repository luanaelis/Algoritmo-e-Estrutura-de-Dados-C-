/******************************************************************************

Luana Elis Teixeira Gallo - Vetorização 

*******************************************************************************/
#include <stdio.h>


int
main ()
{
  int v1[9], v2[9], i;


  for (i = 0; i < 10; i++)
    {
      printf ("Entre com o numero %d: ", i + 1);
      scanf ("%d", &v1[i]);
      v2[i] = v1[i] * v1[i];
    }

  printf ("\nVetor 1     |     Vetor 2");

  for (i = 0; i < 10; i++)
    {
      if (v1[i] < 10)
	printf ("\n%d                   %d", v1[i], v2[i]);
      else
	printf ("\n%d                  %d", v1[i], v2[i]);
    }
}
