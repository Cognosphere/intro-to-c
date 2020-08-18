#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int random;
  for(int x=0;x<10;x++){
    random = rand()%100;
    printf("%d\n",random);
  }
  return 0;
}