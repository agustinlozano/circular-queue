#include "cq.h"

int main(void) {
  Node *front = NULL;
  Node *rear = NULL;
  char *content = NULL;
  int count = 0;

  printf("Circular queue con ocho elementos\n");
  
  
  int choice;
  do {
    choice = runMenu();

    switch (choice) {
      case 1:
        printf("\n\t- Pushear un elemento a la lista");
        content = push(&front, &rear, &count);

        if (content != NULL) {
          printf("\nAgregaste un elemento con el contenido: %s\n\n",
            content);
          //Almacenar dir. de contendios en un array para luego liberar
        }
      break;

      case 2:
        printf("\n\t- Acceder a un elemento de la lista");
        content = pop(&front, &rear, &count);

        if (content != NULL) {
          printf("\nAccediste a un elemento con el contenido: %s\n\n",
            content);
          //Almacenar dir. de contendios en un array para luego liberaras
        }
      break;

      case 3:
        printf("\n\t- Listar los elementos de la lista");
        printList(front);
      break;

      case 0:
        printf("\n\t- Salir del programa\n");
      break;
    
      default:
        printf("\nUps! Parece que elegiste una opcion incorrecta\n\n");
      break;
    }
  } while (choice != 0);

  return EXIT_SUCCESS;
}
