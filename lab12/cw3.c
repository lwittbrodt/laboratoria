#include <stdio.h>

int bit_liczby(int bit, int liczba){
        return((liczba>>bit) & 1);
}

main(){
        int l, i;
        printf("Podaj dowolna liczbe: \n");
        scanf("%i",&l);
		if(l>=0){
		  for(i=31; i>=0; i--){
        		printf("%i",bit_liczby(i,l));
		  }
		}
              else{
		l=l+1;
		for(i=31; i>=0; i--){
        	  if(bit_liczby(i,-l)==1){
		   printf("0");
		  }
			else{
			 printf("1");
			}
		}

}
return 0;
printf("\n");
}

