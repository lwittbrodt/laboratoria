#include<stdio.h>
main(){
 
 int a=0;
 int tablica[1000];
 int i=1, j, n;

 while(n != -1){
    printf("Podaj liczbe: \n");
    scanf("%i", &n);
    tablica[i]=n;
    i++;
    a=a+1;
    }
printf("Wypisuje liczby w odwrotnej kolejnosci: \n");
	
  for( j=a-1;j>0;j--){

 printf("%i, ", tablica[j]);
}
printf("\n\n");





}
