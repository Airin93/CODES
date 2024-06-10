#include<stdio.h>
int main()
{
    int arr[100],n,i,j;
    printf("enter the array size: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("here is the final array: \n");

     for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

}
