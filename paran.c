#include<stdio.h>
#include<stdlib.h>
struct stack{
int top;
int size;
char *arr;
};
int isempty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack*ptr,char ele)
{
    
    if(isfull(ptr)){
        printf("stack is overflow\n");
    }
    ptr->top++;
ptr->arr[ptr->top]=ele;
}
char  pop(struct stack*ptr)
    {
      if(isempty(ptr))
      {
        printf("stack underflow\n");
      }
      char val=ptr->arr[ptr->top];
      ptr->top--;
      return val;
    }
      
      int match(char a,char b)
      {
        if(a=='('&&b==')')
        {
            return 1;
        }
        if(a=='['&&b==']')
        {
            return 1;
        }
        if(a=='{'&&b=='}')
        {
            return 1;
        }
        return 0;
      }
int paranthesis(char*exp)
{
    struct stack*st;
    st->size=100;
st->top=-1;
st->arr=(char*)malloc(st->size*sizeof(char));
char popped_ch;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        {
  push(st,exp[i]);
        }
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}'){
       if(isempty(st))
       {
        return 0;
       }
      /* pop(st);
        }
    }
    if(isempty(st))
    {
        return 1;
    }
    else{
        return 0;
    }*/
    
    popped_ch=pop(st);
    if(!match(popped_ch,exp[i]))
    {
        return 0;
    }
    
    }
 }
 if(isempty(st))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char* exp ="(7-11+{23-[33+0])";
    if(paranthesis(exp))
    {
        printf("matching OR balanced paranthesis\n");
    }
    else{
        printf("not matching OR unbalanced paranthesis\n");
    }
    return 0;
}