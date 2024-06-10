#include<stdio.h>
int i,j,min,temp;
void selection_sort(int A[5])
{
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
    print_arr(A);
}
void print_arr(int A[5])
{
    for(i=0;i<5;i++)
    {
        printf(" %d ",A[i]);
    }
}
int main()
{
  int A[]={9,13,15,11,2};
  selection_sort(A);
}

