#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>
#include <string.h>

nodehead* CreateNode(void){
	nodehead *L;
	L=(nodehead*)malloc(sizeof(nodehead));
	L->head=NULL;
	return L;
}

void InsertFirstList(nodehead* L,char *x){
	/*algorithm 4-1-1*/ 

	nodelist *newnode;
	newnode = (nodelist*)malloc(sizeof(nodelist));
	strcpy(newnode->data,x);
	
	if(L->head==NULL)
	{
		L->head=newnode;
	}
	else
	{
		newnode->link=L->head;
		L->head=newnode;
	}
}

void InsertMiddleList(nodehead* L, nodelist* pre, char* x){
	
	nodelist* newnode;
	newnode=(nodelist*)malloc(sizeof(nodelist));
	strcpy(newnode->data,x);

	if(L->head==NULL)	
	{
		L->head=newnode;
		newnode->link=NULL;
	}
	else if(pre==NULL)
	{
		L->head=newnode;
		newnode->link=NULL;
	}

	else
	{
		pre->link=newnode;
		newnode->link=pre->link;

	}	
	
}

void InsertLastList(nodehead *L, char* x){
	nodelist* newnode;
	nodelist* temp;

	newnode=(nodelist*)malloc(sizeof(nodelist));
	strcpy(newnode->data,x);

	temp=L->head;	//temp be heading struct of L
	while(temp->link!=NULL)
	{
		temp=temp->link;

	}
	if(temp->link==NULL)
	{
		newnode->link=temp->link;
		temp->link=newnode;
	}
}

void PrintList(nodehead *L){
	nodelist *p;
	int nodeindex=1;
	p=L->head;
	printf("currnet addr of p %p\n",p);

	if(p==NULL)
	{
		printf(" no exist node");
	}
	while(p!=NULL)
	{
		printf("[%d][%s]   ",nodeindex,p->data);
		nodeindex=nodeindex+1;
		p=p->link;
	}
	}

void FreeLinkedList(nodehead*L){
	nodelist *p;
	while(L->head!=NULL)
	{
		p=L->head;
		L->head=L->head->link;
		free(p);
		p=NULL;
	}
}


void DeleteListNode(nodehead *L,nodelist *pre){
}

nodelist* SerchListNode(nodehead *L, char*x){

	nodelist *serchnode;
	strcpy(serchnode->data,x);

	serchnode=L->head;
		if(L->head==NULL)
	{
		printf("list not created ");
		printf("\n");
	}
	
	while(serchnode!=NULL)
	{
		printf("current node addr %p ,[%s]",serchnode,serchnode->data);
		printf("\n\n");

		if(serchnode->data==x){
			printf("serched %s",serchnode->data);
			printf("\n");
			return serchnode;
		}
		serchnode=serchnode->link;
	}
	
}





