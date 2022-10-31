#include<stdio.h>
void phone(int mobile[] );

int main() {
int mobile[10];
for(int i=0;i<=9;i++) {
printf("enter mobile[%d]=",i);
scanf("%d",&mobile[i]);
}
phone(mobile);
}

void phone(int mobile[10]) {
int sum=mobile[0]+mobile[1]+mobile[8]+mobile[9];
printf("sum is:%d",sum);
}
