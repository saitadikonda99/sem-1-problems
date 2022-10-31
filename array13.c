#include<stdio.h>
int main() {
int marks[3];
printf("enter the marks");
scanf("%d %d %d",&marks[0],&marks[1],&marks[2]);
printf("%d %d %d\n" ,marks[0],marks[1],marks[2]);
int sum =marks[0]+marks[1]+marks[2];
int avg=sum/3;
printf("sum is %d\n" ,sum);
printf("avg is %d" ,avg);
return 0;
}

