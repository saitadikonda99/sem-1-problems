#include<stdio.h>
int main() {
char name[50];
printf("enter your name:" );
scanf("%[^\n]",name);

for(int i=1;i<=50;i++) { 
   printf("%s\n",name);
}
return 0;
} 
