#include <stdio.h>
int main() {
  int c;
  while ((c=getchar())!=EOF) {
    if (c=='\t')
      printf("\t\t");
    else if (c=='\\')
      printf("\\\\");
    else
      putchar(c);
  }
  return 0;
}
