#include <stdio.h>

int main(void) {
 int x=0;
 int *p;
 p = &x;
 printf("Variable stored in x: %d\n",x);
 printf("Variable location of x: %p\n",&x);
 printf("Variable stored in p: %p\n",p);
 printf("Variable location of p: %p\n",&p);
 printf("Variable stored in variable of p: %d\n",*p);

 return 0;
}


