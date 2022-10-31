#include<stdio.h>
int main() {
int a[10];
for(int i=0;i<10;i++) {
scanf("%d",&a[i]);
}






int c=0;
for(int k=0;k<10;k++) {

for(int s=0;s<10;s++) {
if(a[k]==a[s]+1) {
c=c+1;
}
  }
     }
}

if(c>=2) {
printf("YES");
}
else {
printf("NO");
}

