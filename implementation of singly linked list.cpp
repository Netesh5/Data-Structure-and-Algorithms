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
void delete_from_begining(){
	struct SLL *temp;
	if(head==NULL){
		printf("Linked list doesnot exists ");
	}else{
		temp=head;
		head=head->next;
		free(temp);
		
	}
}
delete_from_end(){
	struct SLL *temp,*temp1;
	if(head==NULL){
		printf("Linked doesnot exists");
	}else{
		temp=head;
		while(temp->next!=NULL){   
			temp1=temp;
			temp=temp->next;
	}
}
	temp1->next=NULL;
	free(temp);
}
int main(){
	int choice;
	printf("1. Add begining \n2. Display \n3. Add at end \n4. Delete from begining\n5. Delete from end\n6. Exit");
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
				break;
			case 4:
				delete_from_begining();
				break;
			case 5:
				delete_from_end();
				break;		
			case 6:
				exit(0);	
			default:
				printf("\nEnter valid number");
				break;			
		}
	}
	
	
	return 0;
}
