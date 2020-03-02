#include <stdio.h>

#define IN 1
#define OUT 0

#define maxLen 10 // 假设单词长度在 10 以内（不包括 10）

int main(){
  char c;
  int state = OUT;
  int currentLen = 0; // 当前单词的长度

  int len[maxLen]; // len[1] 代表长度为 1 的单词的数量
  for(int i=0; i<maxLen; i++)
    len[i] = 0;

  while( (c=getchar()) != EOF ){
    if( (c<'a'||c>'z') && (c<'A'||c>'Z') ){
      if(state == IN){ // 刚从单词跳出来
        len[currentLen] ++; // 应该检查一下 currentLen < maxLen
        state = OUT;
        currentLen = 0;
      }
    }else{
      currentLen++;
      state = IN;
    }
  }

  for(int i=1; i<maxLen; i++){
    printf("%d\t", i);
    while(len[i]--)
      putchar('@');
    putchar('\n');
  }
}
