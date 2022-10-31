#include<stdio.h>
int main() {
int a,b;
printf("enter the a b values:");
scanf("%d%d",&a,&b);
if(a>b) {
      printf("a is greater than b\n");
}  else if(a<b) {
       printf("b is greater than a\n");
}
else  {
  printf("a is equal to b\n");
}
return 0;
}
