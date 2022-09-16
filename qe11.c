#include <stdio.h>

int main(){
  int A,B,temp;
puts("digite a faixa do intervalo(ordem não importa)");
  scanf("%d %d",&A,&B);
  if(A>B){ 
    temp=A; A=B;B=temp;
    }
  for (int i=A;i<=B;i++){
    if(!(i%4)){
      printf("\n%d e seu quadrado %d\n",i,i*i);
    }
  }
return 0;
}