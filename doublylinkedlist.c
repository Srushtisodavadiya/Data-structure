#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};
void Linkedlist_Traversalnext(struct Node * n1)
{   struct Node *p=n1;
 while(p->next!=NULL){
  printf("%d\n",p->data);
  p=p->next;
};
  printf("%d\n",p->data);
}
void Linkedlist_Traversalprev(struct Node * n1)
{   struct Node *p=n1;
 while(p->next!=NULL){
  p=p->next;
};
while(p->prev!=NULL){
  printf("%d\n",p->data);
  p=p->prev;
};
  printf("%d\n",p->data);
}
int main()
{     struct Node * n1;
     struct Node * n2;
     struct Node * n3;
     struct Node * n4;
     n1=(struct Node *)malloc(sizeof(struct Node));
     n2=(struct Node *)malloc(sizeof(struct Node));
     n3=(struct Node *)malloc(sizeof(struct Node));
     n4=(struct Node *)malloc(sizeof(struct Node));
        n1->prev=NULL;
        n1->data=1;
        n1->next=n2;
        n2->prev=n1;
        n2->data=2;
        n2->next=n3;
        n3->prev=n2;
        n3->data=3;
        n3->next=n4;
        n4->prev=n3;
        n4->data=4;
        n4->next=NULL;
        printf("Traversal using next pointer:\n");
        Linkedlist_Traversalnext(n1);
        printf("Traversal using prev pointer:\n");
        Linkedlist_Traversalprev(n1);
}

