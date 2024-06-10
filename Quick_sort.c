#include <stdio.h>

int Partition(int A[], int low, int high)
{
    int pivot, i, j, temp;

    pivot = A[high];
    i = low - 1;

    for (j = low; j < high; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    temp = A[i + 1];
    A[i + 1] = A[high];
    A[high] = temp;

    return i + 1;
}

void Quicksort(int A[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int p;
    p = Partition(A, low, high);
    Quicksort(A, low, p - 1);
    Quicksort(A, p + 1, high);
}

int main()
{
    int x, A[100];

    printf("Array length : ");
    scanf("%d", &x);
    printf("Input Array : \n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &A[i]);
    }

    Quicksort(A, 0, x - 1);

    printf("The sorted Array : ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", A[i]);
    }
}