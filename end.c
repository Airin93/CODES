#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node *head,*newnode,*temp;

void createlist(int n);
void insert_end(int data);
void displaylist();

int main()
{
    int n, data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createlist(n);

    printf("\ninputed Data in the list \n");
    displaylist();

    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);

    insert_end(data);

    printf("\nData in the list \n");
    displaylist();

    return 0;

}

void createlist(int n)
{
    struct node *newNode, *temp;
    int data, i;
     head = (struct node *)malloc(sizeof(struct node));
     if(head==NULL)
       printf("Unable to allocate memory.");

       else
       {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
       head->data=data;
       head->next=NULL;
       temp=head;

       for(i=2;i<=n;i++)
       {
           newNode = (struct node *)malloc(sizeof(struct node));
           if(newNode==NULL)
           {
               printf("unable to allocate memory");
               break;
           }
           else
           {
            printf("Enter the data of node 1: ");
            scanf("%d", &data);
             newNode->data = data;
              newNode->next = NULL;
              temp->next=newNode;
              temp = temp->next;
           }


       }
       printf("LINKED LIST CREATED SUCCESSFULLY\n");
       }

}

void insert_end(int data)
{
    struct node *newnode,*temp;
    newnode= (struct node*) malloc(sizeof(struct node));
     if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else{
        newnode->data=data;
        newnode->next=NULL;
        temp=head;
        while(temp!=NULL &&  temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newnode;
printf("data inserted successfully\n");
    }
}

void displaylist()
{
     struct node *temp;
     if(head == NULL)
      {
        printf("List is empty.\n");
      }

    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }

}

