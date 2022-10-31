#include<stdio.h>
int main() {
int money; 
printf("enter the req. amt of money:");
scan("%d",&money);

int note100=money/100;
int note50=(money%100)/50;
int note10=((money%100)%50)/10;

printf("100_notes: %d\n50_notes: %d\n10_notes: %d\n",note100,note50,note10);

return 0;
}
