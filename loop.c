#include<stdio.h>
int main() {
int k;
printf("enter the number:");
scanf("%d",&k);

int sum=0;
for(int i=1;i<=70;i++) {
  sum = sum+i;

}

printf("sum is %d", sum );
 return 0; 
}
