#include "cq.h"

/*  Documentacion:
 *    -Variables
 *      front & rear :: Node 
 *        se utilizan para manejar la cola circular.
 *        
 *      contentList :: Lcahr
 *        se encarga de guardar los contenidos accedidos por el usuario
 *        cuando se ejecuta el pop. Esto es porque pop libera solo la
 *        direccion del nodo (type Node) pero no el data, ya que no tendria
 *        sentido liberar el dato apenas fue accedido porque seria poco practico.
 *        
 *      nodeCount & contentCount :: Int
 *        son los que se encargan de gestionar la cantidad de elementos
 *        que hay en cada lista.
 * 
 *      content :: Char *
 *        esta variable solamente guarda el retorno de las funciones. 
 *
 *
 *    -Funciones
 *      pop, push, printList: operaciones basicas que soporta esta cola circular.
 * 
 *      freeAll & initContentList: estas dos funcines estan ligadas a la lista de
 *        contenidos accedidos por el usuario, es decir, contentList.
 * 
 *      freeAll: esta funcion sera invocada solo en el caso de que el usuario, haya
 *        insertado elementos a la cola circular mediante el uso de push y luego la
 *        haya vaciado por completo con pop. 
 * 
 *        Por que es esto asi? La razon es porque una vez que el usuario vacio la
 *        cola circular accediendo a todos los elementos que habia puesto antes con
 *        el uso de la funcion push, queda bajo su propia responsabilidad el almacenar
 *        esos contenidos (de ser necesario). En este escenario, contentList, ya no tiene
 *        motivo para seguir almacenando esas direcciones, por lo tanto, realiza un freeAll.
 * 
 *      initContentList: inicializa todas las direcciones de contentList a NULL.
 * 
 */

int main(void) {
  Node *front = NULL;
  Node *rear = NULL;
  Lchar contentList[MAX];
  char *content = NULL;
  int nodeCount = 0, contentCount = 0;

  printf("\nCircular queue con ocho elementos\n");

  initContentList(contentList);
  
  int choice;
  do {
    choice = runMenu();

    switch (choice) {
      case 1:
        printf("\n\t- Pushear un elemento a la lista");
        content = push(&front, &rear, &nodeCount);

        if (content != NULL) {
          printf("\nAgregaste un elemento con el contenido: %s\n\n",
            content);
        }
      break;

      case 2:
        printf("\n\t- Acceder a un elemento de la lista");
        content = pop(&front, &rear, &nodeCount);

        if (content != NULL) {
          printf("\nAccediste a un elemento con el contenido: %s\n\n",
            content);
          
          contentList[contentCount++].data = content;

          if(nodeCount == 0) {
            printf("Usuario vacio la cola circular. Liberar todos los contenidos\n");
            freeAll(contentList, contentCount);
            initContentList(contentList);
            contentCount = 0;
          }
        }
      break;

      case 3:
        printf("\n\t- Listar los elementos de la lista");
        printList(front);
      break;

      case 4:
        printf("\n\t- Listar los contenidos a liberar");
        printContentList(contentList);
      break;

      case 0:
        printf("\n\t- Salir del programa\n");
      break;
    
      default:
        printf("\nUps! Parece que elegiste una opcion incorrecta\n\n");
      break;
    }
  } while (choice != 0);

  //Final del programa, se liberan los contenidos actuales en la lista de contendidos.
  freeAll(contentList, contentCount);

  return EXIT_SUCCESS;
}
