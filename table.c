#include<stdio.h>
int main() {
int k;
scanf("%d",&k);
int i=1;
while(i<=10) {
  printf("%d x %d =%d\n",k,i,k*i);
i++;
}
return 0;
}
