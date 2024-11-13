#include<stdio.h>
int main()
{
int n;
int arr[]={1,2,4,6,5};
int min=arr[0];
for(int i=0; i<5; i++)
{
    if (arr[i]<min)
    {
        min=arr[i];
    }
}
printf("the min element is%d",min);
return 0;
}