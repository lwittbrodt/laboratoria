#include<stdio.h>
#include<stdlib.h>

#define DL_ALFABETU 26

void  blad (char komunikat[]) {
  printf("\n!!! BLAD -- %s!!!\n\n", komunikat);
  exit(1);
}

int  numer_litery (char litera) {
    // duze litery sa sklejane z malymi; nielitery uzyskuja numer -1
  if ('a'<=litera && litera<='z')  return (int)litera - (int)'a';
  else
    if ('A'<=litera && litera<='Z')  return (int)litera - (int)'A';
    else  return -1;
}

char  litera_o_numerze (int n) {
    // jesli n<0 lub n>=DL_ALFABETU -- sygnal bledu
  if (0<=n && n<DL_ALFABETU)  return (char)((int)'a'+n);
  else  blad("zly numer litery");
}

main () {
  char znak;
  int liczniki[DL_ALFABETU], i;
  int ind[DL_ALFABETU];

  
    // inicjalizacja licznikow:
  for (i=0; i<DL_ALFABETU; i++){
	  liczniki[i] = 0;
          ind[i] = i;
  }
    // wczytywanie tekstu i zliczanie liter:
  znak = getchar();
  while (znak != EOF) {
    i = numer_litery(znak);
		
    if (i>=0) { liczniki[i] = liczniki[i]+1;
                
    }
    znak = getchar();
  }
//moje sortowanie ************************************
  int n, x, x1, k, m;					
  n = DL_ALFABETU;
while(n>1){
	m=1;
	for(k=1; k<n;k++)
		if(liczniki[k-1] > liczniki[k]){
			
			x = liczniki[k-1];
			x1 = ind[k-1];
			ind[k-1] = ind[k];
			liczniki[k-1] = liczniki[k];
			ind[k] = x1;
			liczniki[k] = x;
			m = k;
		}
	n = m;
}


/***************************************************/

    // drukowanie statystyki:
  printf("\nSTATYSTYKA:\n");
  for (i=0; i<DL_ALFABETU; i++)
    printf("  %c: %4i\n", litera_o_numerze(ind[i]), liczniki[i]);
  printf("\n");

// moje drukowanie ****************************** \/  
 i=DL_ALFABETU-1;
 for(i;i>=0;i--)
	printf("%c %i \n",litera_o_numerze(i),  ind[i]);
	printf("\n");
		      	

}

