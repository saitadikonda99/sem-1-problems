#include<stdio.h>
int main() {
long int ph_no,id_no;
float inter_gpa;
char name[99];
printf("enter your name\n");
scanf("%[^\n]",name);
char gender[9];
printf("enter your gender\n");
scanf("%s",gender);
char branch[5];
printf("enter your branch\n");
scanf("%s",branch);
printf("enter your phone no\n");
scanf("%ld",&ph_no);
printf("enter id number\n");
scanf("%ld",&id_no);
int idno=id_no%100000;  
printf("enter your inter gpa\n");
scanf("%f",&inter_gpa);

printf("my name is: %s\n",name);
printf("gender: %s\n",gender);
printf("I'm from %s\n",branch);
printf("my id no.is %ld\n",idno);
printf("my ph.no.is %ld\n",ph_no);
printf("i got %.2f gpa in my inter\n",inter_gpa);
return 0;
}

