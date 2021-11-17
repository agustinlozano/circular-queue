#include "cq.h"

char * pop(Node **front, Node **rear, int *count) {
  char *content = NULL;

  if (*front == NULL) {
    printf("\nLa lista esta vacia, no puedes acceder a ningun elemento\n");

  } else if (*count == 1) {
    printf("\nAccedemos al unico elemento en la lista\n");
    content = (*front) -> data;
    free(*front);

    (*front) = NULL;
    (*rear) = NULL;

    *count = 0;

  } else {
      //Accdedemos al primer elemento
    content = (*front) -> data;

      //Guardamos la direccion del front
    Node *aux = (*front);
    
      //Actualizamos el front
    (*front) = (*front) -> next;
      //actualizo la circularidad
    (*rear) -> next = (*front);

      //liberar contenido de aux
    free(aux);
    
    *count = *count - 1;
  }

  return content;
}
