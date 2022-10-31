
#include<stdio.h>
int main(){
	int marks[5];
	for(int i=1;i<6;i++)
 	{        

            printf("enter the marks[%d] =",i);
 		scanf("%d",&marks[i]);
	}
	int max=0;
	for(int i=0;i<6;i++) {
		if(marks[i]>max) {
	max=marks[i];
		}
	}
	int min=0;
	for(int i=0;i<6;i++) {
		if(marks[i]<min) {
			min=marks[i];
		}
	}

int diff=max-min;
	printf("%d",diff);

return 0;

}
