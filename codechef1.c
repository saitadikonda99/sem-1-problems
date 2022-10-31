#include<stdio.h>
int main() {
//Read the number of test cases.
int T;
scanf("%d",&T);
while(T--) {
//read the input a,b
int a,b;
scanf("%d %d",&a,&b);

//compute the ans
int ans=a+b;
printf("%d\n",ans);
}
return 0;
} 
