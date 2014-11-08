#include <stdio.h>
#include <string.h>

float cmtoin(float x) {
  return x/2.54;
}

float intocm(float x) {
  return x*2.54;
}

int ask()
{
  float wzrost, wynik;
  char jednostka[2];
  printf("Podaj wzrost: ");
  scanf("%f %s", &wzrost, jednostka);

  if (strcmp(jednostka, "in") == 0) {
    wynik = intocm(wzrost);
    printf("%.1f cm\n", wynik);
  }
  else if (strcmp(jednostka, "cm") == 0) {
    wynik = cmtoin(wzrost);
    printf("%.1f in\n", wynik);
  }
  else {
    printf("Nieprawidłowa jednostka: cm lub in\n");
  }

  //printf("Wzrost:%f Jednostka:%s\n", wzrost, jednostka);
  return 0;
}

int main ()
{
  while (1) {
    ask();
  }
}
