#include <stdio.h>

int main(void) {
  int quantidade = 0, n, resto;
  puts("digite um número");
  scanf("%d", &n);
  resto = n;
  if (resto == 7) {
    quantidade++;
  } else {
    while (resto > 10) {
      if (resto % 10 == 7) {
        quantidade++;
      }
      if (resto / 10 == 7) {
        quantidade++;
      }
      resto /= 10;
    }
  }
  printf("Quantidade de algarismo(s) 7: %d", quantidade);
  return 0;