#include<stdio.h>
int main()
{
    int arr[100],n,key,i,pos=-1;
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
    printf("enter the value you wish to search: ");
    scanf("%d", &key);
    for(i=0;i<n;i++)
    {
       if(key == arr[i])
       {
           pos=i+1;
           break;
       }
    }
    if(pos==-1)
         printf("value not found\n");

     else
        printf("value found at %d\n",pos);

}
