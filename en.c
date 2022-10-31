
#include <stdio.h>
int main()
{
   char str[50];
   scanf("%[^\n]", str);
   for (int i = 0; str[i] != '\0'; i++)
   {
      printf("%c", str[i] + 1);
   }
   return 0;
}
