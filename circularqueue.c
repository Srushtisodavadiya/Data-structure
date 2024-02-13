#include<stdio.h>
#include<stdlib.h>
struct cqueue{
    int size;
    int f;
    int r;
    int * arr;
};
int isfull(struct cqueue *q)
{
    if ((q->r+1)%q->size==q->f)
    {
    return 1;
    }
    else
    {
        return 0;
    }   
}
int isempty(struct cqueue *q)
{
    if (q->r==-1&&q->f==-1)
    {  
    return 1;
    }
    else
    {
        return 0;
    } 
}
 void enqueue(struct cqueue * q,int x)
 {
    if(isfull(q))
    {
        printf("queue is overflow\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        if(q->f==-1)
        {
            q->f=0;
        }
        q->r=x;
    }
 }
 void dequeue(struct cqueue * q)
 {
    if(isempty(q))
    {
        printf("queue is underflow\n");
    }
    else{
        if(q->r==q->f){
            q->r=q->f=-1;
        }
       else{ q->f=(q->f+1)%q->size;
       }
    }
 }
int main()
{    struct cqueue *q;
    q->size=5;
    q->f=q->r=-1;
    q->arr=(int *)malloc(sizeof(int)*q->size);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",q->arr[i]);
    }
    dequeue(q);
    dequeue(q);
    enqueue(q,6);
    enqueue(q,7);
   for(int i=0;i<5;i++)
    {
        printf("%d\n",q->arr[i]);
    }
 return 0;
}
