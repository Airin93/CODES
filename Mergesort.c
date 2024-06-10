#include <stdio.h>

void merge(int A[], int lb, int mid, int ub)
{
    int i, j, k;
    int n1 = mid - lb + 1;
    int n2 = ub - mid;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = A[lb + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = A[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = lb;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(A, lb, mid);
        mergeSort(A, mid + 1, ub);
        merge(A, lb, mid, ub);
    }
}

int main()
{
    int A[1000], n;
    printf("Enter Number of Elements in Array : ");
    scanf("%d", &n);
    printf("Enter Elements of Array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    mergeSort(A, 0, n - 1);
    printf("\nSorted Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}