#include <stdio.h>
#include <stdlib.h>
#include "process.h"

// A linked list (LL) node to store a queue entry
typedef struct QNode {
    Process *process;
    struct QNode* next;
}QNode;

typedef struct Queue {
    struct QNode *front, *rear;
}Queue;

QNode* newNode(Process *p)
{
    QNode* temp = (QNode*)malloc(sizeof(QNode));
    temp->process = p;
    temp->next = NULL;
    return temp;
}

Queue* createQueue()
{
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue(Queue* q, Process *p)
{
    QNode* temp = newNode(p);

    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
}

void deQueue(Queue* q)
{
    if (q->front == NULL)
        return;

    QNode* temp = q->front;

    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
}
