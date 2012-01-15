#include <stdio.h>

main() {



char klucz [27];
  
  // Klucz szyfru:
        klucz[ 0] = 's'; klucz[ 9] = 'w'; klucz[18] = 'k';
        klucz[ 1] = 'i'; klucz[10] = 'y'; klucz[19] = 'r';
        klucz[ 2] = 'n'; klucz[11] = 'c'; klucz[20] = 'j';
        klucz[ 3] = 'h'; klucz[12] = ' '; klucz[21] = 'u';
        klucz[ 4] = 'm'; klucz[13] = 'b'; klucz[22] = 'd';
        klucz[ 5] = 't'; klucz[14] = 'q'; klucz[23] = 'g';
        klucz[ 6] = 'p'; klucz[15] = 'x'; klucz[24] = 'o';
        klucz[ 7] = 'a'; klucz[16] = 'e'; klucz[25] = 'f';
        klucz[ 8] = 'l'; klucz[17] = 'v'; klucz[26] = 'z';



int currentNumber;
int numbers[1000];

int i = 0;

scanf( "%i" , &currentNumber );

while( currentNumber >= 0 && i < 1000 ) {

numbers[i] = currentNumber;

i++;

scanf( "%i" , &currentNumber );




}

int znakow = i - 1;

i = 0;

printf( "\n");
int indeks = 0;

while( i <= znakow ) {

indeks = numbers[i];

printf( "%c" , klucz[indeks] );

i++;


}

printf("\n");



}
