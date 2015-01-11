/* Zmodyfikuj program z3.c tak, aby obliczał sumę kwadratów liczb całkowitych z podanego zakresu. */
#include <stdio.h>

int sumbtw(int a, int b) {
  int sum = 0;
  for (a; a <= b; a++) {
    sum = sum + a * a;
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
