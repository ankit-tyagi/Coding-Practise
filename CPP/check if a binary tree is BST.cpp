#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node *newnode(int data)
{
    struct Node * node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

bool isbst(struct Node *node, int min, int max)
{
    if(node == NULL)
        return 1;
    
    if(node->data < min || node->data > max)
        return 0;
    
    return (isbst(node->left, min, node->data) && isbst(node->right, node->data, max));
}

int main()
{
    struct Node *root = newnode(4);
    root->left = newnode(2);
    root->right= newnode(5);
    root->left->left  = newnode(1);
    root->left->right = newnode(3);

    if(isbst(root, INT_MIN, INT_MAX))
        cout<<"It is BST";
    else
        cout<<"it is not ";
    return 0;
}