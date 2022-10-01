#include<stdio.h>
#define q_size 6

struct myqueue{
    int front;
    int rear;
    int arr[q_size];
};

int incrementRear(struct myqueue* q)
{
    if(q->rear==q_size-1) {q->rear=0;}
    else{ q->rear= q->rear +1;}
    return q->rear;
}
int incrementFront(struct myqueue* q)
{
    if(q->front==q_size-1) {q->front=0;}
    else{ q->front= q->front +1;}
    return q->front;
}
void enqueue(struct myqueue* q, int x)
{
    incrementRear(q);
    if(q->rear==q->front) {printf("circular queue is full. Cannot perform enqueue operation.\n");}
    else{
        q->arr[q->rear]=x;
    }
}
int dequeue(struct myqueue* q)
{
    if(q->rear==q->front) {printf("circular queue is empty. Cannot perform dequeue operation.\n"); return 0;}
    incrementFront(q);
    return q->arr[q->front]; //the value at q->arr[q->front] will still be there at that place, but we will treat it as garbage.
}

int main()
{
    struct myqueue queue1;
    queue1.front= q_size-1;
    queue1.rear= q_size-1;

    enqueue(&queue1, 12);
    enqueue(&queue1, 14);
    enqueue(&queue1, 17);
    enqueue(&queue1, 22);
    enqueue(&queue1, 45);
    dequeue(&queue1); //removes 12
    dequeue(&queue1); //removes 14
    dequeue(&queue1); //removes 17
    dequeue(&queue1); //removes 22
    dequeue(&queue1); //removes 45
    dequeue(&queue1); //error
    
    printf("%d %d",queue1.front,queue1.rear);

    // for(int i=incrementFront(&queue1);i<=queue1.rear;i++)
    // {
    //     printf("%d ",queue1.arr[i]);
    // }
    // printf("\n");

}