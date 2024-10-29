
typedef struct node{
	int data;
	struct node *next;
}node;

typedef struct queue{
	int count;
	node *front;
	node *rear;
}Queue;

Queue* createQueue(Queue* queue);
Queue* enqueue(Queue* queue, int num);
void display(Queue* queue);

