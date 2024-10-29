#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Queue *queue=createQueue(queue);
	int choice,num;
	
	do{
		printf("\n\n1- Enqueue\n");
		printf("2- Dequeue\n");
		printf("3- Display\n");
		printf("4- Exit\n");
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Input a number: ");
					scanf("%d",&num);
					queue = enqueue(queue,num);
					break;
			case 2:	
					break;
			case 3: display(queue);
					break;
		}
	}while(choice!=4);
	
	return 0;
}

