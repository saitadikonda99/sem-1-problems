#include<stdio.h>
int add(int,int );
int main() {

int a=5 ,b=13,sum;
sum = add(a,b);
printf("sum is: %d",sum);
return 0;
}

int add( int a,int b)

{
return (a+b);
}
