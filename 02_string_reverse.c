#include<stdio.h>
#include<string.h>

//defining stack
#define  max 20
char stack[max];
int top =-1;

// top menu...
void menu(){
	printf("\n-------------This is a program for stack------------\n\t1. Push \n\t2. Display\n\t3. Pop\n\t4. exit\n");

}
void str_push(char *str){

	
	int i=0;
	while(str[i]!='\0'){
		top = top +1;
		stack[top]= str[i];
		i++;
	}
	printf("value is successfully added ..\n");
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
void display(){
	if(top==-1){
		printf("Stack is empty ....\n");
	}
	else{
		char myvar[] = " <-- top";  
	// reverse printing....

	for(int i=top; i>=0 ;i--){
		printf("Stack[%d] = %c",i,stack[i]);

		if (i ==top){
			printf("%s",myvar);
			}
		printf("\n");
		}
	}
}	
	
int main(){
int input;
do{
	menu();
	printf("\n-------This is a propgram to reverse a string using stack --------\n");
	char str[20];
	printf("Enter your choice :");
	scanf("%d",&input);
	getchar();

	//reversed string..
	switch(input){
		case 1:
			printf("Enter your string :");
			scanf("%[^\n]s",str);
			printf("Your string is : %s\n",str);

			str_push(str);
			break;
		case 2:
			display();
			break;
		
		case 3:
			pop();
			display();
			break;
		default:
			printf("Task completed ....");
		}

}while(input!=4);

return 0;
}
