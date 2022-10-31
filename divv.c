#include<stdio.h>
int main() {
int n;
printf("enter the age:");
scanf("%d",&n);

if(n%7==0 && n%3==0) {
printf("divisible by 7 and 3 \n");
}

else {
   printf("not divisible by 7 and 3\n");
}
return 0;
}

