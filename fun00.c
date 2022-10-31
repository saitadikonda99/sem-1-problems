#include<stdio.h> 
int sum(void);
int main() {
int res=sum();
printf("%d\n",res);

return 0;
}
int sum() {
int a,b;
printf("enter the a,b values");
scanf("%d%d",&a,&b);

return a+b;
}
