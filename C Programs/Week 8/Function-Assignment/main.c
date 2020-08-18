#include <stdio.h>
int max(int x, int y){
  if(x>=y){
    return x;
  }
  else{
    return y;
  }
}
int main(void) {
  printf("%d",max(24,67));
  return 0;
}