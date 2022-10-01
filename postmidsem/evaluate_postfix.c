#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
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
    stack1.top=-1;

    int i=0;
    while(exp[i]!='\0')
    {
        switch(exp[i])
        {
            case '+': 
                int y1= pop(&stack1);
                int y2= pop(&stack1);
                int z1= y1+y2;
                push(&stack1, z1);
                break;
            case '-':
                int y3=  pop(&stack1);
                int y4=  pop(&stack1);
                int z2= y3-y4;
                push(&stack1, z2);
                break;
            case '*':
                int y5=  pop(&stack1);
                int y6=  pop(&stack1);
                int z3= y5*y6;
                push(&stack1, z3);
                break;
            case '/':
                int y7=  pop(&stack1);
                int y8=  pop(&stack1);
                int z4= y7/y8;
                push(&stack1, z4);
                break;
            default: 
                push(&stack1,exp[i]); 
                break;
        }
        
        i++;
    }

    printf("%c\n",pop(&stack1));
}