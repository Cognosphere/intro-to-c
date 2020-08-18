#include <stdio.h>

int add(int x, int y){
  return x+y;
}

int main(void) {
  int num1 = 5;
  int num2 = 7;
  printf("%d",add(num1,num2));
  return 0;
}