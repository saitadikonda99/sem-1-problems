#include<stdio.h>
int main() {
int num;
int rev=0,x=0;
printf("enter the number:");
scanf("%d",&num);
int t=num;
do 
{
x=num%10;
rev=rev*10+x;
num=num/10;
}
while(num>0);
if(t==rev)
printf("given number is palindrome\n");
else {
printf("given number is not palindrome\n");
}
return 0;
}
