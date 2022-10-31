#include<stdio.h>
int main() {
int s1,s2,s3,s4,s5;
printf("enter the five subject marks s1,s2,s3,s4,s5 \n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
float gained_marks=s1+s2+s3+s4+s5;
printf("total marks gained by student :%.f\n", gained_marks);
float total_marks=500;
float per=(gained_marks/total_marks) * 100;
printf("percentage is:%.2f\n",per);
return 0;
}
