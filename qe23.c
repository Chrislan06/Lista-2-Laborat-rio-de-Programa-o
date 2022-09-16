#include <stdio.h>

int main(void) {
  int d, i = 10;
  while (i >= 1) {
    d = i--;
    printf("valor de d de usando pós-incremento: %d\n", d);
  }
  i = 10;
  puts("");
  while (i >= 1) {
    d = --i;
    printf("valor de i de usando pré-incremento: %d\n", d);
  }
  return 0;
}