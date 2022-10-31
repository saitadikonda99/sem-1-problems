#include<stdio.h>
//extern int marks[2];
int main() {
int marks[2];	
for(int i=0;i<3;i++) {
scanf("%d",marks[i]);
}
if(marks[0]>marks[1] && marks[0]>marks[2]) {
 printf("question-1 has maximum marks\n");
}
else if(marks[1]>marks[0] && marks[1]>marks[2]) {
    printf("question-2 has maximum marks\n");
}
else {
  printf("question-3 has maximum marks\n");
}
if(marks[0]<marks[1] && marks[0]<marks[2]) {
       printf("question-1 has minimum marks\n");
}
else if(marks[1]<marks[0] && marks[1]<marks[2]) {
    printf("question-2 has minimum marks\n");
}
else {
  printf("question-3 has minimum marks\n");
}
return 0;
}
