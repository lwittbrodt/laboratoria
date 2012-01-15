#include<stdio.h>  
#include<stdlib.h>    
#define DL_ALFABETU 26    
void  blad (char komunikat[]) {    
	printf("\n!!! BLAD -- %s!!!\n\n", komunikat);   
       	exit(1); 
}   
int  numer_litery (char litera) {     
       	// duze litery sa sklejane z malymi; nielitery uzyskuja numer -1   
if ('a'<=litera && litera<='z') 
       	return (int)litera - (int)'a';   
else if ('A'<=litera && litera<='Z') 
       	return (int)litera - (int)'A';      
else  return -1; 
}    
char  litera_o_numerze (int n) {     
       	// jesli n<0 lub n>=DL_ALFABETU -- sygnal bledu   
 if (0<=n && n<DL_ALFABETU)  
	 return (char)((int)'a'+n);   
 else  blad("zly numer litery"); 
}   
main () {    
char znak, zold, zolder;   
int liczniki_p[DL_ALFABETU], 
liczniki_k[DL_ALFABETU], i;        // inicjalizacja licznikow:    
for (i=0; i<DL_ALFABETU; i++){        
	liczniki_p[i] = 0;      
	liczniki_k[i] = 0;   
}      
// wczytywanie tekstu i zliczanie liter:   
printf("Podaj tekst\n");
zolder = '\n';    
zold = '\n';    
znak = getchar();    
while (znak != EOF) {      
	i = numer_litery(znak);      
	if (i>=0 && (zold == ' ' || zold == '\n')){     
		liczniki_p[i] = liczniki_p[i]+1;        
		i = numer_litery(zolder);    
		if(i>=0)      
			liczniki_k[i]+=1;      
	}      
	i=numer_litery(zold);      
	if(i>=0)  //W razie kropki na koncu zdania itp       
	       	zolder=zold;      
	zold=znak;      
	znak = getchar();   
}        // drukowanie statystyki:    

printf("\nSTATYSTYKA LITER NA POCZATKU SLOW:\n");    
for (i=0; i<DL_ALFABETU; i++)      
	printf("  %c: %4i\n", litera_o_numerze(i), liczniki_p[i]);    
	printf("\n");        
	printf("\nSTATYSTYKA LITER NA KONCU SLOW:\n");    
	for (i=0; i<DL_ALFABETU; i++)      
	printf("  %c: %4i\n", litera_o_numerze(i), liczniki_k[i]);    
	printf("\n"); 
       	}
