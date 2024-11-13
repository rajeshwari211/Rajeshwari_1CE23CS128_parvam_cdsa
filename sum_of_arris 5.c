#include<stdio.h>
int main()
{
    int arr[]={1,2,32,45,7};
    int sum=0;

    for ( int i = 0; i < 5; i++)
    {
    printf("%d\n",arr[i]+5);
    sum+=arr[i];
    }
        printf("sum is:%d",sum);
        return 0;    
}