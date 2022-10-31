#include<stdio.h>
int main() {
float a,b;
printf("enter the first number:");
scanf("%f",&a);
printf("enter the second number:");
scanf("%f",&b);
char ch;
printf("enter the operator(+,-,*,/):");
scanf("\n%c",&ch);

if(ch=='+') {
  float sum=a+b;
printf("sum is %f\n",sum);
}  else if(ch=='-') {
 float diff=a-b;
   printf("diff is %f\n",diff);
} else if(ch=='/') {
  float div=a/b;
printf("div is %f\n",div);
} else if(ch=='*') {
 float pro=a*b;
printf("product is %f\n",pro);
} else {
  printf("enter the valid input\n");
}
return 0;
} 

