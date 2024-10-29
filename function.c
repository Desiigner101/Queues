#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Queue* createQueue(Queue* queue){
	queue=(Queue*)malloc(sizeof(Queue));
	queue->count=0;
	queue->front=NULL;
	queue->rear=NULL;
	return queue;
}
Queue* enqueue(Queue* queue, int num){
	node *newNode;
	newNode = (node*)malloc(sizeof(node));
	newNode->data = num;
	queue->count++;
	if(queue->front==NULL){
		queue->front=newNode;
		queue->rear=newNode;
		
	}else{
		queue->rear->next=newNode;
		queue->rear=newNode;
	}
	return queue;
}
void display(Queue* queue){
	if(queue->count==0)
		printf("Queue is empty.\n");
	else{
		printf("Front: %d\t",queue->front->data);
		printf("Rear: %d\n",queue->rear->data);
	}
	
}

