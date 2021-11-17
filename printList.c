#include "cq.h"

void printList(Node *front) {
  Node *current = front;

  printf("\nImprimir los elementos de la lista circular");
  if (front == NULL) {
    printf("\nLa lista esta vacia\n");
  } else {
    int count = 0;
    
    do {
      printf("\n%d. El contenido es: %s", count, current->data);

      current = current -> next;
      count++;
    } while (current != front);
  }

  printf("\n\n");
}
