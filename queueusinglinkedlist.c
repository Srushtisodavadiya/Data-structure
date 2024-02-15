#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
 struct Node*f=NULL;
    struct Node *r=NULL;
    
int isempty(){
  if(f==NULL)
  {
    return 1;
  }
  else{
    return 0;
  }
}
int isfull(){
    struct Node *n;
    if(n==NULL)
    {
      return 1;
    }
    else{
      return 0;
    }
}
void enqueue(int x)
{
  struct Node*n=(struct Node*)malloc(sizeof(struct Node));
  if(isfull())
  {
    printf("queue is full");
  }
  else{
    n->data=x;
    n->next=NULL;
    if(f==NULL)
    {  f=n;
        r=n;
    }
    else{
        r->next=n;
        r=n;
    }
  }
   
}
void dequeue()
{
    if(isempty())
    {
       printf("queue is empty");
    }
    else{
      struct Node *ptr;
      ptr=f;
      if(f==r)
    {
        f=NULL;
        r=NULL;
    }
    else{  
      f=f->next;
    }
      free(ptr);
    }
}
void linkedlisttravesal(struct Node *ptr)
{
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}
int main()
{   
   
   enqueue(1);
   enqueue(2);
   enqueue(3);
   enqueue(4);
   enqueue(5);
  linkedlisttravesal(f);
   dequeue();
   dequeue();
  linkedlisttravesal(f);
return 0;

}
