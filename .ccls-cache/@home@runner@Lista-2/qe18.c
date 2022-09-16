#include <stdio.h>

int main(){
float quadro=1,total=1;
  for(int i=1;i<64;i++){
    quadro *=2;
    total +=quadro;
  }
  printf("total de grãos(64º): %.0f",total);
return 0;
}