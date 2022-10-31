#include<stdio.h>
int sort(int n,int[]);


int main() {
 int n;
printf("enter the size of the array");
scanf("%d",&n);
int sai[n];
for(int i=0;i<n;i++) {
printf("sai[%d]=",i);
scanf("%d",&sai[i]);
}
sort(n , sai)
return 0;

}

int sort(int n , int sai[] ) {
 for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        int temp = sai[i];
        sai[i] = sai[i + 1];
        sai[i + 1] = temp;
      }
    }
  }
}

return 0;
}




