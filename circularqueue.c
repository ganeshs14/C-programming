#include <stdio.h>

int cqueue[5];
int front = -1, rear = -1, n = 5;

void insertCQ(int val)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("Queue Overflow. \n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == n - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    cqueue[rear] = val;
}
void deleteCQ()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Element deleted from queue is :%d ", &cqueue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == n - 1)
            front = 0;
        else
            front = front + 1;
    }
}

void displayCQ_forward()
{
    int f = front, r = rear;
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements are (forward):\n");
    if (f <= r)
    {
        while (f <= r)
        {
            printf("%d", cqueue[f]);
            f++;
        }
    }
    else
    {
        while (f <= n - 1)
        {
            printf("%d", cqueue[f]);
            f++;
        }
        f = 0;
        while (f <= r)
        {
            printf("%d", cqueue[f]);
            f++;
        }
    }
    printf("\n");
}

void displayCQ_reverse()
{
    int f = front, r = rear;
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements are (reverse):\n");
    if (f <= r)
    {
        while (f <= r)
        {
            printf("%d", cqueue[r]);
            r--;
        }
    }
    else
    {

        while (r >= 0)
        {
            printf("%d", cqueue[r]);
            r--;
        }
        r = n - 1;
        while (r >= f)
        {
            printf("%d", cqueue[r]);
            r--;
        }
    }
    printf("\n");
}

int main()
{

    int ch, val;
    printf("\n\t<----Implementation of CircularQueue ---->\n");
    do
    {
        printf("\n1)Insert\n2)Delete\n3)Display forward\n4)Display reverse\n5)Exit\n");
        printf("Enter choice (1,2,3,4,5): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Input for insertion: ");
            scanf("%d", val);
            insertCQ(val);
            break;
        case 2:
            deleteCQ();
            break;
        case 3:
            displayCQ_forward();
            break;
        case 4:
            displayCQ_reverse();
            break;
        case 5:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice!!\n");
        }
    } while (ch != 5);

    getchar();
    return 0;
}