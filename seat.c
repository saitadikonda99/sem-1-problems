#include <stdio.h>
int main() {
int count=0; 
char ch[5];
scanf("%s",ch);
for(int i=0;i<=4;i++) {
    if(ch[i]=='1')
     count=count+1;
}
printf("occupied seats=%d\n",count);
printf("empty seats=%d\n",5-count);
    return 0;
}
