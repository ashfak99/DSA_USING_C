#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *link;
};

void insert_At_Begi_ashfak(struct node **head, int d)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info=d;
    temp->link=*head;
    *head=temp;
}

void print_node_ashfak(struct node *head)
{
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d -> ",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL\n\n");
}

void insert_At_End_ashfak(struct node **head, int d)
{
    struct node *ptr, *temp = (struct node*)malloc(sizeof(struct node));

    temp->info=d;
    temp->link=NULL;
    ptr=*head;
    while (ptr->link!=NULL)
    {
       ptr=ptr->link;
    }
    ptr->link=temp;
}