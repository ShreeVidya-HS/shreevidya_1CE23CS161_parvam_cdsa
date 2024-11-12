//stack=>FILO
//queue=>FIFO
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int data[5];
    int front,rear;
    }queue;
void initqueue(queue *q){
    q->front=-1;
    q->rear=-1;

}
int isEmpty(queue *q){
    return q->front==-1;
}

int isFull(queue *q){
    return q->rear==4;
}

void enqueue(queue *q,int x){
    if(isFull(q)){
        printf("queue overflow!\n");
        return;
    }
    
    if(isEmpty(q)){
        q->front=0;
    }
    q->data[++q->rear]=data;
}

void dequeue(queue *q){
    if(isEmpty(q)){
        printf("queue underflow!\n");
        return -1;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->data[++q->rear]=data;
}


    
