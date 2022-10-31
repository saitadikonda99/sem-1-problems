#include<stdio.h>
int main() {
int s;
printf("enter the number:");
scanf("%d",&s);

int n,count=0;
for(int i=1;i<=s; i++) {
 n=s%i;
 if(n==0){
printf(" div is %d\n",i);
count=count+1;
}
}
printf("count =%d\n",count);
return 0;
}
