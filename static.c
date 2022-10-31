#include<stdio.h>
void st(void)
{
static int a=24;
a+=1;
printf("a=%d\n",a);
}
int main() {
st();
st();
st();
st();
st();


return 0;
}
