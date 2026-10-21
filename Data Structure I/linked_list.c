#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LinkedListNode {
  int value;
  struct LinkedListNode *next;
} LinkedListNode;

void initializeList(LinkedListNode **list);
void insertListValue(LinkedListNode **list, int value);
int countListElements(LinkedListNode **list, int count);
void displayList(LinkedListNode **list);
void clearList(LinkedListNode **list);
void removeListValue(LinkedListNode **list, int targetValue);

void main(void) {
  setlocale(LC_ALL, "Portuguese");
  LinkedListNode *list;
  initializeList(&list);
  insertListValue(&list, 12);
  insertListValue(&list, 5);
  insertListValue(&list, 10);
  insertListValue(&list, 3);
  displayList(&list);
  printf("\nA lista possui %d itens.\n", countListElements(&list, 0));
  removeListValue(&list, 5);
  displayList(&list);
}

void initializeList(LinkedListNode **list) {
  *list = NULL;
  printf("\nLista inicializada.\n");
}

void insertListValue(LinkedListNode **list, int value) {
  if (*list == NULL) {
    *list = (LinkedListNode *)malloc(sizeof(LinkedListNode));
    (*list)->value = value;
    (*list)->next = NULL;
  } else {
    insertListValue(&((*list)->next), value);
  }
}

void displayList(LinkedListNode **list) {
  if (*list != NULL) {
    printf("%d, ", (*list)->value);
    if ((*list)->next != NULL)
      displayList(&((*list)->next));
    else
      printf("\n");
  } else {
    printf("\nLista vazia");
  }
}

int countListElements(LinkedListNode **list, int count) {
  if (*list != NULL) {
    countListElements(&((*list)->next), ++count);
  } else {
    return count;
  }
}

void clearList(LinkedListNode **list) {
  if (*list != NULL) {
    clearList(&((*list)->next));
    free(*list);
    (*list) = NULL;
  }
}

void removeListValue(LinkedListNode **list, int targetValue) {
  LinkedListNode *removedNode;
  if (*list != NULL) {
    if ((*list)->value == targetValue) {
      if ((*list)->next == NULL) {
        free(*list);
        (*list) = NULL;
      } else {
        removedNode = (*list);
        *list = (*list)->next;
        free(removedNode);
      }
    } else {
      removeListValue(&((*list)->next), targetValue);
    }
  } else {
    printf("\nO valor %d não foi encontrado!\n", targetValue);
  }
}
