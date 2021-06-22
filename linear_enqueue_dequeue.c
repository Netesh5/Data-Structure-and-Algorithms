#include<stdio.h>
#define SIZE 5
struct queue{
	int front;
	int rear;
	int item[SIZE];
}q;
void enqueue(struct queue *q,int num){
	if(q->rear==SIZE-1){
		printf("\nQueue overflow\n");
	}
	else{
		q->rear+=1;
		q->item[q->rear]=num;
	}
}
void dequeue(struct queue *q){
	if(q->rear<q->front){
		printf("\nQueue underflow\n");
	}
	else{
		int dt=q->item[q->front];
		printf("\nDequeue item : %d\n",dt);
		q->front+=1;
	}
}
void display(struct queue *q){
	int i;
	if(q->rear==-1){
		printf("\nQueue is empty\n");
	}
	else{
		printf("\nContent of Queue : \n");
		for(i=q->front;i<=q->rear;i++){
			printf("%d\t",q->item[i]);
		}
	}
}
int main(){
	q.front=0;
	q.rear=-1;
	int choose,num;
	while(1){
		printf("\n---------------------\n");
		printf("\nChoose an option \n1.Enqueue \n2.Dequeue \n3.Display ");
		printf("\n---------------------\n");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			printf("Enter the number to Enqueue : ");
			scanf("%d",&num);
			enqueue(&q,num);
			break;
		case 2:
			dequeue(&q);      
			break;         
		case 3:		
			display(&q);  
			break;
			default:
			printf("Invalid option\n\n");	
			break;		
	} 
	
}
}
