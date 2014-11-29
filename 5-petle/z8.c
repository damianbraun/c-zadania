/* Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim. Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie). Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

*       ****    ****       *
**      ***      ***      **
***     **        **     ***
****    *          *    ****
*/
#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 4; i++) {

        j = 0;
        while (j < i) {
            j++;
            putchar('*');
        }
        while (j < 8) {
            j++;
            putchar(' ');
        }

        j = 0;
        k = 5-i;
        while (j < k) {
            j++;
            putchar('*');
        }
        while (j < 8) {
            j++;
            putchar(' ');
        }

        j = 0;
        while (j < i-1) {
            j++;
            putchar(' ');
        }
        while (j < 4) {
            j++;
            putchar('*');
        }

        j = 0;
        while (j < k + 3) {
            j++;
            putchar(' ');
        }
        j = 0;
        while (j < i) {
            j++;
            putchar('*');
        }

        // koniec
        putchar('\n');
    }
}
