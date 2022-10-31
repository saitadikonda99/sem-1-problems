#include<stdio.h>
int main() {
int a =5;
int b =10;
int *p=&a;
int *q=&b;
int sum=*p+*q;
int *z=&sum;

printf("%d\n",*z);
return 0;
}
