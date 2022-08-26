#include <stdio.h>

typedef struct Node{
	char data[4];
	struct Node *link;

}nodelist;

typedef struct Node_h{
	nodelist *head;
}nodehead;

void InsertFirstList(nodehead *L,char *x);

void InsertMiddleList(nodehead* L,nodelist* pre, char* x);


void InsertLastList(nodehead *L, char* x);
nodehead* CreateNode(void);

void PrintList(nodehead*L);

void FreeLinkedList(nodehead *L);

nodelist* SerchListNode(nodehead *L,char*x);

