/* Napisz program, który prosi użytkownika o podanie dwóch liczb całkowitych, a następnie sumuje wszystkie liczby całkowite pomiędzy podanymi liczbami (włącznie) i wypisuje wynik. Dla przykładu po podaniu liczb 2 i 6 program powinien wypisywać:
Suma kolejnych liczb całkowitych od 2 do 6 wynosi 20. */
#include <stdio.h>

int sumbtw(int a, int b) {
  int sum = 0;
  for (a; a <= b; a++) {
    sum = sum + a;
  }
  return sum;
}

int main() {
  int inputA, inputB;
  printf("Podaj dwie liczby calkowite: \n");
  scanf("%i%i", &inputA, &inputB);
  printf("Suma kolejnych liczb calkowitych od %i do %i wynosi %i.\n", inputA, \
    inputB, sumbtw(inputA, inputB));
}
