#include<stdio.h>
main (){
int i, n, x, y;
 printf("Podaj ilosc cyfr dluzszej liczby\n");
   scanf("%i", &n);
 printf("Podaj ilosc cyfr krotszej  liczyy\n");
   scanf("%i", &x);
if(n>=x) 
  { 
	  printf("Podales prawidlowe dlugosci, jedziemy dalej\n");
	  if(x>n){
		y=x;
	  }	
	   else{
	       y=n;
           }
  int tab1[n];
  int tab2[x];
  int tab3[n];
for(i=0; i<n; i++){  // zerowanie
	tab1[i]=0;
}
for(i=n; i>=0; i--){  // zerowanie
	tab3[i]=0;
}  
for(i=n; i>=0; i--){   // zerowanie
	tab2[i]=0;
}
printf("Podaj dluzsza liczbe \n");
for(i=n-1; i>=0; i--){
	scanf("%i", &tab1[i]);
}
printf("Podaj krotsza liczbe \n");
for(i=x-1; i>=0; i--){
        scanf("%i", &tab2[i]);
}
int r; // odejmujemy odpowiednio 
for(i=0; i<n; i++){
	tab3[i]=tab1[i]-tab2[i];
	if(tab3[i]<0){           // jesli mniejsze to zapozyczamy z i+1
		tab1[i]=tab1[i]+10;
		tab1[i+1]=tab1[i+1]-1;
		tab3[i]=tab1[i]-tab2[i];
	}
}
printf("\n"); // wypisujemy wynik
printf("Wynikiem odejmowania jest: \n");
if(tab3[n]==0){      //  jesli ostatnia cyfra wyniku to 0 wypisujemy bez 0
	for(i=n-1; i>=0; i--){
		printf("%i", tab3[i]);
	}
}
else{
	for(i=n; i>=0; i--){
                printf("%i", tab3[i]);
        }
}
printf("\n");
}
else {
	printf("Podales zle dlugosci liczb\n");
}
}
