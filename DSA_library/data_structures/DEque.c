//double ended queue
#include<stdio.h>
#define q_size 10

struct myqueue{
    int front;
    int rear;
    int arr[q_size];
};

int incrementRear(struct myqueue* q)
{
    if(q->rear==q_size-1) {q->rear=0;}
    else {q->rear= q->rear+ 1;}
    return q->rear;
}
int incrementFront(struct myqueue* q)
{
    if(q->front==q_size-1) {q->front=0;}
    else {q->front= q->front+ 1;}
    return q->front;
}
void enqueue(struct myqueue* q, int x)
{
    incrementRear(q);
    if(q->rear==q->front) { printf("Circular queue is full. Cannot perform enqueue operation.\n"); }
    else { q->arr[q->rear]=x; }
}
int dequeue(struct myqueue* q)
{
    if(q->front==q->rear) {printf("Circular queue is emoty. Cannot perfrom dequeue operation.\n");}
    incrementFront(q);
    return q->arr[q->front];
}
int main()
{
    
}