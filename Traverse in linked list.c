#include<stdio.h>
#include<stdlib.h>
struct traverse
{
   int value;
   struct traverse *next;
};
typedef struct traverse node;
node *h, *ptr, *p, *q;

main()
{
    int x;
    h=0, q=0;
    for(; ;)
    {
        printf("-99 to break\n");
        scanf("%d",&x);
        if(x==-99)
            break;
        p=(node*)malloc(sizeof(node));
        //printf("%d\n",p);
        if(h==0)
        {
           p->value=x;
           p->next=NULL;
            h=p;
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
    ptr=h;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
}
