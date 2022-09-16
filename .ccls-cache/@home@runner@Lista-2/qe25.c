#include <stdio.h>

int main(void) {
  int n;
  float pi = 0;
  int consta = 1;
  puts("Digite até que termo deverá ser calculado pi");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      pi -= (float)4 / consta;
      consta += 2;
    } else {
      pi += (float)4 / consta;
      consta += 2;
    }
    printf("%d° termo: %.2f\n", i, pi);
  }
  return 0;
}