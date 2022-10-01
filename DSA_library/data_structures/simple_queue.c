#include<stdio.h>
#include<stdbool.h>
#define q_size 10

struct myqueue{
    int front;
    int rear;
    int arr[q_size];
};

bool isEmpty(struct myqueue* q)
{
    if(q->rear < q->front) {return 1;}
    else {return 0;}
}
bool isFull(struct myqueue* q)
{
    if(q->rear==q_size-1) {return 1;}
    else{return 0;}
}
void insert(struct myqueue* q, int x)
{
    if(isFull(q))
        printf("queue is full. Cannot insert item.\n");
    else{
        q->rear= q->rear+1;
        q->arr[q->rear]=x;
    }
}
int delete(struct myqueue* q)
{
    if(isEmpty(q))
        printf("queue is empty. No item to delete.\n");
    else{
        int x= q->arr[q->front];
        q->front= q->front +1;
        return x;
    }
}

int main()
{
    struct myqueue queue1;
    queue1.rear=-1;
    queue1.front=0;

    insert(&queue1,10);
    insert(&queue1,14);
    insert(&queue1,23);
    insert(&queue1,38);
    delete(&queue1);
    for(int i= queue1.rear;i>=queue1.front;i--)
    {
        printf("%d\n",queue1.arr[i]);
    }
}