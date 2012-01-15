#include<stdio.h>
main(){

  int n,i=1,j;
  int tab[100];
  printf("Podaj liczbe w systemie dziesietnym: \n");
  scanf("%i", &n);

     if(n<8) { 
	    printf("%i",n);
     }
     while(n>0) { 
	     tab[i]=n%8;
	     n=n/8;
	     i++;

     }		

  for(j=i-1;j>0;j--){
 	  printf("%i", tab[j]);
  }

}
