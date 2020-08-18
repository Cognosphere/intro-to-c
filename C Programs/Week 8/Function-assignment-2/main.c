#include <stdio.h>
int char_in_str(char x[100], char c){
  int counter = 0;
  char *p;
  p = x;
  while(*p){
    if(*p==c){
      counter++;
    }
    p++;
  }
  return counter;
}
int main(void) {
  printf("%d",char_in_str("Hello World\n",'o'));
  return 0;
}