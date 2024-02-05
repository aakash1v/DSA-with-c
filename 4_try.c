// Program to check paranthessis is balanced or not....

#include<stdio.h>
// #include "01_my_stack.c"


#define  max 20
int stack[max];
int top =-1;

void push(){
	if(top ==max-1){
        printf("stack overflow");
	}
	else{
		int item;
		top = top+1;
		stack[top] = item;
	}
}
int pop(){
    //underflow condition or unbalanced paranthesis condition...
	if(top ==-1){
	return 0;
	}
	else{
		int index;
		top = top -1; 
		// printf("pop action is successfully performed....\n");
	}
}

int a = 1;
int check(char *arr){
    //checking by function....
    for(int i=0;i<sizeof(arr);i++){
        // paranthesis conditions....
        if (arr[i] =='(' ){
            push();
        }
        else if (arr[i] ==')' ){
             a = pop();
            
        }
    }
    //final check....
    if (a==0){
        printf("paranthesis unbalanced...");
            }
    else{
        printf("paranthesis is balanced...");
    }
        
     

}

int main(){
    char exp[] = {'(','x','+','y',')',')'};
    check(exp);



    return 0;
}