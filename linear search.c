#include<stdio.h>
int main()
{
    int n,pos=-1;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements is array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search: ");
    int key,i;
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
          if(key==a[i])
          {
              pos=i+1;
              break;
          }
    }
    if(pos==-1)
        printf("value not found");
    else
        printf("value found at %d",pos);



return 0;
}
