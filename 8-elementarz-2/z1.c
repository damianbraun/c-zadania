#include <stdio.h>
int main() {
  int M, i, suma, n;
  suma = 0;
  i = 1;
  printf("Podaj liczbe M: ");
  scanf("%i", &M);
  while (suma < M) {
    suma=suma+i;
    i=i+1;
  }
  n=i-1;
  printf("Szukane n to: %i\n", n);
  return 0;
}
