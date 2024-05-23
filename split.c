#include<stdio.h>
#include<stdlib.h>
int v,i,position;
struct list
{
    int data;
    struct list *next;
};
typedef struct list *node;
node ptr,h1,h2,p,q;

int main()
{
    h1=0,h2=0,p=0;
    while(1)
    {
        scanf("%d",& v);
        if(v==0)
        {
            break;
        }
        p=(node)malloc(sizeof(node));
        if(h1==0)
        {
            p->data=v;
            p->next=NULL;
            h1=p;
            q=p;
        }
        else
        {
             p->data=v;
            p->next=NULL;
           q->next=p;
            q=p;
        }
    }
    printf("Enter Position-");
    scanf("%d",&position);
    ptr=h1;
    i=1;
    while(i!=position)
    {
        ptr=ptr->next;
        i++;
    }
   // printf("%d ", ptr->data);
    h2=ptr->next;
    ptr->next= NULL;
    printf("List-1\n");
    ptr=h1;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\nList-2\n");
     ptr=h2;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}
