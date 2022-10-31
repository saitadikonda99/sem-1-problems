#include<stdio.h>
void table(int k);  

int main() {
int k;
printf("enter the number: ");
scanf("%d", &k);

table( k ); 
return 0;
}

void table( int k ) {

for(int i=1; i<=10; i++) {

   printf("%d\n" , i*k);

}

}
