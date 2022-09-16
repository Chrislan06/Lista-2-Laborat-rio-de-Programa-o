#include <stdio.h>

int main(){
int tabuada,n;
puts("Digite um Número para ser calculado sua tabuada");
scanf("%d",&n);
for(int i=1;i<=10;i++){
  tabuada= i*n;
  printf("\n%d x %d = %d",n,i,tabuada);
}
return 0;
}