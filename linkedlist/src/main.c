/*  <<main.c>> */

#include <stdio.h>
#include "linkedlist.h"

int main(void){

	char x[3];
	nodehead* L;

	printf("create empty list!");
	printf("\n");
	L=CreateNode();
	printf("created empty list Node \n");
	printf("\n");
	PrintList(L);

	
printf("currnet newnode ponit link %p",L->head);
	
	
	printf("\n");
	InsertFirstList(L,"월");
	PrintList(L);

	printf("\n");
	InsertFirstList(L,"화");
	PrintList(L);

	printf("\n");
	InsertLastList(L,"금");
	PrintList(L);

	printf("\n");
	printf("%s",L->head->data);

	printf("\n");

	char answer[10] ;
	printf("do you want to reset all listnode? : y/n  ");

	SerchListNode(L,"금");
	
	if('y'==getchar())
	{
	FreeLinkedList(L);
	}

	
	return 0;

}

