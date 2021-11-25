#include <stdio.h>
/*
    Simple algo. (Comparision is brute force here)
    Basically selects an elements in each iteration and swap it with the appropriate position.
    Time complexity :   BestCase - O(n^2); 
                        AvgCase - O(n^2); 
                        WorstCase - O(n^2) ;
    Space complexity : O(1) ,since no auxillary space is required.;
*/
void selectionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) //iterating i : size-1 times, ie.upto secondlast element. To avoid array overflow.
    {
        int min = i;                        //selecting first element as minimum ie.index[0]
        for (int j = i + 1; j < size; j++)  //iterating j : from index[1] to size, ie. the last element
        {
            if (arr[j] > arr[min])          //in each iteration checking index[j] > index[min] - true:updating index of min and later swap(j,min)
            {                                                                               // - false:directly swap the j and min
                min = j;                    // Sorting in Ascending order:(arr[j] > arr[min])
            }                               // Sorting in Descending order:(arr[j] < arr[min])
            int tmp = arr[j];
            arr[j] = arr[min];
            arr[min] = tmp;
        }
    }
}

int main()
{
    int arr[] = {9, 6, 1, 4, 8, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("\nUnsorted Array --> \n\n");
    for (int i = 0; i < len; i++)
        printf("\t%d", arr[i]);

    selectionsort(arr, len); // Calling a function

    printf("\n\nSorted Array by Selection Sort Algo. --> \n\n");
    for (int i = 0; i < len; i++)
        printf("\t%d", arr[i]);
    getchar();
    return 0;
}