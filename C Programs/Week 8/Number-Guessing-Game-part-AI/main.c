
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guesser(int low, int high){
  int guess = rand()%100;
  printf("\n%d\n",guess);
  return guess;
}
int main(void) {
  srand(time(0));
  int int1 = rand()%100;
  int guess;
  int counter = 0;
  int high = 100;
  int low = 0;
  while(guess!=int1){
    counter++;
    printf("Guess the number: ");
    guess = guesser(low,high);
    //scanf("%d", &guess);
    if(guess == int1){
      printf("You are correct, the number is %d\n", int1);
    }
    else if(guess>int1){
      printf("Your number was too high\n");
      high = guess;
    }
    else{
      printf("Your number was too low\n");
      low = guess;
    }
  }
  return 0;
}


