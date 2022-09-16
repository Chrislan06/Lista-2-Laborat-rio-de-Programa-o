#include <stdio.h>

int main(){
int soma1=0,soma2=0;
  for(int i=0; i<=200;i++){
if(!(i%3) && i<=100){
  soma1 +=i;
}else if(!(i%5) && i<=200 && i>100){
  soma2 += i;
}
  }
  printf("soma dos valores divididos por 3 (0 a 100) = %d\nsoma dos valores divididos por 5 (101 a 200) = %d\n",soma1,soma2);
return 0;
}