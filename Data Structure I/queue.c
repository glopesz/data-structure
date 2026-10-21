#include <locale.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

struct Queue {
  int capacity;
  float *items;
  int front;
  int rear;
  int itemCount;
};

void createQueue(struct Queue *queue, int capacity) {
  queue->capacity = capacity;
  queue->items = (float *)malloc(queue->capacity * sizeof(float));
  queue->front = 0;
  queue->rear = -1;
  queue->itemCount = 0;
}

void enqueue(struct Queue *queue, int value) {
  if (queue->rear == queue->capacity - 1)
    queue->rear = -1;
  queue->rear++;
  queue->items[queue->rear] = value;
  queue->itemCount++;
}

int isQueueFull(struct Queue *queue) {
  return (queue->itemCount == queue->capacity);
}

int isQueueEmpty(struct Queue *queue) { return (queue->itemCount == 0); }

float dequeue(struct Queue *queue) {
  float value = queue->items[queue->front++];
  if (queue->front == queue->capacity)
    queue->front = 0;
  queue->itemCount--;
  return value;
}

void displayQueue(struct Queue *queue) {
  int count, i;
  for (count = 0, i = queue->front; count < queue->itemCount; count++) {
    printf("%.2f\t", queue->items[i++]);
    if (i == queue->capacity)
      i = 0;
  }
  printf("\n\n");
}

void main(void) {
  setlocale(LC_ALL, "Portuguese");

  int option, capacity;
  float value;
  struct Queue queue;

  printf("\nInforme a Capacidade da Fila? ");
  scanf("%d", &capacity);
  createQueue(&queue, capacity);
  // Display the menu
  while (1) {
    printf("\n1 - Inserir elemento\n2 - Remover elemento");
    printf("\n3 - Mostrar fila\n0 - Sair\n\nOpção? ");
    scanf("%d", &option);
    switch (option) {
    case 0:
      exit(0);
    case 1:
      if (isQueueFull(&queue)) {
        printf("\nFila cheia!\n\n");
      } else {
        printf("\nValor do elemento a ser inserido? ");
        scanf("%f", &value);
        enqueue(&queue, value);
      }
      break;
    case 2:
      if (isQueueEmpty(&queue)) {
        printf("\nFila vazia!\n\n");
      } else {
        value = dequeue(&queue);
        printf("\n%.2f removido com sucesso\n\n", value);
      }
      break;
    case 3:
      if (isQueueEmpty(&queue)) {
        printf("\nFila vazia!\n\n");
      } else {
        printf("\nConteúdo da fila => ");
        displayQueue(&queue);
      }
      break;
    default:
      printf("\nOpção inválida.\n\n");
    }
  }
}
