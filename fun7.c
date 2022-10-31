#include<stdio.h>

void india(void);
void french();

int main() {

printf(" enter i for india & enter f for french ");
char ch;
scanf("%c", &ch);

if(ch=='i') {
    india();
}
else {
    french();
 return 0;    
}
}
void india(void) {
printf("namaste\n");
}
void french(void) {
printf("bonjour\n");
}
