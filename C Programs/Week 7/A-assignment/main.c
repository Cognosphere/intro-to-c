#include <stdio.h>
int main(void) {
 char string[100];
 char *p;
 p = string;
 int counter=0;
 printf("Enter a word: \n");
 scanf("%s",string);
 while(*p){ 
   if(*p=='a' || *p=='A'){
     counter++;
   }
   p++;
 }
 printf("There are %d a's in %s",counter,string);
 return 0;
}



