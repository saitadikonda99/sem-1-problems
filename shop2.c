#include<stdio.h>
#include<math.h>
int main() {
float pens,chocolate,penprice,chocolate_price;
pens=10;
chocolate=5;
chocolate_price=chocolate*10;
penprice=1.5*pens;
printf("total bill= %f ",penprice+chocolate_price);
int change=100-(penprice+chocolate_price);
printf("change is:%d\n",change);

if(change<100) {
printf("you have change");
}
else {
printf("you don't have any change");
}

return 0;
}
