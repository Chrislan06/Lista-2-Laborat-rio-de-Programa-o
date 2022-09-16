#include <stdio.h>

int main(void) {
  int num;
  int vet_bin[9];
  int k;
  for (int i = 1; i <= 256; i++) {
    num = i;
    k = 0;
    while (num > 0) {
      vet_bin[k] = num % 2;
      k++;
      num = num / 2;
    }

    printf("%d em binario: ", i);

    for (int j = k - 1; j >= 0; j--) {
      printf("%d", vet_bin[j]);
    }
    printf("\n");
    printf("%d em octal: %o\n", i, i);
    printf("%d em octal: %X\n", i, i);
  }
  return 0;
}