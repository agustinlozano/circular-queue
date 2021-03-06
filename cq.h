#ifndef CQ
#define CQ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  char *data;
  struct node *next;
} Node;

typedef struct lchar {
  char *data;
} Lchar;

#define MAX 8

/* funcion push */
char * push(Node **front, Node **rear, int *count);
  void makeLiksToPush(Node **rear, Node **front, Node *newndode);
  void addContent(Node *n);

/* funcion pop */
char * pop(Node **front, Node **rear, int *count);

/* funcion listar */
void printList(Node *front);

/* menu */
int runMenu(void);

/* content lists & tools */
void freeAll(Lchar contentList[], int length);
  void initContentList(Lchar contentlist[]);
  void printContentList(Lchar contentlist[]);

#endif