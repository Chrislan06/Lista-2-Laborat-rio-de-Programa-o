#include <stdio.h>

int main() {
  int n, maior, menor, mult;
  puts("digite um número(negativo e par se quiser parar)");
  scanf("%d", &n);
  maior = n;
  menor = n;
  if (n < 0 && n % 2 == 0) {
    puts("Obrigado por usar nosso programa :)");
  } else {
    while (!(n < 0 && n % 2 == 0)) {
      if (n > maior) {
        maior = n;
      } else if (n < menor) {
        menor = n;
      }
      puts("digite um número(negativo e par se quiser parar)");
      scanf("%d", &n);
    }
    mult = maior * menor;
    printf("Produto do Maior(%d) pelo Menor(%d) é: %d", maior, menor, mult);
  }
  return 0;
}