 #include<stdio.h>
extern int marks[2];
int main() {
printf("enter the marks:");
scanf("%d",&marks);
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


