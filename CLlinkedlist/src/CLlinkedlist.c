/*  CLlinkedlist.c  source code >>
 *  
 *  this script restored all function for design Cycle Linked list datastrue
 *
 * =======================================================
 * 		<function list>
 * 		<function name>		<discription>
 *
 * 		CreateNodeHead()	Create 'head' pointing NULL
*							'head' is point first node as 							   						  struct type 'nodehead' (refer to CLlinkedlist.h)
*
*		InsertFirstNode()	
 */


#include <stdio.h>
#include "CLlinkedlist.h"
#include <stdlib.h>
#include <string.h>

nodehead* CreateNodehead(void){

	//create nodehead pointing NULL position
	nodehead* newnode;

	newnode = (nodehead*)malloc(sizeof(nodehead));
	newnode->head= NULL;
	return newnode;
}

void InsertFirstNode (nodehead* CL,char *_indata){
	// case 1 no exist Cyrcle list any
	nodelist* newnode;
	nodelist* scope;


	newnode = (nodelist*)malloc(sizeof(nodelist));
	scope = (nodelist*)malloc(sizeof(nodelist));

	strcpy(newnode->data,_indata);
	
	if(CL->head ==NULL)
	{
		CL->head=newnode;
		newnode->link=newnode;
	}

	else{
		scope=CL->head;
		while(scope->link != CL->head){
			scope=scope->link;
		}
		newnode->link=scope->link;
		CL->head=newnode;
		scope->link=newnode;
	}

}

void InsertMiddleNode(nodehead* CL,nodelist*pre ,char *_indata){
	nodelist *newnode;
	newnode=(nodelist*)malloc(sizeof(newnode));
	strcpy(newnode->data,_indata);

	if(CL->head==NULL){
		CL->head=newnode;
		newnode->link=newnode;
	}

	else{
		newnode->link=pre->link;
		pre->link=newnode;
	}
}




void PrintListNode(nodehead*CL){
		nodelist* printnode;
		int index=1;
		printnode = (nodelist*)malloc(sizeof(nodelist));
		
		if(CL->head==NULL){
			printf("there is no exit to print its");
		}
		else{
			//scope=CL->head;
			do{
				printnode=CL->head;
				strcpy(printnode->data,CL->head->data);
				printf("[%d][%s] -> ",index,printnode->data);
				
				printnode=printnode->link;
				index=index+1;
			}while(printnode!=CL->head);

		}

}

void FreeSelrctNode(nodehead*CL,char*_indata){
	nodelist* old;
	nodelist* pre;
	old=(nodelist*)malloc(sizeof(nodelist));
	pre=(nodelist*)malloc(sizeof(nodelist));

	if(CL->head==NULL){
		printf("ERR");
		return;
	}

	old=CL->head;
	pre=CL->head;

	strcpy(old->data,_indata);

	while(old->data!=_indata){
		old=old->link;
	}
	if(old->data==_indata){
		while(pre->link!=old){
			pre=pre->link;
		}
		pre->link=old->link;
		free(old);
	}

	
}


















