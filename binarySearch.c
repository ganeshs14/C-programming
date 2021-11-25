#include <stdio.h>
/*
    Only used on sorted array.
    Efficient technique for searching.
    Time complexity : BestCase - O(1); AvgCase - O(log n); WorstCase - O(log n) ;
    Space complexity : O(1), since no auxillary space is required. ;
*/ 
int binarySearch(int arr[], int key, int beg, int end)
{
    while (beg <= end)              //cond.:if beg == end then array is remained only with a single element.
    {
        int mid = (beg + end) / 2;  //mid index divides array in 2 parts.
        if (key == arr[mid])        // {beg, ele, key_ele, ele, end} --> midIndex = key
            return mid;
        else if (key > arr[mid])    // {beg, ele, mid, key_ele, ele, end} --> {key_ele, ele, end}
            beg = mid + 1;
        else                        // {beg, key_ele, mid, ele, end} --> {beg, ele, key_ele}
            end = mid - 1;          
    }
    return -1;
}
void print(int length, int arr[])   //function to print the elements in array
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[5] = {12,23,45,67,89};
    int key;
    int length = sizeof(arr) / sizeof(arr[0]);  //Finding length of the array.
    printf("\nArray to be searched :\n");
    print(length, arr);

    printf("\nEnter Search_Key :\n");
    scanf("%d", &key);

    int position = binarySearch(arr, key, 0, length - 1);
    if (position == -1)
    {
        printf("\nKey not found!!\n");
    }
    else
    {
        printf("\nKey found at position [%d]\n\n", position + 1);
    }
    getchar();
    return 0;
}