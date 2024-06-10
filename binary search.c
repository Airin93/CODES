#include<stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements is array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0,h=n-1,mid;
    printf("enter the number you want to search: ");
    int key,i;
    scanf("%d",&key);

     for(int i=0;i<n;i++)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            printf("value found at %d",mid+1);
            break;
        }
        if(key<a[mid])
            {
                h=mid-1;
            }
         else
         {
             l=mid+1;
         }
    }
    if(key!=a[mid])
        printf("value not found\n");
 return 0;

}
