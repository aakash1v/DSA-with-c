// This is a program for circular cqueue.....

#include <stdio.h>

#define max 5
// defining cqueue
int cqueue[max];
int front = -1;
int rear = -1;

// top menu...
void menu()
{
    printf("\n-------------This is a program for circular cqueue------------\n\t1. Insert \n\t2. Display\n\t3. Delete\n\t4. exit\n");
}
void inserting()
{
    int item;
    printf("Enter the value to insert :");
    scanf("%d", &item);
    cqueue[rear] = item;
    printf("%d is successfully added to the cqueue", item);
}

void insert()
{
    if (front == (rear + 1) % max)
    {
        printf("cqueue overflow...\n");
    }
    else
    {
        if (rear == -1)
        {
            rear = front = 0;
            inserting();
        }
        else
        {
            rear = (rear + 1) % max;
            inserting();
        }
    }
}

// display function...
void display()
{
    printf("\n**** My circular queue **********\n");
    if (front == -1)
    {
        printf("stack is empty..");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("cqueue [%d] = %d \n", i, cqueue[i]);
            i = (i + 1) % max;
        }
        printf("cqueue [%d] = %d \n", i, cqueue[i]);
    }
}

// deleting from cqueue..
void delete()
{
    if (front == -1)
    {
        printf("cqueue is underflow...");
    }
    else
    {
        int item;
        if (front == rear)
        {
            item = cqueue[front];
            front = rear = -1;
        }
        else
        {
            item = cqueue[front];
            front = (front + 1) % max;
        }
        printf("%d is successfully deleted..", item);
    }
}

int main()
{
    int input;

    do
    {
        menu();
        printf(">");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        default:
            printf("Task completed...");
        }

    } while (input != 4);
    return 0;
}

// https://github.com/aakash1v/DSA-with-c.gits