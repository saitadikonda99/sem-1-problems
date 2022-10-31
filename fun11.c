#include<stdio.h>
int sum(int, int);
int main() {
int a,b;
printf("enter the a,b values:");
scanf("%d%d",&a,&b);
int res=sum(a,b);
printf("sum is :%d",res);
return 0;
}
int sum(int a, int b) {
 int c=a+b;
return c;
}
