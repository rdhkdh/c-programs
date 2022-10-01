#include<stdio.h>
#include<stdlib.h> //for malloc
#include<stdbool.h> //for bool
#define stk_size 10
struct mystack{
    int arr[stk_size];
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
void push(struct mystack* s, int x) //defining pointer to object
{
    if(isFull(s))
        printf("Stack is full. Cannot push item.\n"); //print error
    else{
        s->top = s->top +1;
        s->arr[s->top] = x;
    }
}
int pop(struct mystack* s)
{
    if(isEmpty(s))
        printf("Stack is empty. Cannot pop item.\n");
    else{
        int x= s->arr[s->top];
        s->top = s->top -1;
        return x;
    }
}

int main()
{
    struct mystack stack1; //defined object. You could even define pointer object.
    stack1.top=-1;
    push(&stack1,2);
    push(&stack1,3);
    push(&stack1,5);
    push(&stack1,7);
    push(&stack1,11);
    push(&stack1,13);
    for(int i=0;i<6;i++) { printf("%d ",stack1.arr[i]); }
    printf("\n");
    pop(&stack1);
    pop(&stack1);
    printf("%d\n",stack1.top);
    for(int i=0;i<4;i++) { printf("%d ",stack1.arr[i]); }
    printf("\n");
    push(&stack1,17);
    for(int i=0;i<5;i++) { printf("%d ",stack1.arr[i]); }
    printf("\n");
}