/* Trójkąt pitagorejski to trójkąt prostokątny, w którym długość każdego boku jest liczbą całkowitą. Napisz program wypisujący wszystkie trójkąty pitagorejskie, których obwód nie przekracza 1000. */
#include <stdio.h>
#include <math.h>

float liczBok(int a, int b);
float liczObw(int a, int b, float c);
void pr(int a, int b, float c, float obw);

int main() {
  int a=0, b=0;
  float c, obw=0;
  while (obw <= 1000) {
    a++;
    while (obw <= 1000) {
      b++;
      c = liczBok(a, b);
      obw = liczObw(a, b, c); //TODO poprawić dublowanie wyników
      pr(a,b,c,obw);
    }
    b=0; c=0; obw = liczObw(a, b, c);
  }
}

void pr(int a, int b, float c, float obw) {
  if (c-trunc(c)==0) {
    printf("a=%i b=%i c=%.3f obw=%.3f\n", a, b, c, obw);
  }
}

float liczObw(int a, int b, float c) {
  float obw = a+b+c;
  //printf("%i+%i+%.3f=%.3f\n", a, b, c, obw);
  return obw;
}

float liczBok(int a, int b) {
  float c;
  c = a*a + b*b;
  return sqrt(c);
}
