b#include<stdio.h>
int main() {
int mark,jack,bob;
printf("enter the amount of mark,bob,jack bid\n:");
scanf("%d%d%d",&mark,&bob,&jack);
if((mark>bob)&&(mark>jack)) {
            printf("mark will win the bid"); }
else if((jack>mark)&&(jack>bob)){
printf("jack will win the bid"); }
else {
   printf("bob will win the bid");
}
return 0;
}
