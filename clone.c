#include<stdio.h>
int main() {
int n;
printf("enter the array:");
scanf("%d",&n);
int arr[n];
for(int i =0;i<n;i++) {
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
int temp,ind;
printf("enter the temp value:");
scanf("%d",&temp);

for(int u=0;u<n;u++) {
if( arr[u]==temp) {
temp=1;
ind=u;
break;
}
}
if(temp==1) {
printf("key value found at arr[%d]\n",ind);
}
else{
printf("key value not found ");

}
return 0;
}
