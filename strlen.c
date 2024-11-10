#include <stdio.h>
#include<string.h>
int main()
{
    char a [29]="hello";
    char c [29]="world";
    char b[29];
    strcpy(b,a);
    printf("copied is %s\n",b);
    printf("length of cpy str is %s\n",b);
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinated str2 %s\n",b);
    return 0;
}