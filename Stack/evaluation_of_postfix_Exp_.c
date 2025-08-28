#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 100

typedef struct stack{
    int top;
    int oprdstk[MAX];
} stack;

void initStack(stack *s) {
    s->top = -1;
}

void push(stack *s,int data)
{
    if(s->top==MAX-1)
    {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->oprdstk[s->top]=data;
}

int pop(stack *s)
{
    if(s->top==-1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    return s->oprdstk[s->top--];
} 

int evaluation(char *exp)
{
    stack s;
    initStack(&s);
    int i=0;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            push(&s,exp[i]-'0');
        }
        else
        {
            int op2=pop(&s);
            int op1=pop(&s);
            switch(exp[i])
            {
                case '+':
                    push(&s,op1+op2);
                    break;
                case '-':
                    push(&s,op1-op2);
                    break;
                case '*':
                    push(&s,op1*op2);
                    break;
                case '/':
                    push(&s,op1/op2);
                    break;
                default:
                    printf("Invalid operator\n");
                    return -1;
            }
        }
        i++;
    }
    return pop(&s);
}

int main()
{
    char exp[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", exp);
    int result = evaluation(exp);
    if(result != -1)
    {
        printf("The result is: %d\n", result);
    }
    return 0;
}