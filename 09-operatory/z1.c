/* Użyj pętli while do przeliczania czasu w minutach na godziny i minuty. Utwórz stałą symboliczną dla liczby 60 przy pomocy #define lub const. */
#include <stdio.h>

const int hour = 60;

void hmprint(int minutes) {
  int resh, resm;
  resh = minutes / hour;
  resm = minutes % hour;
  printf("%i minutes %i hours\n", resm, resh);
}

int main() {
  hmprint(10);
  hmprint(75);
  hmprint(12113);
}
