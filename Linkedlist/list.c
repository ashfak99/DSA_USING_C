#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};

void print(struct node *head){
    if (head==NULL)
    {
        printf("List is Empty : ");
    }
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;
    }
    
}

int main(int argc, char const *argv[])
{
    struct node *head;
    head = (struct node*)malloc(sizeof(struct node));
    head->info=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->info=80;
    current->link=NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->info=100;
    current->link=NULL;
    head->link->link=current;

    print(head);
    return 0;
}
