/* Napisz program, który prosi o podanie liczby dni, a następnie zamienia je na tygodnie i dni. Dla przykładu, program powinien zamienić 16 dni na:
16 dni to 2 tygodnie i 2 dni.
W programie wykorzystaj pętlę while, aby użytkownik użytkownik mógł wielokrotnie wpisywać liczbę dni. Koniec programu powinien nastąpić po wprowadzeniu liczby 0 lub liczby ujemnej. */
#include <stdio.h>

const int week = 7;

void daysprint(int days) {
  int resw, resd;
  resw = days / week;
  resd = days % week;
  printf("%i dni to %i tygodni i %i dni\n", days, resw, resd);
}

int main() {
  int input = 1;
  printf("Aby wyjść wpisz 0\n");
  while (input > 0) {
    printf("Podaj liczbę dni: ");
    scanf("%i", &input);
    daysprint(input);
  }
}
