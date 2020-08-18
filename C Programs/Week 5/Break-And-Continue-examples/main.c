#include <stdio.h>

int main(void) {
  int a = 0;
  printf("Break statement\n");
  while(a<20){
    a++;
    if(a==15){
      break;
    }
    printf("%d\n",a);
  }
  a = 0;
  printf("\nContinue statement\n");
  while(a<20){
    a++;
    if(a==15){
      continue;
    }
    printf("%d\n",a);
  }
  return 0;
}