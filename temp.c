#include<stdio.h>
int main() {
int temp;
printf("enter the temperature:");
scanf("%d",&temp);

if(temp>=50 && temp>=40) {
 printf("hot day\n");
}
else if(temp<40 && temp>=30) {
 printf("pleasant day\n");
}
else if(temp<30 && temp>=20) {
printf("cold day\n");
}
else if(temp<20 && temp>=10)  {
printf("coldest day\n");
}
else {
printf("freezing day\n");
}
return 0;
}
