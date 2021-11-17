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

char * push(Node **front, Node **rear, int *count);
  void makeLiksToPush(Node **rear, Node **front, Node *newndode);
  void addContent(Node *n);

//char * pop(Node *front, Node *rear, int *count);

void printList(Node *front);

#endif