/* Napisz program, wypisujący w postaci tabelki pierwiastki z pierwszych 20 liczb naturalnych. */

#include <stdio.h>
#include <math.h>

int main() {
  int i;
  printf("lp.\tpierwiastek\n");
  for (i = 1; i <= 20; i++) {
    printf("%i\t%.3f\n", i, sqrt(i));
  }
}
