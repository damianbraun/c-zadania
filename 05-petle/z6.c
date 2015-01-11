/*Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.*/

#include <stdio.h>
#include <ctype.h>

int main() {
  int tablica[6], min, max;
  int i;
  puts("Podaj 6 liczb całkowitych:");
  for (int i = 0; i < 6; i++) {
    scanf("%i", &tablica[i]);
  }
  puts("");

  for (i = 0; i < 6; i++) {
    if (tablica[i] < min) {
      min = tablica[i];
    }
    if (tablica[i] > max) {
      max = tablica[i];
    }
  }

  printf("min:%i max:%i\n", min, max);

  return 0;
}
