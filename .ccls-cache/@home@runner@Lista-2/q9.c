#include <stdio.h>

int main(){
int xn,x1=1,x2=1;
  for(int i=1; i<=20;i++){
   if(i==1){
    xn=1;
  }else if( i == 2){
     xn=1;
  }else{
    xn=x1+x2;
    x1=x2;
    x2=xn;
  }
    printf("%d° termo= %d\n",i,xn);
  }
return 0;
}