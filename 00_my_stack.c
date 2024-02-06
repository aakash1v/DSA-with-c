#include<stdio.h>
#include<string.h>

//defining stack
#define  max 20
char stack[max];
int top =-1;

//top menu...
void menu(){
	printf("\n-------------This is a program for stack------------\n\t1. Push \n\t2. Display\n\t3. Pop\n\t4. exit\n");


}
void str_push(char *str){

	top = top +1;
	for(int i=0;i<sizeof(str);i++){
		stack[top]= str[i];
	}
	printf("value is successfully added ..\n");
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
		printf(" %c",stack[i]);

		if (i ==top){
			printf("%s",myvar);
			}
		printf("\n");
	}	
	}
}

void push(){
    char check;
	if(top ==max-1){
	printf("stack overflow..\n");
	}
	else{
		char item;
		scanf("%c",&item);
		top = top+1;
		stack[top] = item;
		printf("value is successfully added ..\n");
	}
    //allowing user for more inputs...
    // printf("Do you want to insert again ??");
    // scanf("%c",&check);
    // if(check =='y'){
    //     push();
    // }
    

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
	

char my_string[20];
printf("Enter your string");
scanf("%s",my_string);

	//menu
menu();
printf("Enter your choice : ");
scanf("%d",&input);

//options....
switch(input){
case 1:
	str_push(my_string);
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
