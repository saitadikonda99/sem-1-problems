#include<stdio.h>
int main() {
float x;
printf("enter the kms:");
scanf("%f",&x);
float perday= 2*x;
float perweek= perday*5;
printf("kms travelled by rahul: %.1f",perweek);
return 0;
}
