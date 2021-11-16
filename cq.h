#ifndef CQ
#define CQ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  char *data;
  struct node *next;
} Node;

#define MAX 8

char * push(Node *front, Node *rear, int *count);
//char * pop(Node *front, Node *rear, int *count);

void makeLiksToPush(Node *front, Node *rear);
void addContent(Node *n);


#endif