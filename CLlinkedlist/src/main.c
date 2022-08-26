
/* << main.c source code>>
 *
 * this script design for build Cyrcle linked list datastructer. 
 * the main.c depend on few function source code. 
 * below list is source code for run main.c operating it 
 *
 * list 
 * 	-  CLlinkedlist.c
 *
 *
 * */

#include <stdio.h>
#include "CLlinkedlist.h"

int main(void)
{
	printf("START\n\n");

	nodehead *CL;
	CL= CreateNodehead();

	InsertFirstNode(CL,"월");
	
	PrintListNode(CL);

}

