// This is a program for circular queue.....
//under process...:(
#include <stdio.h>

#define max 5
// defining queue
int queue[max];
int front = -1;
int rear = -1;

// top menu...
void menu()
{
    printf("\n-------------This is a program for circular queue------------\n\t1. Insert \n\t2. Display\n\t3. Delete\n\t4. exit\n");
}
void inserting()
{
    int item;
    printf("Enter the value to insert :");
    scanf("%d", &item);
    queue[rear] = item;
    printf("%d is successfully added to the queue", item);
}

void insert()
{
    if (front ==(rear + 1) % max)
    {
        printf("Queue overflow...\n");
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
    if (front = rear+1)
    {
        printf("stack is empty..");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("queue [%d] = %d \n", i, queue[i]);
            i =(i+1)%max;
        }
        printf("queue [%d] = %d \n", i, queue[i]);
    }
}

// deleting from queue..
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is underflow...");
    }
    else
    {
        int item;
        item = queue[front];
        front = front + 1;
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