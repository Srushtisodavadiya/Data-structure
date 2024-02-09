#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void clinkedlist_traversal(struct Node *head)
{
    struct Node *p=head;
    while(p->next!=head)
    {
       printf("%d\n",p->data);
       p=p->next;
    }
    printf("%d\n",p->data);
}
struct Node* clinkedlist_insertionAtFirst(struct Node *head,int data)
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head->next;
    ptr->data=data;
    while(p->next!=head)
    {
       p= p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return ptr;
}
int main()
{ struct Node * head;
 struct Node * second;
 struct Node * third;
struct Node * fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    head->data=2;
    head->next=second;
    second->data=4;
    second->next=third;
    third->data=6;
    third->next=fourth;
    fourth->data=8;
    fourth->next=head;
    clinkedlist_traversal(head);
    struct Node * head1=clinkedlist_insertionAtFirst(head,0);
    printf("linkedlist after insertion:\n");
    clinkedlist_traversal(head1);
    return 0;  
}
