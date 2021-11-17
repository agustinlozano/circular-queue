#include "cq.h"

int main(void) {
  Node *front = NULL;
  Node *rear = NULL;
  char *content = NULL;
  int count = 0;

  printf("Circular queue\n");
  
  
  int choice;
  do {
    printf("\n1. Agregar un elemento");
    printf("\n2. Acceder a un elemento");
    printf("\n3. Imprimir la lista");
    printf("\n0. Salir");
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
    
      default:
        printf("\nUps! Parece que elegiste una opcion incorrecta\n\n");
      break;
    }
  } while (choice != 0);

  return EXIT_SUCCESS;
}
