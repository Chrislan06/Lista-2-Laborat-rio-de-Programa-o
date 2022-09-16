#include <stdio.h>

int main(){
int c;
float f;
for(int i=10;i<=100;i +=10){
  c=i;
  f=(9*c+160)/(float)5;
  printf("%d°C = %.2f°F\n",c,f);
}
return 0;
}