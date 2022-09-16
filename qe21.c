#include <stdio.h>
#include <math.h>
int main(void){
int numero,comparar,resto,inverso=0;
puts("digite um número de 5 digitos");
  scanf("%d",&numero);

  comparar=numero; 
for(int i=4; 0>=;i--){
  resto = numero % 10;
  inverso += resto * pow(10,i);
  numero= numero/10
}
 (numero == inverso)?puts("o numero é um palindromo "):puts("o numero não é um palindrimo");  
 /* if(numero/10000 == numero % 10 && (numero/1000)%10 == (numero%100)/10 ){
    printf("o número é um palíndromo! ");
  }else{
    printf("o número não é um palíndromo! ");
  }*/
  
  return 0;
  }