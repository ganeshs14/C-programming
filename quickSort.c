#include <stdio.h>

void swap_element(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int partition(int arr[], int beg, int end)
{
    int pivot = arr[end];
    int p_index = beg - 1;
    for (int i = beg; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            p_index++;
            swap_element(&arr[p_index], &arr[i]);
        }
    }
    swap_element(&arr[p_index + 1], &arr[end]);
    return p_index + 1;
}

void quickSort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int p_index = partition(arr, beg, end);
        quickSort(arr, beg, p_index - 1);
        quickSort(arr, p_index + 1, end);
    }
}

void print(int length, int arr[])   //function to print the elements in array
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[] = {96, 5, 21, 14, 8, 33};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("\nUnsorted Array. --> \n\n");
    print(len, arr);
    
    quickSort(arr, 0, len - 1);

    printf("\n\nSorted Array by Quick Sort Algo. --> \n\n");
    print(len, arr);
    
    printf("\n");
    getchar();
    return 0;
}