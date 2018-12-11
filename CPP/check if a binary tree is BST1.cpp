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

bool isitbst(struct Node *node, struct Node *prev)
{
    if(node)
    {
        if(!isitbst(node->left, prev))
            return false;
        if(prev!=NULL && node->data <= prev->data)
            return false;
        prev=node;

        return isitbst(node->right,prev);
    }
    return true;
}

bool isbst(struct Node *node) 
{ 
   struct Node *prev = NULL; 
   return isitbst(node, prev); 
} 

int main()
{
    struct Node *root = newnode(4);
    root->left = newnode(2);
    root->right= newnode(5);
    root->left->left  = newnode(1);
    root->left->right = newnode(3);

    if(isbst(root))
        cout<<"It is BST";
    else
        cout<<"it is not ";
    return 0;
}