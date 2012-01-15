#include <stdio.h>

int main()
{
  int w, k, e, i, j, n, a = 0;
  
 printf("\n\n Podaj wymiary wys1 i szer1:\n wys1 = ");
  scanf("%i", &w);
  printf(" szer1 = ");
  scanf("%i", &k);
  printf("\n Podaj wys2 i szer2:\n wys2 musi byc rowne z szer1 zeby wymnozyc macierz\n wys2 = %i\n szer2 = ", k);
  scanf("%i", &e);
  
  float mz1[w][k], mz2[k][e], mzw[w][e];
  
  printf("\n Podaj kolejno elementy pierwszej macierzy:\n\n");
  for (i = 0; i < w; i++)
  {
    for (j = 0; j < k; j++)
    {
      printf(" Element %i,%i = ", i, j);
      scanf("%f", &mz1[i][j]);
    }
    printf("\n");
  }
  
  printf("\n Podaj kolejno elementy drugiej macierzy:\n\n");
  for (i = 0; i < k; i++)
  {
    for (j = 0; j < e; j++)
    {
      printf(" Element %i,%i = ", i, j);
      scanf("%f", &mz2[i][j]);
    }
    printf("\n");
  }
  
  printf("\n Wynikiem mnozenia tych macierzy jest macierz:\n\n");
  for (i = 0; i < w; i++)  // algorytm mnozenia - dziala juz
  {
    for (j = 0; j < e; j++)
    {
      for (n = 0; n < k; n++)
      {
        a = mz1[i][n] * mz2[n][j] + a;
        mzw[i][j] = a;
      }
      a = 0;
    }
  }
  //`wypisanie macierzy wynikowej
  for (i = 0; i < w; i++)
  {
    for (j = 0; j < e; j++)
    {
      printf(" %3.2f ", mzw[i][j]);
    }
   printf("\n");
  }

  printf("\n");

  return 0;
}

