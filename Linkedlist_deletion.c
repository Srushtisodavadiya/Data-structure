#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void LinkedlistTravesal(struct Node *ptr)
{   while(ptr != NULL)
{
    printf("Element :%d\n",ptr->data);
    ptr=ptr->next;
}
}
struct Node * DeleteFirst(struct Node * head)
{
    struct Node * ptr =head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node * DeleteLast(struct Node * head)
{
    struct Node * p =head;
    // struct Node * q =
   while((p->next)->next!=NULL)
   {
    p=p->next;
   }
   struct Node * q=p->next;
   p->next=NULL;
   free(q);
    return head;
}
struct Node * DeleteAtIndex(struct Node * head,int index)
{
    struct Node * p =head;
    for (int i = 0; i < index-1; i++)
    {
       p=p->next; 
    }
    struct Node * q = p->next;
    p->next=q->next;
    free(q);
    return head;
}
struct Node * DeleteAtValue(struct Node * head,int value)
{   
    struct Node * p =head;
    struct Node * q =head->next;
    while(q->next!=NULL && q->data!=value)
    {
      p=p->next;
      q=q->next;  
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}
int main()
{
   struct Node * head;
   struct Node * second;
   struct Node * third;
   head=(struct Node *)malloc(sizeof(struct Node));
   second=(struct Node *)malloc(sizeof(struct Node));
   third=(struct Node *)malloc(sizeof(struct Node));
   head->data=7;
   head->next=second;
   second->data=45;
   second->next=third;
   third->data=56;
   third->next=NULL;
   printf("Linked list before deletion:\n");
   LinkedlistTravesal(head);
//    head = DeleteFirst(head);
    //   head= DeleteAtIndex(head,1);
    // head=DeleteLast(head);
    head=DeleteAtValue(head,45);
   printf("Linked list after deletion\n");
   LinkedlistTravesal(head);
   return 0;
}

