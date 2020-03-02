// 第 11 题是思考题，这里改善书里单词计数的算法，以保证“非字母”以外的字符都算 OUT

#include <stdio.h>

#define IN 1
#define OUT 0

int inAlphabet(char c){ // 字符 c 是否为字母
  return (c>='a'&&c<='z') || (c>='A'&&c<='Z');
}

int main(){
  char c;
  int state = OUT, num = 0;

  while((c = getchar())!=EOF)
    if( !inAlphabet(c) )
      state = OUT;
    else if(state == OUT){
      num++;
      state = IN;
    }

  printf("%d\n", num);

}
