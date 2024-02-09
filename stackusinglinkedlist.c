#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node* Top=NULL;
 void linkedlisttraversal(struct Node * ptr)
 {
    while(ptr != NULL)
    {
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
 }
 int isFull(struct Node * Top)
 {
    struct Node * p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else {
        return 0;
    }
 }
 int isEmpty(struct Node * Top)
 {
    if(Top==NULL){
        return 1;
    }
    else{
        return 0;
    }
 }
struct Node* push(struct Node * Top,int x)
{
    if(isFull(Top)){
        printf("stack overflow!!");
    }
    else{
        struct Node * n=(struct Node *)malloc(sizeof(struct Node));
        n->data=x;
        n->next=Top;
        Top=n; 
        return Top;
    }
}
int peek(int pos,struct Node * tp){
    struct Node *p=tp;
    for(int i=0;i<pos-1 && p!=NULL;i++){
      p=p->next;
    }
    if(p!=NULL)
    {
        return p->data;
    }
    else{
        return -1;
    }
}
int stacktop(struct Node * tp){
   return tp->data;
}
int pop(struct Node * tp)
{
    if(isEmpty(tp)){
        printf("stack underflow!!");
    }
    else{
        struct Node * n =tp;
        Top=tp->next;
        int x=n->data;
        free(n);
        return x;
    }
}
int main()
{
    Top=push(Top,1);
    Top=push(Top,2);
    Top=push(Top,3);
    Top=push(Top,4);
   int element;
   element = pop(Top);
   printf("popped element is %d\n",element);
   linkedlisttraversal(Top);
   printf("%d",peek(3,Top));
   return 0;
    
}
