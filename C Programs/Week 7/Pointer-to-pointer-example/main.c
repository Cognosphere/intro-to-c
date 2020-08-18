#include <stdio.h>

int main(void) {
 int x=0;
 int *p;
 int **p2;
 p = &x;
 p2 = &p;
 printf("Variable stored in x: %d\n",x);
 printf("Variable location of x: %p\n",&x);
 printf("Variable stored in p: %p\n",p);
 printf("Variable location of p: %p\n",&p);
 printf("Variable stored in variable of p: %d\n",*p);
 printf("Variable stored in p2: %p\n",p2);
 printf("Variable location of p2: %p\n",&p2);
 printf("Variable stored in variable of p: %p\n",*p2);
 printf("Variable stored in variable stored in variable of p2: %d\n",**p2);

 return 0;
}