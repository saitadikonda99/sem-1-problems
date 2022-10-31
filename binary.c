#include<stdio.h>
int main() {
int bn;
printf("enter the binary number:");
scanf("%d",&bn);
int decimal=0,weight=1;
while(bn!=0) {

int rem =bn%10;
decimal=decimal+rem*weight;
bn =bn/10;
weight =weight*2;

}
printf("decimal number =%d\n",decimal);
return 0;
}
