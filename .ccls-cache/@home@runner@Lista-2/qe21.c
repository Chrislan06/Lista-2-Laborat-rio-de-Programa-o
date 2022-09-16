#include <stdio.h>

int main(void){
int numero;
puts("digite um número de 5 digitos");
  scanf("%d",&numero);
  if(numero/10000 == numero % 10 && (numero/1000)%10 == (numero%100)/10 ){
    printf("o número é um palíndromo! ");
  }
  
  return 0;
  }