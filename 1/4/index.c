#include <stdio.h>

int main(){
  int s = 0;
  while(s < 301){
    printf("%d\t%.2f\n", s, 9.0*s/5 + 32);
    s+=20;
  }
}
