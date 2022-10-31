#include<stdio.h>
int main() {
int age,present_year,born_year;
printf("enter your age:");
scanf("%d",&age);
printf("enter the present year:");
scanf("%d",&present_year);
char ch;
printf("did you celebrate your birthday this year[Y/N]:");
scanf("\n%c",&ch);

switch(ch) {
case 'y' :born_year=( present_year-age );
          printf("you born in %d\n",born_year);
          break;
case 'n' :born_year=(( present_year-1)-age );
          printf("you born in %d\n",born_year);
          break;
default :printf("please enter the [Y/N]\n");
}
return 0;

}
