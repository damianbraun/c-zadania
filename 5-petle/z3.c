/* Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b. */
#include <stdio.h>
#include <limits.h>

int main () {
  int a, b=INT_MIN;   // INT_MIN po to żeby działał na liczbach ujemnych
  printf("Wpisz liczbę a: ");
  scanf("%i", &a);
  while (b <= a) {
    printf("Wpisz liczbę b (b>a): ");
    scanf("%i", &b);
  }

  printf("a=%i,b=%i\n", a, b);

  for (a = a+1; a < b; a++) {
    printf("%i\n", a);
  }
  return 0;
}
