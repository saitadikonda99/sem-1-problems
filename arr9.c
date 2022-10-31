#include<stdio.h>
int main() {
int salary;
char employee_name[10];
char department[10];
char branch[10];
char address[20];
printf("enter the employee_name\n:");
scanf("%s",employee_name);
printf("enter the department\n:");
scanf("%s",department );
printf("enter the branch:");
scanf("%s",branch);
printf("enter the address:");
scanf("%[^\n]", address);
printf("enter the salary:");
scanf("%d",&salary);

printf("%s\n%s\n%s\n%s\n %d\n",employee_name,department,branch,address,salary);
return 0;
}
