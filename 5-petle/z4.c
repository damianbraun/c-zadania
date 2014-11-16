/* Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.*/

#include <stdio.h>

int sumarek(int n) {
    int suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    while (n<1) {
        printf("podaj n (n>0): \n");
        scanf("%i", &n);
    }
    printf("suma = %i\n", sumarek(n));
}
