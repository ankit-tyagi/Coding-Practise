#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

void push(struct node **headref, int data){
    struct node *newnode = new node;
    newnode->data = data;
    newnode->next = *headref;
    *headref = newnode;
}

void printkthfromlast(struct node *head, int n)
{
    int len = 0;
    struct node *temp = head;

    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    if(len < n )
        return;
    
    temp = head;

    for(int i=0;i<len-n+1;i++)
    {
        temp = temp->next;
    }

    cout<<temp->data;
}

int main()
{
    struct node *head = NULL;
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 35); 

    printkthfromlast(head, 3);
    return 0;
}