#include<stdio.h>
int main()
{
int n;
printf("enter the no of elements");
scanf("%d",&n);
int arr[n];
printf("enter the 5 element");
for(int i=0; i<n; i++)
{
scanf("%d",arr[i]);
}
printf("the arr element are.....");
for(int i=0; i<=n; i++)
{
    printf("%d",arr[i]);
}
return 0;
}