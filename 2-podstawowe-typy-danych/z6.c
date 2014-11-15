/*
 Napisz program wypisujący dziedziny wartości zmiennych typu: char, short, int, long, opatrzonych kwalifikatorami signed oraz unsigned.

Wynik powinien zawierać odpowiednie wartości ze standardowych plików nagłówkowych lub wartości obliczone bezpośrednio przez program.
*/
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char %d to %d\n\n", 0, UCHAR_MAX);

    printf("signed short %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short %d to %d\n\n", 0, USHRT_MAX);

    printf("signed int %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int %d to %u\n\n", 0, UINT_MAX);

    printf("signed long %li to %li\n", LONG_MIN, LONG_MAX);
    printf("unsigned long %d to %lu\n", 0, ULONG_MAX);

    return(0);
}
