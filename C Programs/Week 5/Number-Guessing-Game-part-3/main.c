
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int int1 = rand()%100;
  int guess;
  while(guess!=int1){
    printf("Guess the number: ");
    scanf("%d", &guess);
    if(guess == int1){
      printf("You are correct, the number is %d\n", int1);
    }
    else if(guess>int1){
      printf("Your number was too high\n");
    }
    else{
      printf("Your number was too low\n");
    }
  }
  return 0;
}


