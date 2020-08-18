#include <stdio.h>
int main(void) {
  char string[10]="Hello";
  char *p;
  p = string;
  int x=0;
  while(*p){ //the \0 at the end of strings will signify when the loop will end
    printf("%c\n", *p);
    p++;
  }
  return 0;
}

