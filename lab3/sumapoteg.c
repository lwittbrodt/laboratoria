#include <stdio.h>

main() {

int liczba,wynik;

wynik=0;

printf( "Podaj liczbe:" );
    scanf("%i",&liczba );

int x,y;
int dodawanaLiczba=1;

for(x=1;x<=liczba;x++) {

        for(y=1;y<=x;y++){

          dodawanaLiczba=dodawanaLiczba*x;

         }

     wynik=wynik+dodawanaLiczba;
     dodawanaLiczba=1;
}

printf( "Suma Poteg tej liczby to : " );
printf( "%i" , wynik );

printf( "\n" );


}


