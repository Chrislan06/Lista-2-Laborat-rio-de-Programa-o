#include <stdio.h>

int main() {
  float valor, entrada;
  int prestacoes;
  puts("digite o valor da Mercadoria");
  scanf("%f",&valor);
  prestacoes= valor/3;
  entrada=valor-prestacoes*2;
  printf("Valor da entrada: %.2f\nValor das pretacoes: %.2d",entrada,prestacoes);
  return 0;
}