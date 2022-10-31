#include<stdio.h>
int main() {
int x;
printf("enter the x value");
scanf("%d",&x);
int total_seconds=60*x;
int possible_sec=total_seconds-5;
int total_submissions=possible_sec/30;
printf("total no. of possible submissions%d\n",total_submissions);
return 0;
}
