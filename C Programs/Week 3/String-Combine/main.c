#include <stdio.h>
#include <string.h>

int main(void) {
 char string1[20];
 char string2[10];
 printf("Enter the first string: ");
 scanf("%s", string1);
 printf("Enter the first string: ");
 scanf("%s", string2);
 strcat(string1, string2);
 printf("%s", string1);
 return 0;
}

