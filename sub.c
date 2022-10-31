#include<stdio.h>
int main() {
int s1,s2,s3,s4,s5;
printf("enter the five subject marks s1,s2,s3,s4,s5 \n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
int gained_marks=s1+s2+s3+s4+s5;
int per=gained_marks/500;
printf(total marks gained by student :%d\n", gained_marks);
printf("percentage is:%d\n",per);
return 0;
}
