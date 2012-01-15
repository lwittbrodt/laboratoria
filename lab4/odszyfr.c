#include<stdio.h>

main() {
 char  klucz [27];
 int n;
 // Klucz szyfru:
 klucz[ 0] = 'a';  klucz[ 9] = 'j';  klucz[18] = 's';
 klucz[ 1] = 'b';  klucz[10] = 'k';  klucz[19] = 't';
 klucz[ 2] = 'c';  klucz[11] = 'l';  klucz[20] = 'u';
 klucz[ 3] = 'd';  klucz[12] = 'm';  klucz[21] = 'w';
 klucz[ 4] = 'e';  klucz[13] = 'n';  klucz[22] = 'x';
 klucz[ 5] = 'f';  klucz[14] = 'o';  klucz[23] = 'y';
 klucz[ 6] = 'g';  klucz[15] = 'p';  klucz[24] = 'z';
 klucz[ 7] = 'h';  klucz[16] = 'q';  klucz[25] = 'v';
 klucz[ 8] = 'i';  klucz[17] = 'r';  klucz[26] = ' ';

for(n=0; n<=27; n++){
       scanf("%i", &n);
       printf("%c ", klucz[n]);
       if(n>27){
               EOF;
       }
}
//n=27;
// while(n != EOF){
//   scanf("%i", &n);
//   printf("%c ", klucz[n]);
//   n--;   
//}

printf("\n");
}
