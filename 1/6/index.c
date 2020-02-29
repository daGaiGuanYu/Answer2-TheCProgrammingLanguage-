#include <stdio.h>

int main(){
  int result;
  while(result = getchar() != EOF)
    printf("%d\n", result);
}
