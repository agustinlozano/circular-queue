#include "cq.h"

char * push(Node **front, Node **rear, int *count) {
  Node *newnode = NULL;

  if (*front == NULL && *rear == NULL) {
    printf("Se agrega el primer elemento\n");

    newnode = (Node *)malloc(sizeof(Node));

    (*front) = newnode;
    (*rear) = newnode;

    (*front) -> next = (*rear);
    makeLiksToPush(rear, newnode);

    addContent(*rear);

    *count = *count + 1;

  } else if (*count == MAX) {
    printf("La cola esta llena, no puedes agragar otro elemento\n\n");

  } else {
    printf("Se agrega un elemento mas a la lista\n");

    newnode = (Node *)malloc(sizeof(Node));

    (*rear) = newnode;
    makeLiksToPush(rear, newnode);

    addContent(*rear);

    *count = *count + 1;
  }

  printf("\nDireccion de memoria adentro: %p, %p\n", front, rear);

  return (*rear)->data;
}

void makeLiksToPush(Node **rear, Node *newndode) {
  Node *aux = NULL;

  aux = (*rear);
  aux -> next = newndode;
}

void addContent(Node *n) {
  n -> data = (char *)malloc(20);

  printf("\nAgrege el contenido del nodo: ");

  scanf(" %s", n->data);
}