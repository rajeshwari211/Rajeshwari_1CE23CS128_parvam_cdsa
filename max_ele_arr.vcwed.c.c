#include<stdio.h>
int main()
{
int n;
int arr[]={1,2,4,6,5};
int max=arr[0];
for(int i=0; i<5; i++)
{
    if (arr[i]<max)
    {
        max=arr[i];
    }
}
printf("the max element is%d",max);
return 0;
}
