#include<stdio.h>
#include<stdlib.h>
struct traverse
{
   int value;
   struct traverse *next;
};
typedef struct traverse node;
node *head,*ptr,*p,*q;
int main()
{
    int x;
    head=0,q=0;
    printf("-99 to break\n");
    for(; ;)
    {
        scanf("%d",&x);
        if(x==-99)
            break;
        p=(node*)malloc(sizeof(node));
        if(head==0)
        {
            p->value=x;
            p->next=NULL;
            head=p,
            q=p;
        }
          else
        {
           p->value=x;
           p->next=NULL;
           q->next=p;
           q=p;
        }

    }
    ptr=head;
    while(ptr!= NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
return 0;
}
