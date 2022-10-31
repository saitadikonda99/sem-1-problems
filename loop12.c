#include<stdio.h>
int main() {

int s;

printf("enter the s vlaue");
scanf("%d" , &s);

for(int i=s;i<=10;i++) {
    if(i==5) {
 break;
}
printf("%d\n",s*i);
}
return 0;
}
