#include "cq.h"

char * push(Node **front, Node **rear, int *count) {
  Node *newnode = NULL;

  if (*front == NULL && *rear == NULL) {
    printf("\nSe agrega el primer elemento");

    newnode = (Node *)malloc(sizeof(Node));

    (*front) = newnode;
    (*rear) = newnode;

    (*front) -> next = (*rear);
    (*rear) -> next = (*front);

    addContent(*rear);

    *count = *count + 1;

  } else if (*count == MAX) {
    printf("\nLa cola esta llena, no puedes agragar otro elemento\n\n");
    return NULL;

  } else {
    printf("\nSe agrega un elemento mas a la lista");

    newnode = (Node *)malloc(sizeof(Node));

    makeLiksToPush(rear, front, newnode);

    addContent(*rear);

    *count = *count + 1;
  }

  return (*rear)->data;
}

void makeLiksToPush(Node **rear, Node **front, Node *newnode) {
  Node *aux = NULL;

    //Guardo el antiguo contenido de rear
  aux = (*rear);
    //Actualizo rear
  (*rear) = newnode;
    //Apunto el antiguo rear al nuevo
  aux -> next = (*rear);
    //apunto en rear next al front para crear circularidad
  (*rear) -> next = (*front);
}

void addContent(Node *n) {
  n -> data = (char *)malloc(20);

  printf("\nAgrege el contenido del nodo: ");

  scanf(" %s", n->data);
}