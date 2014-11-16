#include <stdio.h>

unsigned long silnia(int n) {
  if (n<2) {
    return 1;
  }
  else {
    return n*silnia(n-1);
  }
}

int main ()
{
  int n;
  printf("Podaj n: ");
  scanf("%i", &n);
  printf("%d! = %lu\n", n, silnia(n));
  return 0;
}
