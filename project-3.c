#include<stdio.h>
int main() {
int a[10];
for(int i=0;i<10;i++) {
scanf("%d",&a[i]);
}

for(int k=0;k<10;k++) {
if(a[k]==1 || a[k]==10)
printf("NO\n");
}

int c=0;
for(int k=0;k<10;k++) {
for(int s=0;s<10;s++) {
if(a[k]==a[s]+1) 
 c=c+1;
     }    
}

for(int k=0;k<10;k++) {
if(a[k]!=1 || a[k]!=10) {
if(c>=3) 
printf("YES-1\n");
else 
printf("NO\n");
}
}

return 0;
}
