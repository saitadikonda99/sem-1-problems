#include<stdio.h>
int main() {
int basic_salary;
printf("enter the basic salray:");
scanf("%d",&basic_salary);
   

  if(basic_salary<1500) {

      int hra=(basic_salary/100)*10;
        int da=(basic_salary/100)*90;
      int gross_salary=basic_salary+hra+da;
 printf("gross salary is: %d\n", gross_salary);
    }
     else {
         int hra=500;
int da=(basic_salary/100)*90;
    int gross_salary= basic_salary+da+hra;

printf("gross salary is: %d\n",gross_salary);
   }
return 0;
}


