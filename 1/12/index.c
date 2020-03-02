#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
  char c;
  int state = OUT;

  while((c=getchar())!=EOF)
    if( (c<'a'||c>'z') && (c<'A'||c>'Z') ){
      if(state == IN){
        state = OUT;
        putchar('\n');
      }
    }else{
      putchar(c);
      state = IN;
    }
}
