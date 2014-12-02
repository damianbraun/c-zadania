/* Liczba doskonała to liczba, która jest sumą podzielników od niej mniejszych. Na przykład 6 jest liczbą doskonałą ponieważ:
1 + 2 + 3 = 6
Napisz funkcję, która sprawdza czy podana liczba jest doskonała. Użyj tej funkcji do wypisania wszystkich liczb doskonałych mniejszych od 10 000.*/
#include <stdio.h>

int isPerfectNumber(int number) {
  int wynik = 0;
  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      wynik = wynik + i;
    }
  }
  if (wynik == number) {
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  for (int i = 1; i < 10000; i++) {
    if (isPerfectNumber(i) == 1) {
      printf("%i\tjest doskonala\n", i);
    }
  }
}
