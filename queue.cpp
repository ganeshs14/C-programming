#include <stdio.h>
#include <conio.h>
#define MAX 50;
void insert();
void del();
void display();
int queue_array[50];
void dash();
int rear = -1;
int front = -1;
int main()
{
    int choice;
    do
    {
        printf("\n1: Insert Queue\n2: Delete Queue\n3: Display Queue.\n4: Exit\n");
        printf("Enter a Choice(1, 2, 3, 4) : ");
        scanf("%d", &choice);
        dash();
        switch (choice)
        {
        case 1:
            printf("\n\t<--Inserting queue-->\n");
            insert();
            dash();
            break;
        case 2:
            printf("\n\t<--Deleting queue-->\n");
            del();
            dash();
            break;
        case 3:
            printf("\n\t<--Display queue-->\n");
            display();
            dash();
            break;
        case 4:
            printf("\n\t<--EXIT-->\n");
            dash();
            break;
        default:
            printf("\n\tInvalid Choice!!\n");
            dash();
            break;
        }

    } while (choice != 4);

    return 0;
}

void dash()
{
    for (int i = 0; i < 30; i++)
        printf("-");
}

void insert()
{
    int item;
    if (rear == MAX-1)
        printf("Queue overFlow!\n");
    else if (front == -1)
    {
        front = 0;
        printf("Insert the eelement in Queue:");
        scanf("%d", &item);
        rear += 1;
        queue_array[rear] = item;
    }
}

void del(){
    if (front == 1 || front > rear){
        printf("Queue underFlow!!\n");
        return;
    }
    else{
        printf("Element deleted from queue is %d\n", queue_array[front]);
        front += 1;
    
    }
}

void display(){
    if (front == -1)
        printf("Queue is Empty.");
    else{
        printf("Queue is :\n");
        for (int i = 0; i <= rear; i++)
        {
            printf("%d \t", queue_array[i]);
        }
        
    
    }
}