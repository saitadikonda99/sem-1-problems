
#include<stdio.h>
int main() {
int l=20,b=15,h=12;
int volume=2*(l*b+b*h+h*l);
float cost=volume*5;
float cost_rup=cost/100;
printf("total cost to paint:%.2f\n",cost_rup);
return 0;
}
