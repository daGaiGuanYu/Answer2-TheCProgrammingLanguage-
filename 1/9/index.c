#include <stdio.h>

int main(){
  int inBlank = 0;
  char c;
  while((c = getchar()) != EOF){
    if(c == ' '){
      if(!inBlank){
        inBlank = 1;
        putchar(c);
      }
    }else{
      putchar(c);
      inBlank = 0;
    }
  }
}
