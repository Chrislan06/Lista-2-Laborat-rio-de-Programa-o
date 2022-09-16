#include <math.h>
#include <stdio.h>
int main(void) {
  unsigned char X, Y;
  int numero, position = -4, escondido;
  puts("digite um valor para X");
  scanf("%hhu", &X);
  puts("digite um valor para Y");
  scanf("%hhu", &Y);
  for (int i = 0; i < 8; i++) {
    if (i == 4) {
      position++;
    }
    if ((X & (int)pow(2, i)) > 0 && (Y + position) % 2 == 0) {
      numero = position + Y + 1;
    } else if ((X & (int)pow(2, i)) == 0 && (Y + position) % 2 != 0) {
      numero = position + Y - 1;
    } else {
      numero = position + Y;
    }
    printf("número com um bit escondido: %d\n", numero);
    position++;
  }
  return 0;
}