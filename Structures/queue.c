// In a data structure called queuenthe addition of new element takes place at the end (called rear of the queue) and the deletion of existing element takes place at the beginning (called front of the queue).
// Write a program to implement a queue using a linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a queue node
struct Node {
    int data;
    struct Node* next;
};

// Define the structure for the queue
struct Queue {
    struct Node *front, *rear;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to create a queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to enqueue an element to the queue
void enqueue(struct Queue* q, int data) {
    struct Node* temp = newNode(data);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        printf("%d enqueued to queue\n", data);
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
    printf("%d enqueued to queue\n", data);
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue underflow\n");
        exit(1);
    }
    struct Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    int dequeued = temp->data;
    free(temp);
    return dequeued;
}

// Function to display the queue elements
void display(struct Queue* q) {
    struct Node* temp = q->front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Queue* q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("Queue elements are: ");
    display(q);

    printf("%d dequeued from queue\n", dequeue(q));
    printf("Queue elements are: ");
    display(q);

    return 0;
}