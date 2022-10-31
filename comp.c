#include<stdio.h>
int main() {
int number;
printf("enter the number:");
scanf("%d",&number);
int count=0;
for(int i=1;i<=number;i++) {
     if(number%i==0) {
count=+i;
}
}
if(count==number) {
printf("composite number\n");
}
else {
printf("not a composite number\n");
}
return 0;
} 
