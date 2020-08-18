#include <stdio.h>

int main(void) {
 int int1;
 int int2;
 printf("Enter two numbers\n");
 scanf("%d %d", &int1, &int2);
 int answer = int1+int2;
 printf("%d + %d = %d", int1, int2, answer);
 return 0;
}

