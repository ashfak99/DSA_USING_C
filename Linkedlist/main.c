#include<stdio.h>
#include<stdlib.h>
#include"linked_list_ashfak_.h"
int main(int argc, char const *argv[])
{
    int ch,d;
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->info=10;
    head->link=NULL;
    while (1)
    {
        printf("\n\n1.Insert at Beginnering\n2.Insert at End\n3.Print\n4.Exit \n\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the Data : ");
            scanf("%d",&d);
            insert_At_Begi_ashfak(&head,d);
            break;
        case 2:
              printf("Enter the Data : ");
              scanf("%d",&d);
              insert_At_End_ashfak(&head,d);
              break;
        case 3:
              print_node_ashfak(head);
              break;
        case 4:
              return 0;
              break;
        default:
            printf("Wrong Choice !!!!!");
            break;
        }
    }
    return 0;
}
