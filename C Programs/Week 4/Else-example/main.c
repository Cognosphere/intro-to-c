#include <stdio.h>

int main(void) {
  int entered;
  printf("Enter a number from 1-10: ");
  scanf("%d", &entered);
  if(entered>10){
    printf("The number was out of bounds");
  }
  else if(entered<1){
    printf("The number was out of bounds");
  }
  else{
    printf("You entered %d", entered);
  }
  return 0;
}