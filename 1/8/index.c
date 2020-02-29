#include <stdio.h>

int main(){
  char c;
  int blackNum=0, tabNum=0, lineNum=0;
  while((c=getchar()) != EOF){
    switch(c){
      case ' ':
        blackNum++;
        break;
      case '\t':
        tabNum++;
        break;
      case '\n':
        lineNum++;
        break;
    }
    printf("black: %d; tab: %d; line: %d\n", blackNum, tabNum, lineNum);
  }
}
