/* zlicz znaki odstępu, tabulacji
 * {
 * }
 * #include &lt;stdio.h>
 * i nowego wiersza
else if (c == '\t')
int main ()
    int c;
    nt = 0;
    nl = 0;
    while ((c=getchar()) != EOF)
    ++nl;
    if (c == ' ')
    ++nb;
    nb = 0;
    return 0;
    ++nt;
    int nb, nt, nl;
    printf("%d %d %d\n", nb, nt, nl);
    else if (c == '\n') */

#include <stdio.h>

int main()
{
    int c;
    int nb = 0, nt = 0, nl = 0;

    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        }
        else if (c == '\n') {
            ++nl;
        }
        else if (c == '\t') {
            ++nt;
        }
    }
    printf("\nnb=%d nt=%d nl=%d\n", nb, nt, nl);
    return 0;
}
