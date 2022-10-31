#include<stdio.h>
float simple_interest(int p , float r , int t );

int main() {
float p=4,t=700000,r=12.5;
float total_amount;
total_amount=simple_interest(p,r,t);
printf("total amount should pay to the bank: %.3f\n",total_amount);
return 0;
}
float simple_interest(int p , float r, int t) {
float interest=(p*t*r)/100;
float total_amount=t+interest;
return total_amount;
}

