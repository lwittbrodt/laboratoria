#include <stdio.h>
main() {
    int ileLiczb;
    int ileTablic;
printf( "Najpierw musisz podac ile tablic bedziemy sprawdzac : " );
scanf( "%i" , &ileTablic );
        printf( "Teraz podaj jak dluga bedzie kazda z tych tablic : " );
        scanf( "%i" , &ileLiczb );
  float najwiekszaTablica[ileLiczb];
  float nowaTablica[ileLiczb];
  int indeksNajwiekszej = 1;
  int i = 0;
printf( "Wypelniamy tablice nr. 1\n" );
         for( i = 0 ; i < ileLiczb ; i++ ){
		printf( "Podaj zmienna nr. %i : " , i+1 );
		scanf( "%f" , &najwiekszaTablica[i] );	}
int y = 0;
int z = 0;
int zamienic = 0;

	for( i = 1 ; i < ileTablic ; i++ ){
                zamienic = 0;
       		printf( "Wypelniamy tablice nr. %i\n" , i+1 );

		for( y = 0 ; y < ileLiczb ; y++ ){
                      printf( "Podaj liczbe nr. %i : " , y+1 );
		      scanf( "%f" , &nowaTablica[y] );
		}
		for( z = 0 ; z < ileLiczb ; z++ ){
			if( nowaTablica[z] > najwiekszaTablica[z] ) { zamienic = 1; }
		}

		if( zamienic == 1 ){
			indeksNajwiekszej = i+1;
			for( z = 0 ; z < ileLiczb ; z++ ){
				najwiekszaTablica[z] = nowaTablica[z];
			}
		}
	}
printf("\n");
printf( "Najwieksza byla tablica nr. %i , ktorej wartosci byly rowne: \n" , indeksNajwiekszej );
    for( z = 0 ; z < ileLiczb ; z++ ){
        printf( "%.2f , " , najwiekszaTablica[z] );
    }
printf("\n");
}
