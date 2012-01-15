#include <stdio.h>

main() {

int x,y,t,w,k,l;

   for(t=1;t<55;t++)
   {
    printf("=");

  }
printf("\n");
            
             
                  for(w=0;w<=9;w++){
			  l=0;
			   for(k=0;k<=9;k++){
				   printf("%4i |", l);
				   l=l+w;
			   }
		  

 


    for( y = 0 ; y< 10 ; y++ ){
        if( y >= 0 ){ printf( "+====" ); }
     else { printf( "====" ); }

              } 
printf("\n");		  
		  }
}




