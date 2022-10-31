#include<stdio.h>
int main() {
register int a;
printf("a=%d\n",a);
{
register int a=35;
printf("a=%d\n",a);
}




return 0;

                                     /*Register variables tell the compiler to store the 
variable in CPU register instead of memory. */
}
