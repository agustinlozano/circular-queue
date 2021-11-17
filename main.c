#include "cq.h"

int main(void) {
  Node *front = NULL;
  Node *rear = NULL;
  char *content = NULL;
  int count = 0;

  printf("Circular queue\n");
  
  
  int choice;
  do {
    printf("\n\t1. Agregar un elemento");
    printf("\n\t2. Acceder a un elemento");
    printf("\n\t3. Imprimir la lista");
    printf("\n\t0. Salir");
    printf("\nSu eleccion: ");
    scanf(" %d", &choice);

    switch (choice) {
      case 1:
        content = push(&front, &rear, &count);

        if (content != NULL) {
          printf("Agregaste un elemento con el contenido: %s\n\n",
            content);
        }
      break;

      // case 2:
      //   content = pop(front, rear, &count);

      //   if (content != NULL) {
      //     printf("Accediste a un elemento con el contenido: %s\n\n",
      //       rear -> data);
      //   }
      // break;

      case 3:
        printList(front);
      break;
    
      default:
        printf("\nUps! Parece que elegiste una opcion incorrecta\n\n");
      break;
    }
  } while (choice != 0);

  return EXIT_SUCCESS;
}

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
