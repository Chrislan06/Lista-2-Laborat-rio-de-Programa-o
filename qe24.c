#include <math.h>
#include <stdio.h>
int primo(int maior, int menor) {
  if (menor > maior) {
    menor ^= maior;
    maior ^= menor;
    menor ^= maior;
  }
  int divisor = menor;
  int dividendo = maior;
  int resto;
  do {
    resto = dividendo % divisor;
    dividendo = divisor;
    divisor = resto;
  } while (resto > 1);
  return resto;
}

int main(void) {
  int c1, c2, aux;
  float h;
  for (c1 = 1; c1 <= 5; c1++) {
    for (c2 = c1; c2 <= 5; c2++) {
      h = sqrt(pow(c1, 2) + pow(c2, 2));
      aux = h;
      if (aux == h && aux <= 5) {
        if (primo(c1,c2) || primo(c1,h) ||primo(c2,h)) {
          printf("(%d , %d ,%d)\n", c1, c2, aux);
        }
      }
    }
  }
  return 0;
}