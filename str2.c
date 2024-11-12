#include <stdio.h>
#include<string.h>
int main()
{
    char name [29];
    printf("enter name");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"/n")]=0;
    printf("the name is:%s\n",name);
    int lenght=strlen(name);
    printf("%d is the length of string",lenght-1);
    return 0;
}