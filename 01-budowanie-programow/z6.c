#include <stdio.h>
#include <math.h>

int main() {
  double liczba, pierwiastek;
  printf("Wpisz liczbe: ");
  scanf("%lf", &liczba);
  if (liczba>=0) {
    pierwiastek = sqrt(liczba);
    printf("pierwiastkiem kw. liczby %f jest %f\n", liczba, pierwiastek);
    return 0;
  }
  else {
    puts("Podales liczbe ujemna");
    return 1;
  }
}
