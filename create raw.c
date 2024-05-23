#include<stdio.h>
#include<stdlib.h>
int data,i,position;
struct node{
    int data;
    struct node *next;
};
typedef struct node *newnode;
newnode ptr,head,head2,p,q,temp;
int main()
{
    head=0,head=0,p=0;
     while(1)
    {
        printf("enter the data to insert: ");
        scanf("%d",& data);
        if(data==-99)
        {
            break;
        }
         p=(newnode)malloc(sizeof(newnode));
        if(head==0)
        {
            p->data=data;
            p->next=NULL;
            head=p;
            q=p;
        }
         else
        {
            p->data=data;
            p->next=NULL;
            q->next=p;
            q=p;
        }
    }

    //insert at first
printf("Value = ");
scanf("%d", & position);
ptr=(newnode)malloc(sizeof(newnode));
ptr->data=position;
ptr->next=head;
printf("%d ",ptr->data);
head=ptr->next;
temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}


