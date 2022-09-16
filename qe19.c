#include <stdio.h>

int main(void){
int n=0,min,max,temp,soma;
float media;
  puts("digite a faixa do intervalo(ordem não importa)");
  scanf("%d %d",&min,&max);
  if(min>max){ 
    temp=min; min=max;max=temp;
    }
  for(int i=min; i<=max;i++){
    soma += i;
    n++;
  }
  media=(float)soma/n;
  printf("média dos números da faixa digita é: %.2f",media);
  return 0;
}