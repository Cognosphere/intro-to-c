#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 srand(time(0));
 int array[10] = 
 {rand()%10,rand()%10,rand()%10,rand()%10,rand()%10,rand()%10,rand()%10,rand()%10,rand()%10,rand()%10,};
 
 int element; 
 printf("Enter element of the array: ");
 scanf("%d", &element);
 printf("Element %d of the array is %d", element, array[element]);
 return 0;
}

