#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int * arr;
};
int isfull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct queue *q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int dequeue(struct queue *q)
{   int x;
    if(isempty(q))
    {
        printf("queue underflow");
    }
    else{
        q->f++;
        x=q->f;
        
    }
}
void enqueue(struct queue *q,int x)
{
    if(isfull(q))
    {
        printf("queue overflow");
    }
    else{
        q->r++;
        x=q->arr[q->r];
    }
}
int main()
{    
    struct queue *q;
     q->size=5;
     q->f=-1;
     q->r=-1;
     q->arr=(int*)malloc(sizeof(int)*q->size);
     enqueue(q,1);
     enqueue(q,2);
     enqueue(q,3);
     enqueue(q,4);
     enqueue(q,5);
     enqueue(q,6);
     for(int i=0;i==q->r;i++)
     {
        printf("%d\n",q->arr[i]);
     }
      printf("%d",dequeue(q));
      for(int i=0;i==q->r;i++)
     {
        printf("%d\n",q->arr[i]);
     }
     return 0;
}
