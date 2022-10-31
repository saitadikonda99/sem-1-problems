	
#include<stdio.h>
int main() {
int c,c1;
for(int j=1;j<100;j++) {
c=0;
for(int i=1;i<=j;i++) {
if(j%i==0) {
c++;
}
c1=0;
if(i==j) {
printf("%d\n",j);
c1=c1+1;
}
}
}
printf("count=%d\n",c1);
return 0;
}
