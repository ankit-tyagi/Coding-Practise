//time = n, Space = 1
//use 2 pointer approach to find the result
//Floyd’s Cycle-Finding Algorithm

#include<bits/stdc++.h>

using namespace std;


struct node{
    int data;
    struct node *next;
};

void push(struct node **headref, int data)
{
    struct node *newnode = new node;
    newnode->data = data;
    newnode->next = *headref;
    *headref = newnode;
}

void print(struct node *head)
{
    while (head != NULL) 
    { 
        cout<<head->data<<" -> "; 
        head = head->next; 
    } 
    cout<<endl;
}

int main()
{

    struct node* head1 = NULL;
    struct node *head2 = NULL;
  
    push(&head1, 20); 
    push(&head1, 18); 
    push(&head1, 15); 
    push(&head1, 10);

    push(&head2, 25);
    push(&head2, 21); 
    push(&head2, 16);
    push(&head2, 8);

    print(head1);
    print(head2);


    
    return 0;

}