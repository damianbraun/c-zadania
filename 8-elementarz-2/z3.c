/* Oblicz wartość π (pi) z nieskończonej sumy
π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Wypisz w postaci tabelki przybliżoną wartość π przez sumę 10, 100, 1000 i 1_000_000 wyrazów tego szeregu.
Ile wyrazów musisz wysumować, zanim po raz pierwszy otrzymasz kolejne przybliżenia π: 3.14, 3.141, 3.1415 ? Wyniki wypisz w postaci tabelki. */
#include <stdio.h>

float pi(int n) {
  float pi = 0.0;
  for (int i = 1; i < n*2; i=i+2) {
    if (i % 4 == 1) {
      pi = pi + (4 / (float) i);
    }
    else if (i % 4 == 3) {
      pi = pi - (4 / (float) i);
    }
  }
  return pi;
}

int main()
{
  printf("pi(10)\t\t%f\n", pi(10));
  printf("pi(100)\t\t%f\n", pi(100));
  printf("pi(1000)\t%f\n", pi(1000));
  printf("pi(1000000)\t%f\n", pi(1000000));
}
