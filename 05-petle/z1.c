/* Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010. */
#include <stdio.h>
#include <math.h>

int main()
{
  int x, i=0;
  for (x=1; x < 2010; x = pow(2, i)) {
    printf("2^%d = %d\n", i, x);
    ++i;
  }
  return 0;
}
