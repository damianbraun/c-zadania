/*Zdefiniuj funkcję przeciwprostokatna obliczającą długość przeciwprostokątnej trójkąta prostokątnego z podanych długości przyprostokątnych. Wykorzystaj tę funkcję w programie do określania długości przeciwprostokątnej każdego z następujących trójkątów:

trójkąt  bok 1  bok2
--------------------
 1        3.0    4.0
 2        5.0    5.0
 3        1.0    6.0

Funkcja powinna pobierać dwa argumenty typu double i zwracać długość przeciwprostokątnej też jako double.*/
#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b) {
  double wynik = pow(a, 2) + pow(b, 2);
  wynik = sqrt(wynik);
  return wynik;
}

void wypisz(int licznik, double a, double b) {
  printf("%i\t%.1f\t%.1f\t%.1f\n", licznik, a, b, przeciwprostokatna(a, b));
}

int main() {
  double dane[3][2] = {{3.0, 4.0}, {5.0, 5.0}, {1.0, 6.0}};
  int i;
  printf("%s\n", "trójkąt\tbok1\tbok2\tbok3");
  printf("%s\n", "----------------------------");

  for (i = 0; i < 3; i++) {
    wypisz(1, dane[i][0], dane[i][1]);
  }
}
