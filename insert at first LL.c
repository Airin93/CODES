#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node *head;

void createlist(int n);
void insert_begin(int data);
void displaylist();

int main()
{
    int n, data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createlist(n);

    printf("\ninputed Data in the list \n");
    displaylist();

    printf("\nEnter data to insert at beginning of the list: ");
    scanf("%d", &data);

    insert_begin(data);

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

void insert_begin(int data)
{
    struct node *newnode;
    newnode= (struct node*) malloc(sizeof(struct node));
     if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else{
        newnode->data=data;
        newnode->next=head;
        head=newnode; //make newnode as first node
        printf("inserted succesfully\n");

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

