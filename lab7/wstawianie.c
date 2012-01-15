#include <stdio.h>
#include <math.h>
main() {

int ILE;
  printf("Ile elementow chcesz podac? \n");
  scanf("%i" , &ILE); 
float tablica[ILE];
int i = 0;
int j = 0; 

printf("Podaj te elementy: \n");
for ( i=0 ; i<ILE ; i++ ){
         scanf("%f", &tablica[i]);
   }
float temp;
// sortowanie przez wstawianie ciezko bylo znalezc algorytm do tego
for(i=1;i<ILE;i++){
	j=i;
	temp = tablica[j];
	while( (j > 0) && (tablica[j-1]>temp)){
		tablica[j] = tablica[j-1];
		j--;
	}
	tablica[j] = temp;
}
// drukowanie wyniku
printf("\nWynik sortowania:\n");

        for (i=0; i<ILE; i++){
        printf(" %4.2f\n", tablica[i]);
        }
printf("\n");

}
