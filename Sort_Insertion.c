#include<stdio.h>
int i,j,temp;
void insertion_sort(int a[6])
{
    for(i=1;i<6;i++)
    {
        temp=a[i];
        j=i-1;
        while((j>=0) && (a[j]>temp))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    print(a);
}
void print(int a[6])
{
    for(i=0;i<6;i++)
    {
        printf(" %d ",a[i]);
    }
}
int main()
{
    int a[]={5,4,10,1,6,2};
    insertion_sort(a);
}

