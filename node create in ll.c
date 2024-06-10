#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *createlist(int n);
void displaylist(node *head);

int main()
{
    int n;
    node *newnode  = NULL;
    printf("How many nodes: ");
    scanf("%d",&n);
    newnode = createlist(n);
    displayList(newnode);
}

node *createlist(int n)
{
    int i;
    node *head=NULL;
    node *temp=NULL;
    node *p=NULL;

    for(i=0;i<n;i++){

        temp = (node*)malloc(sizeof(node));
        printf("\nEnter the data for node number %d: ",i+1);
        scanf("%d",&(temp->data));
        temp->next = NULL;

        if(head==NULL)
        {
            head = temp;
        }
        else{
            p = head;
            while(p->next !=NULL)
                {
                    p = p->next;
                }
            p->next = temp;
        }
    }
    return head;
}

void displayList(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        printf("%d-> ",p->data);
        p = p->next;
    }
}





