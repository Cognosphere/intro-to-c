#include <stdio.h>
int fibonacci(int x){
  if(x<=1){
    return x;
  }
  return fibonacci(x-1)+fibonacci(x-2);
}
int main(void) {
  for(int x=0;x<=20;x++){
    printf("%d\n", fibonacci(x));
  }
  return 0;
}