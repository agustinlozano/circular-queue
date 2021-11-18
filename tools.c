#include "cq.h"

void printContentList(Lchar contentlist[]) {
  for (int i = 0; i<MAX; i++) {
    printf("\n\t%d. Content: %s", i, contentlist[i].data);
  }
  printf("\n");
}

void initContentList(Lchar contentlist[]) {
  for (int i = 0; i<MAX; i++) {
    contentlist[i].data = NULL;
  }
}

void freeAll(Lchar contentList[], int length) {
  for(int i = 0; i<length; i++) {
    free(contentList[i].data);
  }
}
