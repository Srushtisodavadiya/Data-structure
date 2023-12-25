#include<stdio.h>
int binarysearch(int arr[],int size,int element)
{
   int mid,low,high;
   low=0;
   high=size-1;
   while(low<=high)
   {
    mid=(low+high)/2;
   if(arr[mid]==element)
   {
    return mid;
   }
   else if (arr[mid]<element)
   {
    low=mid+1;
   }
   else
   {
    high=mid-1;
   }
   }
   return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    int element=6;
    int searchIndex=binarysearch(arr,size,element);
    printf("the element is found at index %d",searchIndex);
}
