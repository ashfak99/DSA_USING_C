#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100

int stack[max];
char infix[max],postfix[max];
int top=-1;

void push(char c)
{
 stack[++top]=c;
}

char pop(){
    return stack[top--];
}

int priority(char symbol)
{
    if (symbol == '^')
    {
        return 3;
    }
    else if (symbol == '*' || symbol == '/')
    {
        return 2;
    }
    else if (symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    printf("Enter the Expression : ");
    fgets(infix, max, stdin);
    infix[strcspn(infix, "\n")] = '\0';

    int k=0;
    for (int i = 0; i < strlen(infix); i++)
    {
        char c=infix[i];
        if (isalnum(c))
        {
            postfix[k++]=c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            while (top != -1 && stack[top]!='(')
            {
                postfix[k++]=pop();
            }
            pop();
        }
        else
        {
            while (top!=-1 && priority(stack[top])>=priority(c))
            {
                postfix[k++]=pop();
            }
            push(c);
        }
    }
     while (top !=-1)
     {
        postfix[k++]=pop();
     }
     postfix[k]='\0';

     printf("\nPOSTFIX EXPRESSION : %s\n",postfix);
    
    return 0;
}
