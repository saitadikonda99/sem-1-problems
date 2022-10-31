#include<stdio.h>
int main() {
char ch[99];
char *p,*q;
for(int k=0,s=1;ch[k]!='\0';k=k+2,s=s+2) {
//   p=&ch[k];
   q=&ch[s];
printf("%s",ch[k]);
//printf("%s",ch[s]);
}
return 0;
}
