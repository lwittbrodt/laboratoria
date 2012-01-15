#include<stdio.h>
#include<stdlib.h>

#define DUZO 1000

int  k, cz[DUZO];

void  czynn (int n, int dzielnik) {
  if (n % dzielnik == 0) {
    cz[k] = dzielnik;  k = k+1;  czynn(n/dzielnik, dzielnik);
  }
  else
    if (dzielnik < n)  czynn(n, dzielnik+1);
}
void czynni(int n, int dzielnik){
	while(n % dzielnik ==0 || dzielnik < n){
		if(n % dzielnik ==0){
			cz[k] = dzielnik;
			k++;
			n = n/dzielnik;
		}
		else if(dzielnik < n){
			dzielnik++;
		}
	}
}

main () {
  int  n, i;
  printf("Podaj liczbe naturalna wieksza niz 1: "); scanf("%i", &n);
  while (n <= 1) {
    printf("Podaj liczbe naturalna wieksza niz 1: "); scanf("%i", &n);
  }
  k = 0;
  czynn(n, 2);
  printf("\n  Czynniki pierwsze liczby rekurencyjnie %i:\n  ", n);
  for (i=0; i<k; i=i+1)  printf("  %i", cz[i]);
  printf("\n\n");
 
k = 0;
czynni(n, 2);
printf("\n Czynniki pierwsze liczby iteracyjnie %i:\n ", n);
for(i=0; i<k; i++) 
	printf(" %2i", cz[i]);
printf("\n\n");

}
