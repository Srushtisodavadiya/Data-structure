#include<stdio.h>
#include<stdlib.h>
int* insertionsort(int *arr,int n)
{   
    int temp,j;
for(int i=1;i<=n-1;i++)
{    temp=arr[i];
     j=i-1;
    while(temp<arr[j]&&j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    if(j==-1)
    {
        arr[0]=temp;
    }
    else{
    arr[j+1]=temp;
    }
}
    return arr;
}
int main()
{
int*arr;
int n;
printf("enter number of elemenets:");
scanf("%d",&n);
arr=(int*)malloc(sizeof(int)*n);
printf("enter elemenets:\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
arr=insertionsort(arr,n);
printf("sorted array is:\n");
for(int i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
}
