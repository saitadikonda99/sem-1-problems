#include<stdio.h>

int main() {
int birth_year,birth_month,birth_date,present_year,present_month,present_date;
printf("enter your birth year:");
scanf("%d",&birth_year);

printf("enter your birth month[1-12]:");
scanf("%d",&birth_month);

printf("enter your birth date[1-30/31]:");
scanf("%d",&birth_date);

printf("enter the present year:");
scanf("%d",&present_year);

printf("enter the present month[1-12]:");
scanf("%d",&present_month);

printf("enter the present date[1-30/31]:");
scanf("%d",&present_date);

if(birth_month>present_month) 
{
  int age_years=(present_year-birth_year)-1;
  printf("age is %d years\n",age_years);
 }
 else if(birth_month<present_month) 
       {
           int age_years=present_year-birth_year;
   printf("age is %d years\n",age_years);
 }
 else if(birth_month==present_month) {
      if(birth_date<=present_date) { 
    int age_years=(present_year-birth_year);
     printf("age is %d years\n",age_years);
}
else {
   int age_years=(present_year-birth_year)-1;
printf("age is %d years\n",age_years);
}
}
else {
printf("enter the valid day/month/year\n");
}

int month1=30-birth_date;
int month2=30-present_date;
int month3=month1+month2;
int month4=11-birth_month;

if(birth_month==present_month) {
if(birth_date==present_date || birth_date<present_date) {

printf("0 months\n");
}
else
printf("%d months\n",birth_month+month4);	
}
else if( birth_month<present_month) {
 printf("%d months\n",present_month-birth_month);
}
else if( birth_month>present_month) {
 printf("%d months\n",present_month);
}

else { printf("enter valid year/month/day"); }








return 0;
}
