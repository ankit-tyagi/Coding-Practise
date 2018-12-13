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

int looplength(struct Node *head)
{
    struct Node *current = head;
    int count = 1;
    while(current->next != head)
    {
        count++;
        current = current->next;
    }
    return count;
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
            return looplength(slowptr);
    }
    return -1;
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
    if (k != -1) 
        cout << "Loop found, and length is " <<k; 
    else
        cout << "No Loop"; 
  
    return 0;
}