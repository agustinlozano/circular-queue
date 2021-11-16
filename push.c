#include "cq.h"

char * push(Node *front, Node *rear, int *count) {
  Node *newnode = NULL;

  if (front == NULL && rear == NULL) {
    printf("Se agrega el primer elemento\n");

    newnode = (Node *)malloc(sizeof(Node));

    front = newnode;
    rear = newnode;
    makeLiksToPush(front, rear);

    addContent(rear);

    *count = *count + 1;

  } else if (*count == MAX) {
    printf("La cola esta llena, no puedes agragar otro elemento\n\n");

  } else {
    printf("Se agrega un elemento mas a la lista\n");

    newnode = (Node *)malloc(sizeof(Node));

    rear = newnode;
    makeLiksToPush(front, rear);

    addContent(rear);

    *count = *count + 1;
  }

  return rear->data;
}

void makeLiksToPush(Node *front, Node *rear) {
      front -> next = rear;
      rear -> next = front;
}

void addContent(Node *n) {
  n -> data = (char *)malloc(20);

  printf("\nAgrege el contenido del nodo: ");

  fgets(n -> data, 20, stdin);
}