#include <stdio.h>

// binary search is used in sorted array
int binarySearch(int arr[], int size, int element)
{

    int low, mid, high;
    low = 0;
    high = size - 1;
    // keeps on sarching until low and high converges
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// implementation of linear search for unordered =  nd in ordered array
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // unsorted array for linear search
    // int arr[] = {35, 3534, 35, 346, 334, 6546, 464, 654, 647, 57};
    int arr[] = {1, 4, 67, 75, 334, 5345, 45353};
    int size = sizeof(arr) / sizeof(int);

    // int searchIndex = linearSearch(arr, size, 75);
    int searchIndex = binarySearch(arr, size, 5345);

    printf("the element %d was found at the index %d \n", 5345, searchIndex);

    return 0;
}