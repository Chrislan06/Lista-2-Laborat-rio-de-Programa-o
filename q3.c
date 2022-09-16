#include <stdio.h>

int main(void){
char guardar;
unsigned int fatorial;
unsigned int F;
  
puts("Esse programa irá calcular o fatorial de um número\nNúmero: ");
scanf("%d",&F);
guardar=F;
  
for(fatorial = 1; F>1; F--){
  fatorial *= F;
  }
  printf("Fatorial do número(%d): %d ",guardar,fatorial);
  
  return 0;
}