#include <stdio.h>
/*
    Maintains sorted and unsorted part.
    with each iteration, one element from unsorted part is moved to the sorted part. 
    Time complexity :   BestCase - O(n); 
                        AvgCase - O(n^2); 
                        WorstCase - O(n^2) ;
    Space complexity : O(1) ,since no auxillary space is required.;
*/
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)          //iteration starts with index[1], coz first element is considered as sorted.
    {                                       //Array = {5, 2, 4, 7} 
        int temp = arr[i];                  // Iteration01: temp = arr[1] --> temp = 2
        int j = i - 1;                      // j = 1 - 1 --> j=0
        while (j >= 0 && temp < arr[j])     //while(0 >= 0 && 2 < arr[0]) -->(true && 2 < 5)-->(T && T)
        {                                   
            arr[j + 1] = arr[j];            //arr[0+1] = arr[0]
            j--;                            // j = -1 iteration01 end. while(-1>=0:False)
        }                                   // arr[-1 + 1] = temp;
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {96, 5, 21, 14, 8, 33};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("\nUnsorted Array. --> \n\n");
    for (int i = 0; i < len; i++)
        printf("\t%d", arr[i]);

    insertionSort(arr, len);

    printf("\n\nSorted Array by Insertion Sort Algo. --> \n\n");
    for (int i = 0; i < len; i++)
        printf("\t%d", arr[i]);

    printf("\n");
    getchar();

    return 0;
}