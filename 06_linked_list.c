#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
    
}*ptr,*start=NULL;
// global variables...
int item;



// input from user..
void inp_user(){
    
    printf("Enter the element : ");
    scanf("%d",&item);
    ptr->data = item;

}

// 1. algorithm for inserting a node at starting postion ..
void insert_start(){
   ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr==NULL){
        printf("Singly Linked list is over flow...");
    }
    else{
        inp_user();
        if (start == NULL ){
            ptr->next = NULL;
            start=ptr;

        }
        else{
            ptr->next=start;
            start =ptr;
        }
    }
}
// 2. algorithm for insrting a node at ending postion ..
void insert_end(){
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr==NULL){
        printf("Singly Linked list is over flow...");
    }
    else{
        inp_user();
        if (start == NULL ){
            ptr->next = NULL;
            start=ptr;

        }
        else{
            struct node * ptr1= start;
            while(ptr1->next !=NULL){
                ptr1=ptr1->next;

            }
            ptr->next =NULL;
            ptr1->next = ptr;
        }
    }
}
// 3. inserting a node after the specified position ..
void insert_sep(){
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr==NULL){
        printf("Singly Linked list is over flow...");
    }
    else{
        int count =0;
        struct node * ptr1= start;
        // counting he number of elements..
        while(ptr1->next !=NULL){
            count = count+1;
            ptr1=ptr1->next;

        }
        // taking the input from user..
        int pos;
        printf("Enter the value for postion variable :");
        scanf("%d",&pos);
        if (pos>=1 && pos<=count){
            inp_user();
            ptr1= start;
            for(int i=1;i<pos;i++){
                ptr1= ptr1->next;
            }
            ptr->next = ptr1->next;
            ptr1->next = ptr;
        }
        else{
            ptrintf("Please Enter a valid position. :(");
        }
       
    }
}
// 3. Algorithm for deleting a node from the starting positon ..
void del_start(){
    if (start==NULL){
        printf("Singly Linked list is Under flow...");
    }
    else{

        struct node * ptr1= start;
        item = ptr1->data;
        start = start->next;
        free(ptr1);
        printf("%d is deleted ",item);
    }
}
// 4. Algorithm for deleting a node from the ending positon ..
void del_end(){
    if (start==NULL){
        printf("Singly Linked list is Under flow...");
    }
    else{
        struct node * ptr1= start;
        if(start->next!=NULL){
            while(ptr1->next->next!=NULL){
                ptr1=ptr1->next;    
            }
            struct node * ptr2 = ptr1->next;
            ptr1->next = NULL;
            item = ptr2->data;
            free(ptr2);
            printf("%d is deleted ",item);
        }
        else{
            item= ptr1->data;
            start = start->next;
            free(ptr1);
            printf("%d is deleted ",item);
        }
    }
}
// 5. Algorithm for deleting a node from the specified positon ..
void del_sep(){
    if (start==NULL){
        printf("Singly Linked list is Under flow...");
    }
    else{
        struct node * ptr1= start;
        int count = 0;
        while(ptr1->next!=NULL){
            count = count +1;
            ptr1=ptr1->next;    
            }

        if(start->next!=NULL){
            while(ptr1->next->next!=NULL){
                ptr1=ptr1->next;    
            }
            // taking the input from user..
            int pos;
            printf("Enter the value for postion variable :");
            scanf("%d",&pos);
            if (pos>=1 && pos<=count){
                inp_user();
                ptr1= start;
                for(int i=1;i<pos;i++){
                    ptr1= ptr1->next;
                }
                struct node * ptr2 = ptr1->next;
                ptr1->next = ptr2->next;
                item = ptr2->data;
                free(ptr2);
                printf("%d is deleted ",item);
            }
            else{
                ptrintf("Please Enter a valid position. :(");
            }
        }
           
    }
}
void main(){

    



}
