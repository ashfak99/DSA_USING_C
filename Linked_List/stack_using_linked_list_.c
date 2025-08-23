#include<stdio.h>
#include<stdlib.h>

int input;

typedef struct stack{
    int data;
    struct stack *next;
} stack;

void push(stack **top)
{
    stack *ptr=(stack*)malloc(sizeof(stack));
    printf("\nPlease Enter The Data : ");
    scanf("%d",&input);
    ptr->data=input;
    ptr->next=*top;
    *top=ptr;
}

void pop(stack **top)
{
    stack *ptr;
    if (ptr==NULL)
    {
        printf("STACK is empty");
    }
    else{
    ptr=*top;
    *top=ptr->next;
    free(ptr);}
}

void peak(stack *top)
{
    if (top==NULL)
    {
       printf("STACK is Empty");
    }
    else{
    printf("\nTop Element : %d",top->data);
    }
}

void display(stack *top)
{
    stack *ptr=top;
    if (top==NULL)
    {
       printf("STACK is Empty");
    }
    else{
    while (ptr!=NULL)
    {
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
 }
}

int main(int argc, char const *argv[])
{
    stack *top=NULL;
    int choice;
    while (1)
    {
        printf("\nPlease Choose Any One Option \n");
        printf("1. Push\n2. Pop\n3. Peak\n4. Display\n5. Exit  : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(&top);
            break;
        case 2:
            pop(&top);
            break;
        case 3:
            peak(top);
            break;
        case 4:
            display(top);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
    
    return 0;
}
