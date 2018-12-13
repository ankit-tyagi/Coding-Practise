#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int data)
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = *head_ref;
    *head_ref = newnode;
}

int startingpoint(struct Node *head1, struct Node *head2)
{
    while(head1->next!=head2->next)
    {
        head1=head1->next;
        head2=head2->next;
    }
    head2 = head2->next;
    while(head2->next != head1)
        head2 = head2->next;

    head2->next = NULL;
    return head1->data;
}

int detectLoop(struct Node *head)
{
    struct Node *slowptr = head;
    struct Node *fastptr = head;

    while(slowptr && fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr)
            return startingpoint(slowptr, head);
    }
    return -1;
}

void printlist(struct Node * head)
{
    cout<<"Printing List ";
    while(head!=NULL)
    {
        cout<<"  "<<head->data<<" ";
        head=head->next;
    }
    return;
}

int main()
{
    struct Node *head = NULL;
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10);

    head->next->next->next->next = head; 
    
    int k = detectLoop(head);
    printlist(head);
    if (k != -1) 
        cout << "Loop found, and starting point is with node value " <<k; 
    else
        cout << "No Loop"; 
  
    return 0;
}