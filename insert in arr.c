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
    printf("enter the position and value: ");
    scanf("%d %d", &pos,&value);
    if(pos>=n)
    {
        arr[n]=value;
        n++;
    }
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
