#include <stdio.h>
void merge(int arr[], int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int leftarr[len1], rightarr[len2];

    for (int i = 0; i < len1; i++)
        leftarr[i] = arr[start + i];
    for (int j = 0; j < len2; j++)
        rightarr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;

    while (i < len1 && j < len2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while (i < len1)
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while (j < len2)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void print(int length, int arr[]) //function to print the elements in array
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[] = {96, 50, 21, 8, 33, 10, 77};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("\nUnsorted Array. --> \n\n");
    print(len, arr);

    mergeSort(arr, 0, len - 1);

    printf("\n\nSorted Array by Merge Sort Algo. --> \n\n");
    print(len, arr);

    printf("\n");
    getchar();

    return 0;
}