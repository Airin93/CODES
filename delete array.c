#include<stdio.h>
int main()
{
    int arr[100],n,pos,value,i,j;
    printf("enter the array size: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("here is your array: %d\n",arr[i]);
    }

    printf("enter the position to delete: ");
    scanf("%d",&pos);
    for(i=pos-1;i<=n-2;i++)
    {
        arr[i]=arr[i+1];

    }
    arr[n-1]=NULL;
    for(i=0;i<n;i++)
    {
        printf("here is your array: %d\n",arr[i]);
    }
}
