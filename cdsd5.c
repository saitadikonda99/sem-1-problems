
#include<stdio.h>
int main() {
int marks[5],i,sum=0;

       for(i=0;i<5;i++) {
printf("enter the marks[%d]",i);
scanf("%d",&marks[i]);
}
for(i=4;i>=1;--i) {
printf("-%d\n",marks[i]);
}
return 0;
}

