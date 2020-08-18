#include <stdio.h>

int factorial(int x){
 if(x==0){
	return 1;
 }
 return x*factorial(x-1);
}


int main(void) {
  printf("%d",factorial(8));
  return 0;
}