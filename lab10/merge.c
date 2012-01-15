#include<stdio.h>

main() {
  int  n1, n2, n, i1, i2, i;
  printf("\nDlugosc pierwszego ciagu niemalejacego: "); scanf("%i", 
&n1);
  float  ciag1[n1];
  printf("wyrazy pierwszego ciagu:\n  "); 
  for (i1=0; i1<n1; i1=i1+1)  scanf("%f", &ciag1[i1]);
  printf("\nDlugosc drugiego ciagu niemalejacego: "); scanf("%i", &n2);
  float  ciag2[n2];
  printf("wyrazy drugiego ciagu:\n  "); 
  for (i2=0; i2<n2; i2=i2+1)  scanf("%f", &ciag2[i2]);

  n = n1+n2;  i1=0; i2=0; i=0;
  float  ciag[n];
  while (i1<n1 && i2<n2) {
    if (ciag1[i1] < ciag2[i2]) {
      ciag[i] = ciag1[i1]; i1=i1+1;
    }
    else {
      ciag[i] = ciag2[i2]; i2=i2+1;
    }
    i=i+1;
  }
  while (i1<n1)  { ciag[i] = ciag1[i1]; i1=i1+1; i=i+1; }
  while (i2<n2)  { ciag[i] = ciag2[i2]; i2=i2+1; i=i+1; }

  printf("\nCiag scalony:\n");
  for (i=0; i<n; i=i+1)  printf("  %f", ciag[i]);
  printf("\n\n");
}
