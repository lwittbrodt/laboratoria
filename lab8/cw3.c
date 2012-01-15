#include <stdio.h>
#include <stdlib.h>
#define DL_ALFABETU 26
void  blad (char komunikat[])
 {
   printf("\n!!! BLAD -- %s!!!\n\n", komunikat);
   exit(1);
 }

 int  numer_litery (char litera)
 {      // duze litery sa sklejane z malymi; nielitery uzyskuja numer -1
 if ('a'<=litera && litera<='z')  return (int)litera - (int)'a';
   else
if ('A'<=litera && litera<='Z')  return (int)litera - (int)'A';
     else  return -1;
}
char  litera_o_numerze (int n)
 {
 // jesli n<0 lub n>=DL_ALFABETU -- sygnal bledu
 if (0<=n && n<DL_ALFABETU)  return (char)((int)'a'+n);
 else  blad("zly numer litery");
  return 0;
}
int main()
{
  char znak, znak2;
  int liczniki[DL_ALFABETU][DL_ALFABETU], i, j;
      // inicjalizacja licznikow:
 printf("Podaj tekst do analizy przez program: \n");
 for (i=0; i<DL_ALFABETU; i++)
 for(j=0; j<DL_ALFABETU; j++)
  liczniki[i][j] = 0;

     // wczytywanie tekstu i zliczanie liter:
  znak2 = getchar();
  if(znak2 == EOF)

        {

      blad("Wejscie powinno miec wiecej niz 1 znak!");

        }

   znak = getchar();

  while (znak != EOF && znak2!=EOF)
           {
    if(znak == ' ' || znak == '\n') // bez przejscia i bez spacji

                    {
            znak2 = getchar();

                        if(znak2 != EOF)
                         {
                          znak = getchar();
                         }
                    }

         i = numer_litery(znak);
         j = numer_litery(znak2);

   if (i>=0 && j>=0)  liczniki[j][i] = liczniki[j][i]+1;

     znak2 = znak;
     znak = getchar();

 }

      printf("\n");

 printf("\nSTATYSTYKA:\n");

      //wylistowanie statystyki
 for (i=0; i<DL_ALFABETU; i++)

    {
 for (j=0; j<DL_ALFABETU; j++)
        {
          if(liczniki[i][j]!=0)
             {
          printf("Para '%c%c' wystapila %i razy ", litera_o_numerze(i), litera_o_numerze(j),   liczniki[i][j]);
          printf("\n");

            }
        }

     }
 return 0;
 }

