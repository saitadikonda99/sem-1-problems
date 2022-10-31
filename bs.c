#include<stdio.h>
int main() {
int basic_salary;
printf("enter the basic salray:");
scanf("%d",&basic_salary);

int dream=(basic_salary/100)*40;
int allowance=(basic_salary/100)*20;

int gross_salary= basic_salary+dream+allowance;

printf("gross salary is: %d\n",gross_salary);

return 0;
}
