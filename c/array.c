#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Maximum size of the queue

typedef struct Queue {
    int items[MAX];
    int front, rear;
} Queue;

// Initialize the queue
void initQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
int isEmpty(Queue* q) {
    return q->front == -1;
}

// Check if the queue is full
int isFull(Queue* q) {
    return (q->rear + 1) % MAX == q->front;
}

// Enqueue operation
void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->items[q->rear] = value;
}

// Dequeue operation
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int item = q->items[q->front];
    if (q->front == q->rear) {
        // Reset the queue after the last element is dequeued
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return item;
}

// Peek operation
int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->items[q->front];
}

// Main function to demonstrate the queue
int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Peek: %d\n", peek(&q));
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);  // This should show "Queue is full"

    while (!isEmpty(&q)) {
        printf("Dequeued: %d\n", dequeue(&q));
    }

    return 0;
}

