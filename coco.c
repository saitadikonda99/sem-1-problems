#include<stdio.h>
int main() {
float xmilli;
printf("enter the milliters of coconut water :");
scanf("%f",&xmilli);
float ygrams;
printf("enter the grams of coconut pulp:");
scanf("%f",&ygrams);
float xa,yb;
printf(" milliters of coconut water rani has to consume:");
scanf("%f",&xa);
printf("grams of coconut pulp rani has to consume :");
scanf("%f",&yb);
float totalwater=xa/xmilli;
float totalpulp=yb/ygrams;
float totalcoconuts=totalwater+totalpulp;
printf("rani has to buy %.2f coconuts\n",totalcoconuts);
return 0;
}
