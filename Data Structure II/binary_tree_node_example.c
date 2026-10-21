#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int value;
  struct Node *left;
  struct Node *right;
} Node;

// Function declaration
Node *createNode(int value);
int main() {
  setlocale(LC_ALL, "Portuguese");
  Node *root = NULL;

  root = createNode(5);
  root->left = createNode(2);
  root->right = createNode(10);
  root->left->right = createNode(4);

  printf("\nO valor guardado no nó raiz é %d", root->value);
  printf("\nO valor guardado à esquerda é %d", root->left->value);
  return 0;
}
// Create a tree node
Node *createNode(int value) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->value = value;
  node->left = NULL;
  node->right = NULL;
  return node;
}
