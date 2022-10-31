# include <stdio.h>   
int main()   
{   
int s;   
printf("Please Enter any number:") ;   
scanf("%d", &s) ;   
 int k,count=0; 
 for(int i = 1 ; i<s; i++)   
  {   
   if(s%i == 0)   
     count = count + i ;   
  }    
 if (count==s)   
    printf("Perfect Number\n") ;   
 else   
    printf("not the Perfect Number\n") ;   

return 0 ;   
}

