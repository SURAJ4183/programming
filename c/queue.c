#include <stdio.h>
#define SIZE 5  // Maximum size of queue

int queue[SIZE], front = -1, rear = -1;

// Function to insert an element into the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is Full!\n");
        return;
    }
    if (front == -1) front = 0;  // If inserting the first element
    queue[++rear] = value;
    printf("Inserted: %d\n", value);
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Deleted: %d\n", queue[front++]);
    if (front > rear) front = rear = -1;  // Reset queue if empty
}

// Function to display queue elements
void display() {
    if (front == -1) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
