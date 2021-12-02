#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
void push(){
	int num;
	struct stack *newnode;
	newnode=(struct newnode*)malloc(sizeof(struct stack));
	printf("Enter the number : ");
	scanf("%d",&num);
	newnode->data=num;
	newnode->next=NULL;
	if(top==NULL){
		top=newnode;
	}else{
		newnode->next=top;
		top=newnode;
	}
}
void pop(){
	struct stack *temp;
	if(top==NULL){
		printf("Stack doesnot exit");
	}else{
		temp=top;
		top=top->next;
		free(temp);
	}
}
void display(){
	struct stack *temp;
	if(top==NULL){
		printf("Linked list doesnot exits");
	}else{
		temp=top;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}
	
}

int main(){
	int choice;
	printf("1. Push data \n2. Display \n3. Pop data \n4. Exit");
	while(1){
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				display();
				break;
			case 3:
				pop();
				break;
			case 4:
				exit(0);
				break;
		}
	
}
return 0;
}

