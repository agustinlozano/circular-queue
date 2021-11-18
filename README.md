## Circular Queue
Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called ‘Ring Buffer’.

![](https://github.com/agustinlozano/circular-queue/blob/master/src/img/Circular-queue.png?raw=true)


## Mi implementación
Esta cola circular de ocho posiciones fue hecha como una lista enlazada de nodos. 
Utiliza la memoria dinámica para reservar los nodos y los datos almacenados en ellos.

```C
 /*node structure*/
  typedef struct node {
    char *data;
    struct node *next;
  } Node;
  
/*Front: Get the front item from queue.
 *Rear: Get the last item from queue.
 */
  Node *front = NULL;
  Node *rear = NULL;
```

Para que el programa maneje la liberación de memoria correctamente, las direcciones de los datos de cada nodo son agrupadas en una estructura especial. 
Un vector de ocho posiciones de dicha estructura almacena los punteros y los libera según sea necesario.
```C
  typedef struct lchar {
    char *data;
  } Lchar;
  
  Lchar contentList[MAX];
```

### Las funciones soportadas son: 

**push**: inserta un elemento a la lista,

**pop**: accede a un elemento de la lista siguiente el principio de FIFO,

**printList**: imprime el contenido de cada nodo en la lista
