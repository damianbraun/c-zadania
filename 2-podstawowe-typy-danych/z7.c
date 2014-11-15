/*
Poniższa funkcja, K&R, ilustruje operacje bitowe:

unsigned getbits(unsigned x, int n, int p) {
  // wycina n bitow z „x” od pozycji p w prawo
  // zerowa pozycja to skrajnie prawa pozycja
  return ((x>>(p-n+1)) & ~(~0<< n));
}

(a) Zrozumieć i przetestować działanie tej funkcji.

Do testowania, należy napisać i wykorzystać dwie funkcje:

unsigned czytajBity()

czytającej z wejścia ciąg zer i jedynek będący zapisem liczby binarnej i zwracającej wartość tej liczby oraz

void drukujBity(unsigned x)

wypisującej wszystkie bity liczby x.

Wskazówki:

unsigned czytajBity() {
  unsigned w=0;
  int c;
  while ((c=getchar())!=EOF && c!='\n'){
    // przesun w o 1 w lewo
    switch (c){
    case '0': // nic nie trzeba robic
    case '1': // wstawic 1 jako skrajny prawy bit
    default : // kazdy inny znak jest bledem - przerwac
    }
  }
  return w;
}

Przy pisaniu funkcji drukujBity można wykorzystać poniższe informacje i drukować w pętli kolejne bity liczby używając putchar('0') lub putchar('1')

Liczba bitów w liczbie typu unsigned:

8*sizeof(unsigned)

j-ty bit licząc od prawej, tj. bit najmniej znaczący ma numer 0:

(x>>j)&01)

(b) Napisać i przetestować funkcję:

unsigned setbit(unsigned x, int p, char b)

która zwraca wartość taką jak x, ale zastępuje p-ty bit bitem 0 jeżeli b jest równe 0 lub bitem 1 jeżeli b jest różne od 0.
*/
#include <stdio.h>

unsigned getbits(unsigned x, int n, int p) {
  // wycina n bitow z „x” od pozycji p w prawo
  // zerowa pozycja to skrajnie prawa pozycja
  return ((x>>(p-n+1)) & ~(~0<< n));
}

unsigned czytajBity() {
  unsigned w=0;
  int c;
  while ((c=getchar())!=EOF && c!='\n'){
    w = w << 1;// przesun w o 1 w lewo
    switch (c){
    case '0': // nic nie trzeba robic
    case '1': {
      w = w | 1;
    }// wstawic 1 jako skrajny prawy bit
    default : {
      exit(1);
    }// kazdy inny znak jest bledem - przerwac
    }
  }
  return w;
}


int main ()
{
  unsigned w;
  w = czytajBity();

  printf("%u\n", w);
  return 0;
}
