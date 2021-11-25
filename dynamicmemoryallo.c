#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *ptr1;
    int n;
    printf("\nMalloc Function.\n");
    printf("Enter a size of array :\n");
    scanf("%d", &n);
    ptr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index[%d] :\n", i);
        scanf("%d", &ptr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Element at index [%d] : %d\n", i, ptr1[i]);
    }
    free(ptr1);

    //int *ptr2;
    //int n;
    printf("\nCalloc Function.\n");
    printf("Enter a size of array :\n");
    scanf("%d", &n);
    ptr1 = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index[%d] :\n", i);
        scanf("%d", &ptr1[i]);
    }

    {
        for (int i = 0; i < n; i++)
            printf("Element at index [%d] : %d\n", i, ptr1[i]);
    }

    printf("\nRealloc Function.\n");
    printf("Enter a new_size of array :\n");
    scanf("%d", &n);
    ptr1 = (int *)realloc(ptr1, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index[%d] :\n", i);
        scanf("%d", &ptr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("New_element at index [%d] : %d\n", i, ptr1[i]);
    }
    free(ptr1);
    getch();
    return 0;
}