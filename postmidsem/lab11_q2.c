#include<stdio.h>
#define SIZE 20
int stack[SIZE];
int top=-1;

int isEmpty()
{
    if(top==-1) {return 1;}
    else {return 0;} 
}
int isFull()
{
    if (top==SIZE) {return 1;}
    else {return 0;}
}
int pop(int arr[])
{
    if(!isEmpty())
}

void push(int item)
{
    if(isFull()) {printf("stack is full\n");}
    else {
        top=top+1;
        stack[top]=item;
    }
}


int main()
{
    char str[SIZE];
    scanf("%s",&str);
    int i=0;
    char symbol;
    while(str[i]!=NULL)
    {
         if(str[i]=='(' || str[i]=='{' || str[i]=='[' )
            {
                pop(stack);
            }
    }

}