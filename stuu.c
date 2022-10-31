#include<stdio.h>
int main() {
 float stu[10];
for(int i=0;i<10;i++) {
scanf("%f",&stu[i]);
}
int o,a,a_plus,b,c;
 o=a=a_plus=b=c=0;
for(int i=0;i<10;i++) {
if(stu[i]>9) {
o=0+1;
}
else if(stu[i]>8 && stu[i]<=9) {
a=a+1;
}
else if(stu[i]>7 && stu[i]<=8) {
a_plus=a_plus+1;
}
else if(stu[i]>6 && stu[i]<=7) {
b=b+1;
}
else {
c=c+1;
}
}
printf("0=%d\na=%d\na_plus=%d\nb=%d\nc=%d\n",o,a,a_plus,b,c);
return 0;
}

