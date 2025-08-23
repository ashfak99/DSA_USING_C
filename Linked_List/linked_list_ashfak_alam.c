#include<stdio.h>
#include<stdlib.h>

int d;

struct node
{
    int data;
    struct node *link;
};

void add_beginning(struct node **head, int dataa ){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=dataa;
    temp->link=*head;
    *head=temp;
}

void add_end(struct node **head , int dataa)
{
    struct node *ptr, *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=dataa;
    temp->link=NULL;
    ptr=*head;
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void print_list(struct node *head){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    while (ptr->link != NULL)
    {
        printf("%d-->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n\n");
}

int main(int argc, char const *argv[])
{
    struct node *head=NULL;
    add_beginning(&head,10);
    add_end(&head,11);
    add_beginning(&head,9);
    add_end(&head,12);
    print_list(head);
    return 0;
}