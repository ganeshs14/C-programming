#include <stdio.h>
#include <conio.h>
#define MAX 50
int rear = -1;
int front = -1;
int queue_array[MAX];
void insert()
{
    int item;
    if (rear == MAX - 1)
        printf("\tQueue overFlow!\n");
    else if (front == -1)
    {
        front = 0;
        printf("\tInsert the element in Queue:");
        scanf("%d", &item);
        rear += 1;
        queue_array[rear] = item;
    }
}
void del()
{
    if (front == 1 || front > rear)
    {
        printf("\tQueue underFlow!!\n");
        return;
    }
    else
    {
        printf("\tElement deleted from queue is %d\n", queue_array[front]);
        front += 1;
    }
}
void display()
{
    if (front == -1)
        printf("\tQueue is Empty.");
    else
    {
        printf("\tQueue is :");
        for (int i = 0; i <= rear; i++)
        {
            printf("%d \t", queue_array[i]);
        }
    }
}

void dash()
{
    for (int i = 0; i < 30; i++)
        printf("-");
}

int main()
{
    int choice;
    printf("\n\tImplementation of Queue using Array.\n");
    do
    {
        printf("\n1: Insert Queue\n2: Delete Queue\n3: Display Queue.\n4: Exit\n");
        printf("Enter a Choice(1, 2, 3, 4) : ");
        scanf("%d", &choice);
        dash();
        switch (choice)
        {
        case 1:
            printf("\n<--Inserting queue-->\n");
            insert();
            dash();
            break;
        case 2:
            printf("\n<--Deleting queue-->\n");
            del();
            dash();
            break;
        case 3:
            printf("\n<--Display queue-->\n");
            display();
            printf("\n");
            dash();
            break;
        case 4:
            printf("\n<--EXIT-->\n");
            dash();
            break;
        default:
            printf("\nInvalid Choice!!\n");
            dash();
            break;
        }

    } while (choice != 4);
    getch();
    return 0;
}