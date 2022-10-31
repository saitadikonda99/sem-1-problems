#include<stdio.h>
int main() {
int marks[5],i,sum=0;

       for(i=0;i<5;i++) {
printf("enter the marks[%d]",i);
scanf("%d",&marks[i]);
if(marks[i]%2==0) {
sum=sum+marks[i];
}
}
printf("total marks=%d",sum);
}


