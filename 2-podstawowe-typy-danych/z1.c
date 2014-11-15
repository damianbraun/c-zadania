#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("int min: %d, int max: %d\n", INT_MIN, INT_MAX);
  printf("float min: %f, float max: %f\n", FLT_MIN, FLT_MAX);

  int a = 2147483649;
  float b = 340282346638528859811704183484516925440.123;
  printf("przepelniony int: %d\n", a);
  printf("przepelnoiny float: %f\n", b);
  return 0;
}
