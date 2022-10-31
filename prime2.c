 #include <stdio.h>
int main()
{
    int i,j,c1=0;
    for (i=2;i<=100;i++){
        for (j=2;j<=i;j++){
            if (i%j==0){
                break;
            }
        } 
        if (i==j) {
c1++;
            printf("%d\n",j);
  }
}
printf("c=%d\n",c1);
    return 0;
}
