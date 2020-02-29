#include <stdio.h>

int main(){
  int f = 300;
  printf("this is a heading\n");
  while(f >= 0){
    printf("%d\t%.2f\n", f, 5.0*(f-32)/9);
    f -= 20;
  }
}
