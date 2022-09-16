#include <stdio.h>

int main(void) {
  int n1, n2;
  puts("Faça a divisão do primeiro número pelo segundo");
  do {
    puts("Digite o primeiro número");
    scanf("%d", &n1);
    puts("Digite o segundo número");
    scanf("%d",&n2);
    if(n2==0) puts("\nNão é possivel dividir por 0\ndigite novamente\n");
  } while (!n2);
  printf("\nDivisão de ambos %.2f",(float)n1/n2);
  return 0;
}