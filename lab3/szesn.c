#include<stdio.h>
main()
  {
 int n;
 int w;
printf("\n Podaj liczbe ktora ma zostac zapisana w systemie szesnastkowym: ");
  scanf("%i", &n);
while(n>0) {     w = n%16;
	 
         if( w < 10 ) { printf("%i", w); }
         if (w == 10){ printf("A"); }
	 if (w == 11){ printf("B"); }
         if (w == 12){ printf("C"); }
         if (w == 13){ printf("D"); }
         if (w == 14){ printf("E"); }
         if (w == 15){ printf("F"); }

	 n = n/16;
 }	
printf("\n\n");
  }	 
        
