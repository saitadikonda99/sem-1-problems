# include <stdio.h>   
int main()   
{   
int number;   
printf("Please Enter any number:") ;   
scanf("%d", &number) ;   
int count=0; 
 for(int i = 1 ; i<=number; i++)   
  {   
   if(number%i == 0)   
     count+=1 ;   
  }    
 if (count==2)   
    printf("Prime Number\n") ;   
 else   
    printf("not a prime Number\n") ;   

return 0 ;   
}

