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
// code for Deletion
void indexDeletion(int arr[], int size, int index)
{

    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    display(arr, 5);
    indexDeletion(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}