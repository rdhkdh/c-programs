#include<stdio.h>
#include<stdbool.h>
#define stk_size 50

struct mystack{
    char arr[stk_size];
    int top;
};

bool isEmpty(struct mystack* s)
{
    if(s->top==-1) {return 1;}
    else {return 0;}
}
bool isFull(struct mystack* s)
{
    if(s->top==stk_size-1) {return 1;}
    else {return 0;}
}
void push(struct mystack* s,char x)
{
    if(isFull(s)) {printf("stack is full, cannot push item.\n");}
    else{
        s->top=s->top+1;
        s->arr[s->top]=x;
    }
}
char pop(struct mystack* s)
{
    if(isEmpty(s)) {printf("stack is empty. No item to pop.\n");}
    else{
        char y= s->arr[s->top];
        s->top=s->top-1;
        return y;
    }
}

void main()
{
    char exp[50];
    scanf("%s",&exp);
    
    struct mystack stack1;
    stack1.top=-1; //never forget!!

    int i=0;
    while(exp[i]!='\0')
    {
        if( exp[i]=='+' || exp[i]=='/' || exp[i]=='*' || exp[i]=='-' )
        {
            push(&stack1,exp[i]);
        }
        else { printf("%c",exp[i]); }
        i++;
    }

    while(stack1.top!=-1)  
    { 
        printf("%c",pop(&stack1)); 
    }
    printf("\n");
}