#include<stdio.h>
int main()
{
    int a[]={1,2,6,7,8};
    int*ptr=a;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n i++)
    {
    printf("%d\n",*ptr);
    ptr++;
}
printf("%d\n",*(ptr+1));
return 0;
}
