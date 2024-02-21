#include<stdio.h>
#include<stdlib.h>
int* selectionsort(int *arr,int n)
{  int min,j,temp;
    for(int i=0;i<n-1;i++)
    {
      min=i;
      j=i+1;
      while(j<n)
      {
        if(arr[min]>arr[j]){
            min=j;    
        }
        j++;
      }
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
    return arr;
}
int main()
{   int *arr;
int n;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter elements:\n");
getchar();
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    
}
arr=selectionsort(arr,n);
printf("sorted array is:\n");
for(int i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}

}
