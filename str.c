#include<stdio.h>
int main() {
char sai[99];
scanf("%[^\n]",sai);
int i;
for(i=0;sai[i]!='\0';i++);
printf("length of the string is %d\n",i);
return 0;
}
