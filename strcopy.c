#include <stdio.h>
#include<string.h>
int main()
{
    char a [29]="hello";
    char b [29];
    strcpy(b,a);
    printf("%s",b);
    return 0;
}