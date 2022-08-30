
/*  << CLlinkedlist.h  source code >>*/

#include <stdio.h>

typedef struct nodelist{
	char data[4];
	struct nodelist *link;
}nodelist;

typedef struct nodehead{
	nodelist *head;
}nodehead;



nodehead* CreateNodehead(void);

void InsertFirstNode (nodehead*CL,char * _indata);

void PrintListNode(nodehead*CL);


void InsertMiddleNode(nodehead* CL,nodelist*pre ,char *_indata);
