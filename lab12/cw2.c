#include <stdio.h>

int bit_liczby(int bit, int liczba){
        return((liczba>>bit) & 1);
}

main(){
        int a, b;
        printf("Podaj swoja liczbe: \n");
          scanf("%i",&a);
        printf("Jaki bit wydrukowac?: \n");
          scanf("%i",&b);
        printf("%i\n",bit_liczby(b,a));
}

