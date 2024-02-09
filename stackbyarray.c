#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int Top;
    int * arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->Top==-1){
        return 1;
    }
    else {
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->Top==ptr->size-1){
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
   struct stack *s;
   s->size=80;
   s->Top=-1;
   s->arr=(int *)malloc(s->size*sizeof(int));
//    push operation
    s->arr[0]=0;
    s->Top++;
    s->arr[1]=1;
    s->Top++;
    s->arr[2]=2;
    s->Top++;
    s->arr[3]=3;
    s->Top++;
   if(isEmpty(s)){
    printf("stack is empty");
   }
    else{
    printf("stack is not empty");
    }
   
}

