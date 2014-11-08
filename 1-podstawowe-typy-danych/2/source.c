#include <stdio.h>

void ask() {
  int code = 0;
  printf("Wpisz kod ASCII:\n");
  scanf("%i", &code);
  //printf("%i\n", code);
  char d = (char) code;
  printf("%c\n", d);
}

int main() {
  while(1) {
    ask();
  }
}
