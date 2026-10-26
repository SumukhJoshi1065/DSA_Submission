#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node* next;
};

struct Node* top = NULL;
struct Node* front = NULL;
struct Node* rear = NULL;

void push(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

if (newNode == NULL) {
printf("Memory allocation failed\n");
return;
}else{
newNode->data = value;
newNode->next = top;
top = newNode;
printf("Pushed %d onto the stack\n", value);}
}

void pop() {
if (top == NULL) {
printf("Stack is empty \n");
return;
}else
{
struct Node *temp=top;
printf("Popped %d from the stack\n", top->data);
top = top->next;
free(temp);
}}

void display()
{
if (top == NULL)
{
printf("Stack is empty\n");
}
else
{
struct Node* temp = top;
printf("Stack elements: ");
while (temp != NULL)
{
printf("%d ", temp->data);
temp = temp->next;
} printf("\n");
}
}

void enqueue(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

if (newNode == NULL) {
printf("Memory allocation failed\n");
return;
}else{
newNode->data = value;
newNode->next = NULL;

if (front == NULL) {
front = newNode;
rear = newNode;
}else{
rear->next = newNode;
rear = newNode;
}
printf("Enqueued %d into the queue\n", value);}
}

void dequeue() {
if (front == NULL) {
printf("Queue is empty\n");
return;
}else
{
struct Node* temp = front;
printf("Dequeued %d from the queue\n", front->data);
front = front->next;

if (front == NULL) {
rear = NULL;
}

free(temp);
}}

void displayQueue()
{
if (front == NULL)
{
printf("Queue is empty\n");
}
else
{
struct Node* temp = front;
printf("Queue elements: ");
while (temp != NULL)
{
printf("%d ", temp->data);
temp = temp->next;
} printf("\n");
}
}

int main()
{
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