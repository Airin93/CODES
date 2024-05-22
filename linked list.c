     //create a linked list and traverse
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;     // we will create a node with a pointer variable pointed to the next of that node
};

int main()
{
    struct node *a=NULL;
    struct node *b=NULL;
    struct node *c=NULL;

    a= (struct node *)malloc(sizeof(struct node)); //allocate memory
    b= (struct node *)malloc(sizeof(struct node));
    c= (struct node *)malloc(sizeof(struct node));
    a->data=100;
    b->data=200;
    c->data=300;
    a->next=b;
     b->next=c;
      c->next=NULL;

      //traverse the list

     while(a!=NULL)
     {
         printf("%d -> ", a->data);
         a=a->next;
     }
    return 0;
}
