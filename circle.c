#include<stdio.h>
int main() {

int radius;
printf("enter the radius :");
scanf("%d",&radius);
float area = 3.14*radius*radius;
float perimeter = 2*3.14*radius;

printf("area is: %f\nperimeter is:%f\n" , area, perimeter);
return 0;
}

