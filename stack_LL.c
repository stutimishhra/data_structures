#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

//typedef struct Node Node;

typedef struct Stack {
    Node* top;
}Stack;

//typedef struct Stack Stack;

void initializeStack(Stack* stack) {
    stack->top = NULL;
}

Node* createNode(int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

void push(Stack* stack, int newData) {
    Node* newNode = createNode(newData);
    newNode->next = stack->top;
    stack->top = newNode;
}

void pop(Stack* stack) {
    if (stack->top == NULL)
        printf("Underflow!\n");
    else 
    {
        Node* temp = stack->top; // current node to temp variable
        stack->top = stack->top->next;
        free(temp);
    }
}

void printStack(Stack* stack) {
    Node* current = stack->top;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main() {
    Stack stack;
    initializeStack(&stack);
    
    printf("Pushing elements onto stack:\n");
    // pushing elements into stack
    push(&stack, 1);
    push(&stack, 11);
    push(&stack, 111);
    push(&stack, 1111);
    
    printf("Current stack elements are:\n");
    printStack(&stack);
    
    printf("Popping out elements:\n");
    pop(&stack);
    pop(&stack);
    
    printf("Current stack elements after popping:\n");
    printStack(&stack);

    return 0;
}
