#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int top;
    int size;
    char * arr;
};
void push(struct stack *s,char x)
{
    s->top++;
    s->arr[s->top]=x;
}
void pop(struct stack *s)
{ 
  s->top--;  
}
int main()
{
    char exp[50];
    struct stack *s;
    s->size=50;
    s->arr=(char*)malloc(sizeof(char)*s->size);
    s->top=-1;
    printf("enter expression:");
    scanf("%s",exp);
    for(int i=0;exp[i]!='\0';i++)
    {
      if(exp[i]=='(' || exp[i]=='{'|| exp[i]=='[')
      {
        push(s,exp[i]);
      } 
      else if(exp[i]==')' || exp[i]=='}'|| exp[i]==']')
      {
        if(exp[i]==')')
        {
            if(s->arr[s->top]=='(')
            {
              pop(s);
            }
        }
        if(exp[i]=='}')
        {
            if(s->arr[s->top]=='{')
            {
              pop(s);
            }
        }
        if(exp[i]==']')
        {
            if(s->arr[s->top]=='[')
            {
              pop(s);
            }
        }
      } 
    } 
   if(s->top==-1)
   {
     printf("expression is valid");
   }
   else{
    printf("expression is invalid");
   }
}
