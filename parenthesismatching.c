#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    char * arr;
    int size;
};
 int isempty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
  void push(struct stack *s,char x)
  {
    s->top=s->top+1;
    s->arr[s->top]=x;
  }
  void pop(struct stack * s)
  {
    s->top--;
  }
int main()
{   char * exp;
    struct stack *s;
    s->size=50;
    s->arr=(char *)malloc(s->size*sizeof(char));
    s->top=-1;
    printf("enter expression:");
    scanf("%s",&exp);
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(s,exp[i]);
        }
        else if(exp[i]==')')
        {   
            if(isempty(s))
        {
            printf("expression is invalid!!");
            return 0;
        }
        else{
            pop(s);
        }
        }   
    }
      if(s->top==-1)
      {
         printf("expression is valid");
         return 0; 
      }
      else{
        printf("expression is invalid!!");
        return -1;
      }
          
}
