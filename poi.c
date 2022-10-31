#include<stdio.h>
int main() {
int x;
int *p;
p=&x;
*p=0;
printf("x=%d\n",x);  //0
printf("*p=%d\n",*p);//0 

*p+=5;
printf("x=%d\n",x); //5
printf("*p=%d\n",*p); //5

(*p)++;
printf("x=%d\n",x); //6 
printf("*p=%d\n",*p); //6

return 0;
}
