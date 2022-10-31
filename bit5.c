#include <stdio.h>

void main()

{

int number,remainder, n_1 = 0,n_0 = 0;

printf("Enter a decimal integer \n");

scanf("%d", &number);

while (number > 0)

{

remainder = number % 2;

if (remainder == 1)

{

n_1++;

}

else

{

n_0++;

}

number = number / 2;

}

printf("No.of 1's = %d\n and No.of 0's = %d\n", n_1, n_0);

}
