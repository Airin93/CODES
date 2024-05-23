#include<stdio.h>
int main()
{
    int arr[100],n,key,i,mid;
    printf("enter the array size: ");
    scanf("%d",&n);
    arr[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        printf(" %d\n",arr[i]);
    }
    int l=0,h=n-1;
    printf("enter the value you wish to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            printf("value found at %d\n",mid+1);
            break;
        }
        if(key>arr[mid])
        {
            l=mid+1;
        }
        if(key<arr[mid])
        {
            h=mid-1;
        }

    }
    if(key!=arr[mid])
        printf("value not found\n");

    return 0;



}
