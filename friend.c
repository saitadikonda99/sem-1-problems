#include<stdio.h>
int main() {
int double_room,triple_room,friends=6;
printf("enter the amount for double room:");
scanf("%d",&double_room);
printf("enter the amount for triple room:");
scanf("%d",&triple_room);
int double_cost=double_room*friends/2;                  //2 friends can stay in one double room 
int triple_cost=triple_room*friends/3;                  //3 friends can stay in one triple room 

if(double_cost<triple_cost) {
   printf("double room has minimum cost\n");
}
else {
 printf("triple room has minimum cost\n");
}

return 0;
}
