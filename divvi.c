#include<stdio.h>
int main() {
int count=0;
for(int i=1;i<=100;i++) {
if(i%2!=0 && i%3!=0) {
printf("%d\n",i);
count++;
}
}
printf(" total=%d\n",count);
return 0;
}
