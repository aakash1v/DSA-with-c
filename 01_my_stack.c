#include<stdio.h>

//defining stack
#define  max 5
int stack[max];
int top =-1;

//top menu...
void menu(){
	printf("\n-------------This is a program for stack------------\n\t1. Push \n\t2. Display\n\t3. Pop\n\t4. exit\n");

}

//display function
void display(){
	if(top==-1){
		printf("Stack is empty ....\n");
	}
	else{
		char myvar[] = " <-- top";  
	// reverse printing....

	for(int i=top; i>=0 ;i--){
		printf("Stack[%d] = %d",i,stack[i]);

		if (i ==top){
			printf("%s",myvar);
			}
		printf("\n");
	}	
	}
}
void push(){
	if(top ==max-1){
	printf("stack overflow..\n");
	}
	else{
		int item;
		printf("Enter the value : ");
		scanf("%d",&item);
		top = top+1;
		stack[top] = item;
		printf("value is successfully added ..\n");
	}
}

void pop(){
	if(top ==-1){
	printf("stack Underflow...\n");
	}
	else{
		int index;
		printf("pop action is successfully performed....\n");
		top = top -1; 
	}
}

int main(){
int input;
do{
menu();
printf("Enter your choice : ");
scanf("%d",&input);

//options....
switch(input){
case 1:
	push();
	break;

case 2:
	display();
	break;
case 3:
	pop();
	break;
default:
	printf("Thank you..\n ");
 }
}while(input!=4);

return 0;
}
