/* Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k). */
#include <stdio.h>

int power(int n, int k) {
  if (k>1) {
    return n*power(n, k-1);
  }
}

int main() {
  printf("4**2 %i\n", power(4, 2));
  printf("2**2 %i\n", power(2, 2));
  printf("3**3 %i\n", power(3, 3));
  return 0;
}

