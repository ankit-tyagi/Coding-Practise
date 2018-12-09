#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;
    node(int data)
    {
        this->data = data;
        left=right=NULL;
    }
};

void printPreorder(struct node *root)
{
    if(root==NULL)
        return;
    cout<< root->data <<"     ";
    printPreorder(root->left);
    printPreorder(root->right);

}

void printInorder(struct node *root)
{
    if(root==NULL)
        return;
    printInorder(root->left);
    cout<< root->data <<"     ";
    printInorder(root->right);
}

void printPostorder(struct node *root)
{
    if(root==NULL)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<"     ";
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreorder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInorder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
  
    return 0; 
}