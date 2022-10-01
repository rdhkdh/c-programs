#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define stk_size 100

struct mystack{
    char arr[stk_size];
    int top;
};

bool isEmpty(struct mystack* s)
{
    if(s->top==-1)
        return 1;
    else{return 0;}
}
bool isFull(struct mystack* s)
{
    if(s->top==stk_size-1)
        return 1;
    else{return 0;}
}
void push(struct mystack* s, char x) //defining pointer to object
{
    if(isFull(s))
        printf("Stack is full. Cannot push item.\n"); //print error
    else{
        s->top = s->top +1;
        s->arr[s->top] = x;
    }
}
char pop(struct mystack* s)
{
    if(isEmpty(s))
        printf("Stack is empty. Cannot pop item.\n");
    else{
        char x= s->arr[s->top];
        s->top = s->top -1;
        return x;
    }
}

int main()
{
    char expression[100];
    scanf("%s",expression);
    
    
    int counter=0,left_count=0,right_count=0;
    int i=0;
    while(expression[i]!='\0')
    {
        if (expression[i]=='(' || expression[i]=='{' || expression[i]=='[' )
            left_count++;
        if (expression[i]==')' || expression[i]=='}' || expression[i]==']' )
            right_count++;
        counter=left_count-right_count;
        if(counter<0) {printf("invalid expression\n"); return 0; }
        i++;
    }
    if(counter>0) {printf("invalid expression\n"); return 0; }


    struct mystack stack1;
    stack1.top=-1;
    int j=0;
    while(expression[j]!='\0')
    {
        if(expression[j]=='(' || expression[j]=='{' || expression[j]=='[' )
            push(&stack1,expression[j]);
        if(expression[j]==')' || expression[j]=='}' || expression[j]==']' )
            {
                if(isEmpty(&stack1)) { printf("invalid expression\n"); return 0; }
                else{
                    char y= pop(&stack1);
                    if(expression[j]==')'&& y!='(') { printf("invalid expression\n"); return 0; }
                    if(expression[j]=='}'&& y!='{') { printf("invalid expression\n"); return 0; }
                    if(expression[j]==']'&& y!='[') { printf("invalid expression\n"); return 0; }
                }
            }
        j++;
    }
    if(isEmpty(&stack1)) {printf("valid expression\n");}
    else {printf("invalid expression\n");}
    return 0;
}

