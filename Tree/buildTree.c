#include<stdio.h>
#include<stdlib.h>

typedef struct TREENODE
{
    int data;
    struct TREENODE *leftTree;
    struct TREENODE *rightTree;
} TREENODE;

static int idx = -1;

TREENODE* buildTree(int preOrderArr[])
{
    idx++;
    if (preOrderArr[idx] == -1)
    {
        return NULL;
    }
    
    TREENODE *root = (TREENODE*)malloc(sizeof(TREENODE));
    root->data = preOrderArr[idx];
    root->leftTree = buildTree(preOrderArr);
    root->rightTree = buildTree(preOrderArr);
    return root;
}

void preOrder(TREENODE *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preOrder(root->leftTree);
    preOrder(root->rightTree);
}

void inOrder(TREENODE *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->leftTree);
    printf("%d ", root->data);
    inOrder(root->rightTree);
}

void postOrder(TREENODE *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->leftTree);
    postOrder(root->rightTree);
    printf("%d ", root->data);
}

int height(TREENODE *Root)
{
    if (Root == NULL)
    {
        return 0;
    }
    int leftHt = height(Root->leftTree);
    int rightHT = height(Root->rightTree);
    return ((leftHt > rightHT) ? leftHt : rightHT) + 1;
}

int countOfNodes(TREENODE *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = countOfNodes(root->leftTree);
    int rightCount = countOfNodes(root->rightTree);
    return leftCount + rightCount + 1;
}

int main(int argc, char const *argv[])
{
    TREENODE *root = NULL;
    int choice;

    while (1)
    {
        printf("\nPlease choose anyone option.\n1.Build Tree\n2.PreOrder Traversal\n3.InOrder Traversal\n4.PostOrder Traversal\n5.Height of Tree\n6.No. of Nodes\n7.Exit   : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            {
                int size;
                printf("\nPlease Enter the no of element of preOrder :  ");
                scanf("%d", &size);
                int preOrderArray[size];
                printf("\nPlease enter the preorder array : ");
                for (int i = 0; i < size; i++)
                {
                    scanf("%d", &preOrderArray[i]);
                }
                idx = -1;
                root = buildTree(preOrderArray);
            }
            break;
        case 2:
            printf("\n");
            preOrder(root);
            printf("\n");
            break;
        case 3:
            printf("\n");
            inOrder(root);
            printf("\n");
            break;
        case 4:
            printf("\n");
            postOrder(root);
            printf("\n");
            break;
        case 5:
            printf("\nHeight of Tree : %d\n", height(root));
            break;
        case 6:
            printf("\nNo. of Nodes : %d\n", countOfNodes(root));
            break;
        case 7:
            exit(0);
        default:
            printf("\n\n!!!!!INVALID CHOICE!!!!!\n\n");
            break;
        }
    }
    return 0;
}