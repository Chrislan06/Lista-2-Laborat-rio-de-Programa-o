#include <stdio.h>

int main() {
  float quadro = 1, total = 1;
  printf("total de grãos(1º): %.0f\n", total);
  for (int i = 1; i < 64; i++) {
    quadro *= 2;
    total += quadro;
    printf("total de grãos(%dº): %.0f\n", i+1,total);
  }
  return 0;
}