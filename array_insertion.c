#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
void index_insertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    else{
        for (int i = size-1; i >=index; i--)
        {
          arr[i+1] =arr[i] ;
        }
        arr[index]=element;
        return 1;
            }
}
int main()
{
    int arr[100]={1,2,6,78,99};
    int size=5, element=45 ,index=3;
    display(arr,size);
    
    index_insertion(arr,size,element,100,index);
    size +=1;
    display(arr,size);
}
