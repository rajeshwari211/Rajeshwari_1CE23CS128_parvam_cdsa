#include<stdio.h>
int binarysearch(int arr[],int size, int target){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid = left+(right-left);
        if (arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        } else{
            right=mid-1;
        }
    }
return-1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=8;
    int result=binarysearch(arr, sizeof(arr)/sizeof(arr[0]),target);
    printf("element found at index:%d\n",result);
    return 0;
}