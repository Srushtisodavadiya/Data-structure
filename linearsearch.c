#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }  
    }
    return -1;
}
int main()
{   int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    int element=5;
    int searchIndex=linearsearch(arr,size,element);
printf("the element is found at index %d",searchIndex);
    return 0;
    

}
