#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    float coefficient;
    int exponential;
    struct node* link;
}node;

node* insert(node* head, float coef, int expo)
{
    node* temp;
    node* newP=malloc(sizeof(node));
    newP->coefficient=coef;
    newP->exponential=expo;
    newP->link=NULL;
    if (head==NULL || expo<head->exponential)
    {
        newP->link=head;
        head=newP;
    }
    else{
        temp=head;
        while (temp->link!=NULL && temp->link->exponential < expo)
        {
            temp=temp->link;
        }
        newP->link=temp->link
    }
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
