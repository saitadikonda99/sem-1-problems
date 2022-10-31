#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    char s[9];
    scanf("%s", s);
    char sen[51];
    scanf("%[^\n]", sen);
    printf("%s\n", s);
    printf("%sen", sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}