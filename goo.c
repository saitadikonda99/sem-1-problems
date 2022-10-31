#include<stdio.h>
#include<math.h>
int main() {
float y1=1,x1=1,x2=2,y2=3;
float distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
float a_to_c=sqrt(distance)+2;
printf("distance between a to c %.2f\n",a_to_c);
return 0;
}

