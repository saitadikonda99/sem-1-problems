#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("c.txt", "w");
    fprintf(p,"heyy!<<<sai>>>");
    fclose(p);
    return 0;
}

