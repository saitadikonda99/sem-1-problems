//function with out arguments and return value:

#include <stdio.h>
int area();   //function prototype with return type int
int main()
{
  int square_area;
  square_area = area();    //function call
  printf("Area of Square = %d\n",square_area);
  return 0;
}
int area()
{
  int square_area,square_side;
  printf("Enter the side of square :");
  scanf("%d",&square_side);
  square_area = square_side * square_side;
  return square_area;
}
