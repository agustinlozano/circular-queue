#include "cq.h"

int runMenu(void) {
    int choice;

    printf("\n\t1. Agregar un elemento");
    printf("\n\t2. Acceder a un elemento");
    printf("\n\t3. Imprimir la cola circular");
    printf("\n\t4. Imprimir la lista de contenidos");
    printf("\n\t0. Salir");
    printf("\nSu eleccion: ");
    scanf(" %d", &choice);

    return choice;
}