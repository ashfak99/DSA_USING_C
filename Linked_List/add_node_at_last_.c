#include<stdio.h>
#include<stdlib.h>
int d;
struct node{
    int info;
    struct node *link;
};

void print(struct node *head)
{
    if (head==NULL)
    {
        printf("List is Empty");
    }
    struct node *ptr = NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;
    }
}

void add_at_end(struct node *head)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=d;
    temp->link=NULL;
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

int main(int argc, char const *argv[])
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->info=20;
    head->link=NULL;

    int n;

    printf("How many node you want to add at last : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of node : ");
        scanf("%d",&d);
        add_at_end(head);
    }
    print(head);
    return 0;
}
