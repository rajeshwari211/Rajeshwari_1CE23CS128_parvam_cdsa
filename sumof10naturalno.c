#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The first 10 natural numbers are:\n");
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
    }   
        printf("\nthe sum is: %d\n ",sum);
        return 0;
    
}