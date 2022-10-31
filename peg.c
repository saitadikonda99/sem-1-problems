#include<stdio.h>
int main() {
int pega=20,pegb=10,pegc;

int *a=&pega;
int *b=&pegb;
pegc = *a;
   *a = *b;
   *b = pegc;
printf("pega has %d\n",*a);
printf("pegb has %d\n",*b);
	
return 0;
}					
