#include <stdio.h>
int sum(int x){
  if(x==0){
    return 0;
  }
  return x+sum(x-1);
}

int main(void) {
  printf("%d",sum(50));
  return 0;
}