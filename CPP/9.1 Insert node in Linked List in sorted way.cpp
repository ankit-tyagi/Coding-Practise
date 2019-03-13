//time = n, Space = 1
//simple approach

#include<bits/stdc++.h>

using namespace std;


struct node{
    int data;
    struct node *next;
};

struct node* push(int data)
{
    struct node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void print(struct node *head)
{
    while (head != NULL) 
    { 
        cout<<head->data<<" -> "; 
        head = head->next; 
    } 
}

void sortedInsert(struct node** head_ref, struct node* new_node) 
{ 
    struct node* current; 
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data) 
    { 
        new_node->next = *head_ref; 
        *head_ref = new_node; 
    } 
    else
    { 
        current = *head_ref; 
        while (current->next!=NULL && current->next->data < new_node->data) 
        { 
            current = current->next; 
        } 
        new_node->next = current->next; 
        current->next = new_node; 
    } 
} 

int main()
{

    struct node* head = NULL; 
    struct node *new_node = push(5); 
    sortedInsert(&head, new_node); 
    new_node = push(10); 
    sortedInsert(&head, new_node); 
    new_node = push(7); 
    sortedInsert(&head, new_node); 
    new_node = push(3); 
    sortedInsert(&head, new_node); 
    new_node = push(1); 
    sortedInsert(&head, new_node); 
    new_node = push(9); 
    sortedInsert(&head, new_node); 
    printf("\n Created Linked List\n"); 
    print(head); 

    return 0;

}