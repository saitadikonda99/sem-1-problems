#include<stdio.h>
#include<math.h>
int main() {
float height=100;
float c=30;               
float d=45;                
float ac=height*(sqrt(3));      //tan(30)=1/sqrt(3)
float ab=height*(1);            //tan(45)=1
float distance=ac+ab;
printf("%.2f\n",distance);
return 0;
}

