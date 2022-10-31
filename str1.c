#include<stdio.h>
int main() {

char k[100];
printf("enter the string:");
scanf("%[^\n]" ,k);

printf("you entered is:%s",k);
return 0;
}
