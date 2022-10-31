#include<stdio.h>
int main() {
int x,y;
printf("enter x and y:");
scanf("%d %d",&x,&y);
printf(" left shift=%d\n",(x^y));
printf("right shift=%d\n",(x>>y));
return 0;
}
