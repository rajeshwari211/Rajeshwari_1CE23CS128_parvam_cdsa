#include <stdio.h>
int main()
{
    char name [20];
    printf("enter name");
    fgets(name,sizeof(name),stdin);
    printf("the name is:",name);
    return 0;
}