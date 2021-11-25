#include <stdio.h>
#include <stdlib.h >
#include <conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
};

void printpostorder(struct node *node)
{
    if (node == NULL)
        return;
    printpostorder(node->left);
    printpostorder(node->right);
    printf(" %d\t", node->data);
}

void printinorder(struct node *node)
{
    if (node == NULL)
        return;
    printinorder(node->left);
    printf(" %d\t", node->data);
    printinorder(node->right);
}

void printpreorder(struct node *node)
{
    if (node == NULL)
        return;
    printf(" %d\t", node->data);
    printpreorder(node->left);
    printpreorder(node->right);
}

int main()
{
    struct node *root = newnode(80);

    root->left = newnode(5);
    root->right = newnode(10);
    root->left->left = newnode(15);
    root->left->right = newnode(20);
    printf("\t<--Binary Tree Traversal-->\n\n");

    printf("Preorder Traversal Method:\n-->");
    printpreorder(root);

    printf("\n\nInorder Traversal Method:\n-->");
    printinorder(root);

    printf("\n\nPostorder Traversal Method:\n-->");
    printpostorder(root);

    getch();
    return 0;
}