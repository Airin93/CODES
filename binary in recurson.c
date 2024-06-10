#include<stdio.h>
void binary_search(int A[], int key, int l, int h)
{
    if(l>h)
    {
        printf("%d is Not Found!!!\n",key);
    }
    else
    {
        int mid;
        mid=(l+h)/2;
        if(A[mid]==key)
        {
            printf("%d is Found!!!\n",A[mid]);
        }
        else if(A[mid]>key)
        {
            binary_search(A,key,l,mid-1);
        }
        else if(A[mid]<key)
        {
            binary_search(A,key,mid+1,h);
        }
    }
}
int main()
{
    int n,key,i,l,h;
    printf("Enter Array Size = ");
    scanf("%d",&n);
    int A[n];
    printf("Enter The Elements Of The Array =\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter The Number You Want to Find = ");
    scanf("%d", &key);
    l=0,h=n-1;
    binary_search(A,key,l,h);
}
#include<stdio.h>
void binary_search(int A[], int key, int l, int h)
{
    if(l>h)
    {
        printf("%d is Not Found!!!\n",key);
    }
    else
    {
        int mid;
        mid=(l+h)/2;
        if(A[mid]==key)
        {
            printf("%d is Found!!!\n",A[mid]);
        }
        else if(A[mid]>key)
        {
            binary_search(A,key,l,mid-1);
        }
        else if(A[mid]<key)
        {
            binary_search(A,key,mid+1,h);
        }
    }
}
int main()
{
    int n,key,i,l,h;
    printf("Enter Array Size = ");
    scanf("%d",&n);
    int A[n];
    printf("Enter The Elements Of The Array =\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter The Number You Want to Find = ");
    scanf("%d", &key);
    l=0,h=n-1;
    binary_search(A,key,l,h);
}
