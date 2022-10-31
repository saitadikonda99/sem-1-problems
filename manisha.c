#include<stdio.h>
float cost(void);

int main() {
float change;
change=cost();
printf("change =%.2f\n",change);
float total_bill=100-change;
printf("total bill=%.2f\n",total_bill);

}

float cost(void) {

float pens=10,chocolates=5;
float cost_pen=1.5,cost_cho=10;
float total_bill=(pens*cost_pen)+(chocolates*cost_cho);
float paid=100;
float change=paid-total_bill;
return change;
}

