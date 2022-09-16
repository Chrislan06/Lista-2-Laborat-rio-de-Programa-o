#include <stdio.h>

int main(void){
unsigned int fatorial;
int F;
puts("Esse programa irá calcular o fatorial dos números de 1 a 10(impáres)\n ");
  
for(int i = 1; i<=10;i++){
  fatorial=1;
  if(i % 3 == 0){
    for(int t=i; t>1; t--){
      fatorial *= t;
    }
  printf("Fatorial do número(%d): %d\n ",i,fatorial);
  }
} 
  return 0;
}