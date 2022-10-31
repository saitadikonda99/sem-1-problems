include<Stdio.h>
void sum(int , int );
void main() {
int a,b;
printf("enter the a,b values:");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int x,int y)  {
int sum;
sum=x+y;
printf("sum =%d\n",sum);
}

