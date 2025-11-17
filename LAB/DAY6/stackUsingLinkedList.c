#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int top=-1;

typedef struct STACK
{
    int item;
    struct STACK *link;
}STACK;

void push(STACK **head)
{
    if (top==SIZE-1)
    {
        printf("\nSTACK IS OVERFLOW\n");
        return;
    }
    
    int val;
    printf("\nPlease enter the value of element : ");
    scanf("%d",&val);

    STACK *nodo=(STACK*)malloc(sizeof(STACK));
    nodo->item=val;
    nodo->link=*head;
    *head=nodo;
    top++;
}

void pop(STACK **head)
{
    if (top==-1 || *head==NULL)
    {
        printf("\nSTACK IS UNDERFLOW\n");
        return;
    }
    STACK *temp=*head;
    *head=temp->link;
    printf("\n%d is POPPED\n",temp->item);
    free(temp);
    top--;
}

void displaySTACK(STACK *head)
{
    if (top==-1 || head ==NULL)
    {
        printf("\nSTACK IS UNDERFLOW\n");
        return;
    }

    STACK *temp=head;
    while (temp!=NULL)
    {
        printf("\n%d",temp->item);
        temp=temp->link;
    }
}

int main(int argc, char const *argv[])
{
    STACK *s=NULL;
    while (1)
    {
        int choice;
        printf("\nPlease choose anyone option.\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            displaySTACK(s);
            break;
        case 4:
            printf("\nEXITING...");
            exit(0);
        default:
            printf("\n!!!!!WRONG CHOICE!!!!!");
            break;
        }
    }
    return 0;
}
