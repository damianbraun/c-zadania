/*Napisz funkcję, która oblicza wartość silni z liczby naturalnej. Wykorzystaj ją w programie wypisującym na wyjście silnię 10 pierwszych liczb naturalnych.*/
#include <stdio.h>

int silnia(int n) {
  int wynik = 1;
  for (int i = 1; i <= n; i++) {
    wynik = wynik * i;
  }
  return wynik;
}

int main() {
  for (int i = 1; i <= 10; i++) {
    printf("%i! = %i\n", i, silnia(i));
  }
}
