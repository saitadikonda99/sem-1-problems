#include<stdio.h>
int main() {
int mark[2];
for(int i=0;i<3;i++) {
 
     printf("enter the mark[%d]",i);
  scanf("%d",&mark[i]);
}
int max=0;
for (int i=0;i<2;i++) {
   
   if(mark[i]>max) {
   max=mark[i];
}
}
printf("maximum value is %d\n",marks);*/
return 0;
}

