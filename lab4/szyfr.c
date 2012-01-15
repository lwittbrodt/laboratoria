#include<stdio.h>

main() {
	  char  klucz [27];
	    char z;
	      int n;

	       // Klucz szyfru:
	          klucz['s'] = '0';  klucz['w'] = '9';  klucz['k'] = '18';
	          klucz['i'] = '1';  klucz['y'] = '10';  klucz['r'] = '19';
	          klucz['n'] = '2';  klucz['c'] = '11';  klucz['j'] = '20';
	          klucz['h'] = '3';  klucz[' '] = '12';  klucz['u'] = '21';
	          klucz['m'] = '4';  klucz['b'] = '13';  klucz['d'] = '22';
	          klucz['t'] = '5';  klucz['q'] = '14';  klucz['g'] = '23';
	          klucz['p'] = '6';  klucz['x'] = '15';  klucz['c'] = '24';
	          klucz['a'] = '7';  klucz['e'] = '16';  klucz['f'] = '25';
	          klucz['l'] = '8';  klucz['v'] = '17';  klucz['z'] = '26';
	       
		  z = getchar();
		  while (z != EOF) {
	       
	                                 // znale¼æ tablicy  klucz  wczytany znak  z :
					 n=0;
	                                         while (n<27 && klucz[n] != z)  n=n+1;
	       
	                                            // wydrukowaædpowiadaj±cy mu indeks tablicy:
	                                                if (n<27)  printf("%i ", n);
	       
	                                                   // wczytaæowy znak:
	                                                       z = getchar();
	                                                         }
	                                                         // zakoñæydruk:
	                                                            printf("-1\n");
	                                                            }
