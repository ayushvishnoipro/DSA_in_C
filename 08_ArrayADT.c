#include <stdio.h>
#include <stdlib.h>

// creating of a structure
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize)
{
    // in c++ we use constructor to create array
    //  (*a).total_size = tsize;
    //  (*a).used_size = usize;
    //  (*a).ptr = (int*)malloc(tsize * sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int)); //malloc used for dynamic memory allocation 
    //here ptr is pointing to the 0th element of the adt array allocated in the heap memory
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter the element %d =", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main()
{

    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("we are running setVal now\n");
    setVal(&marks);//we are using the adress to that when we ascess the values by de refrencing it and perform func
    printf("we are running show now\n");

    show(&marks);

    return 0;
}