#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
 
int stack[SIZE];
int top=-1;

void push()
{
    if (top==SIZE-1)
    {
        printf("\nStack is OVERFLOW\n");
        return;
    }

    int val;

    printf("\nPlease enter the value of element : ");
    scanf("%d",&val);

    top++;
    stack[top]=val;
}

void pop()
{
    if (top==-1)
    {
        printf("\nStack is UNDERFLOW\n");
        return;
    }
    int val=stack[top];
    top--;
    printf("\n%d is POPPED",val);
}

void displayStack()
{
    if (top==-1)
    {
        printf("\nStack is UNDERFLOW\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d",stack[i]);
    }
}

int main(int argc, char const *argv[])
{
    while (1)
    {
        int choice;
        printf("\nPlease choose anyone option\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            displayStack();
            break;
        case 4:
            printf("\nEXITING...\n");
            exit(0);
        default:
            printf("\n!!!!!WRONG CHOICE!!!!!\n");
            break;
        }
    }
    return 0;
}
