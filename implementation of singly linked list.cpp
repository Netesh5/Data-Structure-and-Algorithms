#include<stdio.h>
#include<stdlib.h>
struct SLL{
	int data;
	struct SLL *next;	
};
struct SLL *head=NULL;
void addatbegining(){
	struct SLL *newnode;
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	newnode=(struct SLL*)malloc(sizeof(struct SLL));
	newnode->data=num;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}else{
		newnode->next=head;
		head=newnode;
	}
}
void display(){
	struct SLL *temp;
	if(head==NULL){
		printf("\nLinked list doesnot exist");
	}else{
		temp=head;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}
}
void addatend(){
	struct SLL *newnode,*temp;
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	newnode=(struct SLL*)malloc(sizeof(struct SLL));
	newnode->data=num;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}else{
		temp=head;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}
int main(){
	int choice;
	printf("1. Add begining \n2. Display \n3. Add at end \n4. exit");
	while(1){
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addatbegining();
				break;
			case 2:
				display();
				break;
			case 3:
				addatend();
			case 4:
				exit(0);	
			default:
				printf("\nEnter valid number");
				break;			
		}
	}
	
	
	return 0;
}
