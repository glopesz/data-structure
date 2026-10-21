#include <locale.h>
#include <stdio.h>
#define MAX 100

// Define the stack structure
typedef struct {
  int items[MAX]; // Stack elements
  int top;        // Index of the top element
} Stack;

// Initialize the stack
void initializeStack(Stack *stack) { stack->top = -1; }

// Check whether the stack is empty
int isStackEmpty(Stack *stack) {
  if (stack->top == -1)
    return 1;
  else
    return 0;
}

// Check whether the stack is full
int isStackFull(Stack *stack) {
  if (stack->top == (MAX - 1))
    return 1;
  else
    return 0;
}

// Push an element
int push(Stack *stack, int value) {
  if (isStackFull(stack)) {
    printf("\nErro pilha cheia!");
    return -1;
  } else {
    stack->top++;
    stack->items[(stack->top)] = value;
    return stack->top;
  }
}

// Pop an element
int pop(Stack *stack) {
  if (isStackEmpty(stack)) {
    printf("\nErro pilha Vazia!");
    return -1;
  } else {
    int poppedValue = stack->items[stack->top];
    stack->top--;
    return poppedValue;
  }
}

// Print elements from index zero through the top
void printStack(Stack *stack) {
  printf("\n\n-------Pilha impressa como vetor-----\n");
  int i;
  for (i = 0; i <= stack->top; i++) {
    printf("%d, ", stack->items[i]);
  }
  printf("\n---------------------------------------");
}

// Return the top element
int getStackTop(Stack *stack) { return stack->items[stack->top]; }

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  Stack stack;
  initializeStack(&stack);
  printf("\nEmpilhando 8 com valor de topo %d", push(&stack, 8));
  printf("\nEmpilhando 10 com valor de topo %d", push(&stack, 10));
  printf("\nEmpilhando 5 com valor de topo %d", push(&stack, 5));
  printf("\nEmpilhando 25 com valor de topo %d", push(&stack, 25));
  printf("\n");
  printf("\nDesempilhou %d", pop(&stack));
  printf("\nDesempilhou %d", pop(&stack));
  printf("\n");
  printf("\nEmpilhando 7 com valor de topo %d", push(&stack, 7));
  printf("\nEmpilhando 93 com valor de topo %d", push(&stack, 93));
  printf("\nEmpilhando 17 com valor de topo %d", push(&stack, 17));
  printf("\nEmpilhando 43 com valor de topo %d", push(&stack, 43));
}
