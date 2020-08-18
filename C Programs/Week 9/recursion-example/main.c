#include <stdio.h>

void recursion(){
  recursion();
}

int main(void) {
  recursion();
  printf("Hello World\n");
  return 0;
}