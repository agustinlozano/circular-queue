#include "cq.h"

void printList(Node *front) {
  Node *current = front;

  if (front == NULL) {
    printf("\nLa lista esta vacia\n");

  } else {
    int count = 0;
    do {
      printf("\n%d. El contenido es: %s", count+1, current->data);

      current = current -> next;
      count++;
    } while (current != front);
  }
  printf("\n");
}
