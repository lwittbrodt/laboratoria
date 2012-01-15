#include <stdio.h>

main() {
  int n;
  printf( "Ile liczb w tablicy? " );
  scanf( "%i" , &n );
   float tab1[n];
   float tab2[n];
printf( "\n" );
   int i;
       printf( "Liczby do pierwszej tablicy \n" );
          for( i = 0 ; i < n ; i++ ){
               printf( "Podaj %i liczbe : " , i+1 );
	       scanf( "%f" , &tab1[i] );
          }
       printf( "\nDruga tablica  \n" );
          for( i = 0 ; i < n ; i++ ){
               printf( "Podaj %i liczbe : " , i+1 );
               scanf( "%f" , &tab2[i] );
	  }
printf( "\n" );
int w = 0;
i = 0;
    while( w == 0 && i < n ){
         if( tab1[i] == tab2[i] ) { }
         else if( tab1[i] < tab2[i] ) { w = 1; }
	 else if( tab1[i] > tab2[i] ) { w = -1; }
         i++;
    }

   if( w == 0 ) { printf("Tablice sa sobie rowne" ); }
   else if( w == -1 ) { printf("tab1 jest wieksza leksykograficznie" ); }
   else if( w == 1 ) { printf("tab2 b jest wieksza leksykograficznie" ); }
printf("\n");
}


