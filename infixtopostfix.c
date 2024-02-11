#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char * arr;
};
void push(struct stack *s,char x)
{
    s->top++;
    s->arr[s->top]=x;
}
char pop(struct stack *s)
{   char x;
   x=s->arr[s->top];
    s->top--;
   return x;
}
int main()
{
    char infix[50],postfix[50];
    int j=0;
    struct stack *s;
 s->size=50;
 s->arr=(char *)malloc(sizeof(char)*s->size);
 s->top=-1;
    printf("enter infix expression:");
    scanf("%s",infix);
     for(int i=0;infix[i]!='\0';i++)
    {   
         
          if(infix[i]=='+'|| infix[i]=='-')
          { 
            while(s->arr[s->top]=='+'||s->arr[s->top]=='-'||s->arr[s->top]=='*'||s->arr[s->top]=='/')
            {
                postfix[j]=pop(s);j++;
            }
            push(s,infix[i]) ;
          }
          else if(infix[i]=='*'|| infix[i]=='/')
          { 
            while(s->arr[s->top]=='*'||s->arr[s->top]=='/')
            {
                postfix[j]=pop(s);j++;
            }
            push(s,infix[i]);
          }
          else if(infix[i]=='(')
          {
            push(s,infix[i]);
          }    
        
        else if(infix[i]==')')
        {
            while(s->arr[s->top]!='(')
            {
                postfix[j]=pop(s);j++;
            }
            pop(s);
        }
        else{
            postfix[j]=infix[i];j++;
        }
    }
    while(s->top!=-1)
    {
    postfix[j]=pop(s);j++;
    }
    printf("%s",postfix);
}
