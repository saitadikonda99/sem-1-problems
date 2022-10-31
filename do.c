#include<stdio.h>
int main() {
char ch[99];
scanf("%[^\n]",ch);
int i=1;
do {
printf("name is %s\n",ch);
i++;
}
while(i<=50);

return 0;
}
