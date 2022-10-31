#include<stdio.h>
int main() {
int a,b;
float result;
printf("enter the a,b value:");
scanf("%d%d",&a,&b);
char operator;
printf("enter the operator:");
scanf("\n%c",&operator);

switch(operator) {
case '+' :printf("addition is %d\n",a-b);
          break;
case '-':printf("subtraction is %d\n",a-b);
          break;
case '*':printf("multiplication is %d\n",a*b);
          break;
case '/':printf("division is %d\n",a/b);
          break;
       
 default : printf("enter the valid operator");
}
return 0;
}

