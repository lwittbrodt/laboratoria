#include<stdio.h>
#include<stdlib.h>

// Oblicza najwiekszy wspolny dzielnik przy zalozeniu, ze
//   n >= 0  i  k >= 0  oraz
//   n+k > 0  czyli argumenty nie sa jednoczesnie rowne zeru

int  nwd (int n, int k) {
  if (n<0  ||  k<0  ||  n+k == 0) {
    printf ("\n  Argumenty maja byc nieujemne");
    printf ("\n  i nie jednoczesnie zerowe\n\n");
    exit(1);
  }
  else
    if (n<k)  return nwd(k,n);
    else
      if (k==0)  return n;
      else  return nwd(k, n%k);
}
//--------------- moja funkcja iteracyjnie -----------
int nwdi(int m, int l){
  if(m<0 || l<0 || m+l==0){
  	printf("\nArgumenty musza byc dodatnie i niie moga byc jednoczesnie zerowe");
	exit(1);
  } 
 if(m==0 || l==0) return m+l;
 else{
	int temp;
	while(l != 0){
		temp = m % l;
		m = l;
		l = temp;
	}
 
 return m;
 }
	
}
// ---------------- koniec funkcji -------------------------//
main () {
  int a, b;
  printf("Podaj dwie liczby naturalne: ");
  scanf("%i", &a); scanf("%i", &b);
  printf("\n  nwd(%i, %i) == %i\n\n", a, b, nwd(a,b));
 
// -------------- wywolanie mojej funkcji iteracyjnej -------  
  printf("\n\n  nwdi(%i, %i) == %i\n\n",a, b,  nwdi(a,b));

}

