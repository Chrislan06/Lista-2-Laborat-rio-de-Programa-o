#include <stdio.h>
#define CRESCIMENTO_PEDRO 3
#define CRESCIMENTO_JOAO 2


int main(void){
char ano=0;
int alturaj = 150 , alturap = 110;
while(alturaj >= alturap){
  alturaj += CRESCIMENTO_JOAO;
  alturap += CRESCIMENTO_PEDRO;
  ano++;
}
  printf("tamahno de final João: %d\n tamanho de final Pedro: %d\n",alturaj,alturap);
  printf("Anos: %d",ano);
  return 0;
}