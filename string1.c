#include <stdio.h>
#include<string.h>
int main()
{
    char name [20];
    printf("enter name");
    fgets(name,sizeof(name),stdin);
    printf("the name is:",name);
    int lenght=strlen(name);
    printf("%d is the length of string",lenght-1);
    return 0;
}