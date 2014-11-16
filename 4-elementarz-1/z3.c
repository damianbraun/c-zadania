/*  Program ten wypisuje liczby z tablicy tabela[]
    w odwrotnej kolejności: 12, 6, 4, 2, 1 
    Wersja z do while */

#include <stdio.h>

int main()
{
    int tabela[] = {1, 2, 4, 6, 12};
    int i = sizeof(tabela) / sizeof(tabela[0]) - 1;

    do {
        i--;
        printf("i: %d\n", tabela[i]);
    } while (i > 0);
    return 0;
}
