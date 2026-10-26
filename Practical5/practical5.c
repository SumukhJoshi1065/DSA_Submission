#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int queue[MAX];
int front = -1;
int rear = -1;

void push(int value) {
if (top == MAX - 1) {
printf("Stack Overflow. Cannot push %d\n", value);
} else {
top++;
stack[top] = value;
printf("Pushed %d to stack\n", value);
}
}

void pop() {
if (top == -1) {
printf("Stack underflow. Cannot pop\n");
} else {
printf("Popped %d from stack\n", stack[top]);
top--;
}
}

void display() {
if (top == -1) {
printf("Stack is empty\n");
} else {
printf("Stack elements: ");
for (int i = 0; i <= top; i++) {
printf("%d ", stack[i]);
}
printf("\n");
}
}

void enqueue(int value) {
if (rear == MAX - 1) {
printf("Queue Overflow. Cannot enqueue %d\n", value);
} else {
if (front == -1) {
front = 0;
}
rear++;
queue[rear] = value;
printf("Enqueued %d to queue\n", value);
}
}

void dequeue() {
if (front == -1 || front > rear) {
printf("Queue underflow. Cannot dequeue\n");
} else {
printf("Dequeued %d from queue\n", queue[front]);
front++;
}
}

void displayQueue() {
if (front == -1 || front > rear) {
printf("Queue is empty\n");
} else {
printf("Queue elements: ");
for (int i = front; i <= rear; i++) {
printf("%d ", queue[i]);
}
printf("\n");
}
}

int main() {
push(1);
push(2);
push(3);
push(4);
push(5);
display();
pop();

enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
displayQueue();
dequeue();

return 0;
}