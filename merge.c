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
    while(1)
    {
        scanf("%d",& v);
        if(v==0)
        {
            break;
        }
        p=(node)malloc(sizeof(node));
        if(h2==0)
        {
            p->data=v;
            p->next=NULL;
            h2=p;
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
    ptr=h1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
   // printf("%d ", ptr->data);
   ptr->next=h2;
    printf("List-1\n");
    ptr=h1;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}
