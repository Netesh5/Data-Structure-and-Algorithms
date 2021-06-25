#include<stdio.h>
#define SIZE 5
struct CQueue{
	int front,rear;
	int item[SIZE];
}cq;
void enqueue(struct CQueue *cq,int num){
	if((cq->rear+1)%SIZE==cq->front){
		printf("\nQueue overflow\n");
	}
	else{
		cq->rear=(cq->rear+1)%SIZE;
		cq->item[cq->rear]=num;
	}
}
void dequeue(struct CQueue *cq){
	if(cq->rear==cq->front){
		printf("\nQueue underflow\n");
	}
	else{
		cq->front=(cq->front+1)%SIZE;
		int dt=cq->item[cq->front];
		printf("\nDequeue item : %d\n",dt);
	}
}
void display(struct CQueue *cq){
	int i;
	if(cq->rear==cq->front){
		printf("\nQueue is empty\n");
	}
	else{
		printf("\nContent of Queue : \n");
		for(i=(cq->front+1)%SIZE;i!=cq->rear;i=(i+1)%SIZE){
			printf("%d\t",cq->item[i]);
		}
	}
}
int main(){
	cq.front=SIZE-1;
	cq.rear=SIZE-1;
	int choose,num;
	while(1){
		printf("\n-----------------------\n");
		printf("\nChoose an option \n1.Enqueue \n2.Dequeue \n3.Display ");
		printf("\n-----------------------\n");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			printf("Enter the number to Enqueue : ");
			scanf("%d",&num);
			enqueue(&cq,num);
			break;
		case 2:
			dequeue(&cq);      
			break;         
		case 3:		
			display(&cq);  
			break;
		default:
			printf("Invalid option\n\n");	
			break;		
	} 
}
}
