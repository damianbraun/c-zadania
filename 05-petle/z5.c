/*Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.*/

#include <stdio.h>
#include <ctype.h>

int main() {
  int tablica[6], rev[6];
  int i;
  puts("Podaj 6 liczb całkowitych:");
  for (int i = 0; i < 6; i++) {
    scanf("%i", &tablica[i]);
  }
  puts("");

  for (i = 0; i < 6; i++) {
    printf("%i\n", tablica[i]);
    rev[5-i] = tablica[i];
  }
  for (i = 0; i < 6; i++) {
    printf("%i\n", rev[i]);
  }

  return 0;
}
