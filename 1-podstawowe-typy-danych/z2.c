#include <stdio.h>
#include <ctype.h>

int ask() {
  int code;
  printf("Wpisz kod ASCII: ");
  scanf("%i", &code);
  return code;
}

void answer(int code) {
  if (isprint(code)){
    printf("%c\n", code);
  }
  else {
    puts("znak niedrukowalny");
  }
}

int main() {
  while(1) {
    int code;
    code = ask();
    answer(code);
  }
}
