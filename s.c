#include<stdio.h>
int main() {
int a=10;
printf("%d\n",a);
{
int a=20;
{
  int a =30;
printf("%d\n",a);                   //a value stores in stake 
                                   /*The stack is a special region of memory, and 
                                      automatically managed by the CPU*/
}
printf("%d\n",a);
}
printf("%d\n",a);


return 0;
}
