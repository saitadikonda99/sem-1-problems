#include<stdio.h>
void num(int a[]);
int main() {
int a[10];
for(int i=0;i<=9;i++) { 
scanf("%d",&a[i]);
}
num(x);
}
void num(int x[10]) {
int x[10];
for(int i=1;i<=9;i++) {
if(x[i]%5==0) 
x[i]=0;
}
for(int i=1;i<=10;i++) {
printf("%d",x[i]); }
} 
