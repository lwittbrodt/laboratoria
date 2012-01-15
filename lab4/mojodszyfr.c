#include<stdio.h>

main() {
 char  klucz [27];
 char z;
 int n;

 // Klucz szyfru:
 klucz[ 0] = 'a';  klucz[ 9] = 'j';  klucz[18] = 's';
 klucz[ 1] = 'b';  klucz[10] = 'k';  klucz[19] = 't';
 klucz[ 2] = 'c';  klucz[11] = 'l';  klucz[20] = 'u';
 klucz[ 3] = 'd';  klucz[12] = 'm';  klucz[21] = 'w';
 klucz[ 4] = 'e';  klucz[13] = 'n';  klucz[22] = 'v';
 klucz[ 5] = 'f';  klucz[14] = 'o';  klucz[23] = 'x';
 klucz[ 6] = 'g';  klucz[15] = 'p';  klucz[24] = 'y';
 klucz[ 7] = 'h';  klucz[16] = 'q';  klucz[25] = 'z';
 klucz[ 8] = 'i';  klucz[17] = 'r';  klucz[26] = ' ';

 z = getchar();
 while (z != EOF) {

  // znalezc w tablicy klucz :
   n=0;
   while (n<27 && klucz[n] != z)  n=n+1;

  // wydrukowac odpowiadajcy mu indeks tablicy:
  if (n<27)  printf("%c ", klucz[(n-1)%27]);

  // wczytac nowy znak:
   z = getchar();
 }

 // koniec i  wydruk:
 printf("-1\n");
}
