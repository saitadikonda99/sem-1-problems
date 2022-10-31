#include<stdio.h>
int main() {
int age;
printf("enter the age:");
scanf("%d",&age);

if(age>=18) {
printf("ravi is eligible to vote\n");
}

else {
   printf("ravi is not eligible to vote\n");
}
return 0;
}
