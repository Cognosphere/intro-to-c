#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int int1 = rand()%100;
  int guess;
  printf("Guess the number: ");
  scanf("%d", &guess);
  printf("The number was %d, you were %d off", int1, int1-guess);
  return 0;
}


