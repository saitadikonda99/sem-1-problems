#include<stdio.h>
int egg( int );
int main() {
int n=15,day;
day=egg( n );
printf("hen will lay a golden egg on %d day\n",day);
return 0;
}
int egg(int s) {
int day;
day=(2*s-1);
return day;
}
