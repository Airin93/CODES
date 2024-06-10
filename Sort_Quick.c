#include<stdio.h>
int i,j,temp,pivot,mid,l,h;
void print(int a[11])
{
    for(i=0; i<11; i++)
    {
        printf(" %d ",a[i]);
    }
}
void quick_sort(int a[11], int l, int h)
{
    if(l<h)
    {
        mid=partition(a, l, h);
        quick_sort(a,l,mid-1);
        quick_sort(a,mid+1,h);
    }
}
int partition(int a[11], int l, int h)
{
    pivot=a[l];
    i=l;
    j=h;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[j];
    a[j]=a[l];
    a[l]=temp;
    return j;
}
int main()
{
    int a[]= {9,4,3,1,15,20,2,24,30,11,35};
    l=0;
    h=10;
    quick_sort(a,l,h);
    print(a);
}
