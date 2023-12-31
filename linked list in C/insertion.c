#include <stdio.h>

// traversal
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// code for insertion
int indexInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1; // this indicates your insertion is not sucessful
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    display(arr, 5);
    indexInsertion(arr, size, element, 100, index);
    size += 1;
    if (arr[index] == element)
    {
        display(arr, size);
    }
    else{
        printf("sorry");
    }

    return 0;
}