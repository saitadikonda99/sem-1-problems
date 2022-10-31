#include<stdio.h>
int main() {
int day;
printf("enter the day(1-7):");  //1-mon,2-tues,3-wed,4-thur,5-fri,6-sat,7-sun
scanf("%d",&day);

if(day==1) {
printf("monday\n");
}
else if(day==2) {
 printf("tuesday\n");
}  
 else if (day==3) {
printf("wednesday\n");
}
else if (day==4) {
printf("thursday\n");
   }
else if (day==5) {
printf("friday\n");
   }
else if (day==6) {
printf("saturday\n");
   }
else if (day==7) {
printf("sunday\n");
   }
else  {
printf("enter a valid a input from (1-7)\n");
}

return 0;
}
