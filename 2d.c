#include<stdio.h>
int main() {
int n;
printf("enter the row size:");
scanf("%d",&n);
int m;
printf("enter the row column:");
scanf("%d",&m);
int a[n][m];
for(int i=0;i<n;i++) {
for(int s=0;s<m;s++) {
scanf("%d ",&a[i][s] );
if(a[i][s]%2==0) {
printf("%d",a[i][s]);
}
    }
printf("\n");
         
}

return 0;
}
