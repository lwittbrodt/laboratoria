#include <stdio.h>

long double silnia(int n)
{
  if (n == 0) return 1;
  else return n*silnia(n - 1);
}

int main()
{
  int x;
  long double w;
  printf("Podaj z czego obliczyc silnie\n");
  scanf("%i", &x);
  
  w = silnia(x);
  
  printf("%Lf\n", w);
  
  return 0;
}
