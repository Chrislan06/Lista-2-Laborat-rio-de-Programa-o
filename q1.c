#include <stdio.h>

int main(void) {
int dia;
char teste=1;
 while(teste){
  printf("\ndigite (1-7) para o dia da semana e 0 para      parar");
  printf("\nDigite aqui seu lindo: ");
  scanf("%d",&dia);
    switch(dia){
      case 1:
      printf("Domingo");
      break;
      case 2:
      printf("Segunda-feira");
      break;
      case 3:
      printf("Terça-feira");
      break;
      case 4:
      printf("Quarta-feira");
      break;
      case 5:
      printf("Quinta-feira");
      break;
      case 6:
      printf("Sexta-feira");
      break;
      case 7:
      printf("Sábado");
      break;
      case 0:
      teste=0;
      break;
      default:
      printf("Número do dia inválido :(");
    }
  }
  printf("\n\nobrigado pelo seu tempo :)");
  return 0;
}