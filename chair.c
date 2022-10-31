#include<stdio.h>
int main() {
int n;
printf("enter the n value(0 or 1) ");
scanf("%d",&n);
if (n==0||n==1) {
 if(n==0) 
 printf("%c\n",n+97);
else
printf("%c\n",n+98);
}
else {
printf("enter a valid num");
}
 
return 0;
}
