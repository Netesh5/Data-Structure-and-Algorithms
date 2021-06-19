#include<stdio.h>
#define SIZE 5
struct stack{
	int top;
	int items[SIZE];
}s;
void push(struct stack *s,int element){
	if(s->top==SIZE-1){
		printf("Stack overflow");
	}
	else{
		s->top+=1;
		s->items[s->top]=element;
	}
}
void pop(struct stack *s){
	if(s->top==-1){
		printf("Stack underflow\n\n");
	}
	else{
		int num=s->items[s->top];
		printf("Popped number : %d\n\n",num);
		s->top-=1;
	}
}
void display(struct stack *s){
	int i;
	if(s->top==-1){
		printf("Stack is empty\n\n");
	}
	else{
		printf("Content of stack : \n");
		for(i=s->top;i>=0;i--){
			printf("\n|%d|",s->items[i]);
		}
	}
}
int main(){
	 s.top=-1;
	int choose,element;
	
	while(1){
		printf("\n---------------------\n");
		printf("\nChoose an option \n1.Push \n2.Pop \n3.Display ");
		printf("\n---------------------\n");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			printf("Enter the number to push : ");
			scanf("%d",&element);
			push(&s,element);
			break;
		case 2:
			pop(&s);
			break;
		case 3:
			display(&s);
			break;
		default:
			printf("Invalid option\n\n");	
			break;		
	}
}
}
