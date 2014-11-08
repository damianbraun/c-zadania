#include <stdio.h>

int main() {
  int wiek, rok, i, leap;
  int dni = 0;
  printf("Podaj wiek: ");
  scanf("%d", &wiek);
  printf("Podaj aktualny rok: ");
  scanf("%d", &rok);
  printf("Masz %i lat, jest rok %i\n", wiek, rok);

  i = rok - wiek;
  while (i < rok) {
    i++;
    if (i%4==0 && (i%100!=0 || i%400==0)) {
      leap = 1;
    }
    else {
      leap = 0;
    }

    if (leap == 1) {
      dni = dni + 366;
    }
    else {
      dni = dni + 365;
    }

    printf("%i, leap:%i, dni:%i\n", i, leap, dni);
  }

  int mnoznik = 24 * 60 * 60; // 24h * 60m * 60s
  int wynik = dni * mnoznik;
  printf("Ostateczny wynik to: %i sekund\n", wynik);

  //int leap;
  //leap = year%4==0 && year%100!=0 || year%400 == 0
}
