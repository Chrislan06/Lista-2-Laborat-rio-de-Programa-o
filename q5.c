#include <stdio.h>

int main(void){
int n,maior=0,menor=0,temp;
do{
  puts("Digite números variados(digite 0 para parar)");
  scanf("%d",&n);
if(n==0) break;
  temp=n;
  if(maior == 0 && menor ==0){ 
  maior=temp; menor=temp;
    }
  else if(n>maior){
    maior=n;
  }else if(n<menor){
    menor=n;
  }
}while(1);
printf("Obrigado por participar\nMaior Número do intervalo: %d\nMenor Número do intervalo: %d",maior,menor);
  return 0;
}