#include<stdio.h>
main()
{
int 
  i,liczba,dlcyfry,dlcyfry2,dlugosc,tab[100],tab2[100],tab3[100],reszta;
// zerowanie tablic 
for (i=0; i<=100; i++)
{
        tab[i]=0;
        tab2[i]=0;
        tab3[i]=0;
}
// wczytywanie do pierwszej tablicy
printf("Podaj dlugosc pierwszej liczby\n");
scanf("%i", &dlcyfry);

printf("Podaj pierwsza cyfre od konca\n");

for (i=0; i<=dlcyfry-1; i++)
{
        scanf("%i", &tab[i]);
}
// wczytywanie do drugiej tablicy
printf ("podaj dlugosc drugiej liczby\n");
scanf  ("%i", &dlcyfry2);
printf("podaj cyfre druga od konca\n");
for (i=0; i<=dlcyfry2-1; i++)
{
        scanf("%i", &tab2[i]);
}
// sprawdzanie ktora liczba jest dluzsza
if (dlcyfry>dlcyfry2)
{
        dlugosc=dlcyfry;
}
else
{
        dlugosc=dlcyfry2;
}

reszta=0;
// dodawanie cyfr
for (i=0; i<=dlugosc-1; i=i+1)
{
      tab3[i]=tab[i]+tab2[i]+reszta;
      reszta=0;
        if (tab3[i]>=10)
        {
          reszta=1;
          tab3[i]=tab3[i]%10;
        }
        if (i==dlugosc-1 && reszta==1)  // jesli liczba nie miesci sie w 9 to
        {                              // dajemy reszte do komorki dalej
                dlugosc=dlugosc+1;    // zwiekszenie dlugosci tablicy wynikowej
        }

}
// wypisanie tablicy
for (i=dlugosc-1; i>=0; i=i-1)
 {
        printf("%i", tab3[i]);
 }
}
