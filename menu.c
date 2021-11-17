#include "cq.h"

int runMenu(void) {
    int choice;

    printf("\n\t1. Agregar un elemento");
    printf("\n\t2. Acceder a un elemento");
    printf("\n\t3. Imprimir la lista");
    printf("\n\t0. Salir");
    printf("\nSu eleccion: ");
    scanf(" %d", &choice);

    return choice;
}