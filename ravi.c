#include<stdio.h>
int main() {
int marks[2];
int i,max,min;
for(i=0; i<3; i++)  {
printf("enter the marks[%d]",i);
   scanf("%d",&marks[i]);
}
max=min=marks[0];
   for(i=0 ; i<3 ; i++) {
  if(marks[i]>max) 
 max=marks[i];

if(marks[i]<min) 
  min=marks[i];
}
printf("max marks is %d\n",max);
printf("min marks is %d\n",min); 
return 0;
}
