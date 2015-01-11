#include <stdio.h>
int main() {
  int n, i, jest_pierwsza = 1;
  printf("Podaj liczbe calkowita: ");
  scanf("%i", &n);
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      jest_pierwsza = 0;
    }
  }
  if (n < 2) {
    jest_pierwsza = 0;
  }
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
