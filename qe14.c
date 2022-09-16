#include <stdio.h>

int main(){
  int A,B,temp,quantidade=0;
puts("digite a faixa do intervalo(ordem não importa)");
  scanf("%d %d",&A,&B);
  if(A>B){ 
    temp=A; A=B;B=temp;
    }
  for (int i=A;i<=B;i++){
    if(!(i%3)) quantidade++;
  }
  printf("Números divisiveis por 3: %d",quantidade);
return 0;
}