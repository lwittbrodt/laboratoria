#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DL_ALFABETU 26
#define DL_CALOSC DL_ALFABETU * DL_ALFABETU

int main (void)
{
  int znak, indeks1, indeks2;
  int liczniki[DL_CALOSC];
  int (kolejnosc[DL_CALOSC])[2];
  int i, j;

  // inicjalizacja licznikow i kolejnosci:
  for (i = 0; i < DL_ALFABETU; ++i)
    for (j = 0; j < DL_ALFABETU; ++j)
    {
      liczniki[i * DL_ALFABETU + j] = 0;
      kolejnosc[i * DL_ALFABETU + j][0] = i;
      kolejnosc[i * DL_ALFABETU + j][1] = j;
    }

    printf("Podaj tekst do analizy ");
  indeks1 = -1;
  // wczytywanie tekstu i zliczanie liter:
  znak = getchar();
  while (znak != EOF) {
    if (isalpha(znak)) // czy litera?
    {
      znak = tolower(znak); // upewnij sie, ze mala
      indeks2 = znak - 'a'; // licz indeks
      if (indeks1 != -1) // czy poprzedni znak tez byl litera
        ++liczniki[indeks1 * DL_ALFABETU + indeks2]; // policz dwuznak
    }
    else
      indeks2 = -1; // zaznacz, ze nie litera
    // przesun sie na nastepny znak
    indeks1 = indeks2;
    znak = getchar();
  }

  // sortowanie babelkowe z dopalaczem:
  {
    int k, m, n;
    n = DL_CALOSC;
    while (n > 1)
    {
      m = 1;
      for (k = 1; k < n; ++k)
        // porownaj tylko liczniki
        if (liczniki[k-1] < liczniki[k])
        {
          // zamien liczniki
          int x = liczniki[k-1];
          liczniki[k-1] = liczniki[k];
          liczniki[k] = x;
          // zamien kolejnosc
          int z[2];
          z[0] = kolejnosc[k-1][0];
          z[1] = kolejnosc[k-1][1];
          kolejnosc[k-1][0] = kolejnosc[k][0];
          kolejnosc[k-1][1] = kolejnosc[k][1];
          kolejnosc[k][0] = z[0];
          kolejnosc[k][1] = z[1];

          m = k;
        }
      n = m;
    }
  }

  // drukowanie statystyki:
  printf("\nSTATYSTYKA:\n");
  for (i = 0; i < DL_CALOSC; ++i)
  {
    if (i > 0 && i % 10 == 0)
      printf("\n");
    printf("%c%c:%4i\t", kolejnosc[i][0] + 'a', kolejnosc[i][1] + 'a', 
liczniki[i]);
  }
  printf("\n");

  return 0;
}


