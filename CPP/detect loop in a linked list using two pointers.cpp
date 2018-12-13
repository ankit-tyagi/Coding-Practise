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

bool detectLoop(struct Node *head)
{
    struct Node *slowptr = head;
    struct Node *fastptr = head;

    while(slowptr && fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr)
            return true;
    }
    return false;
}

int main()
{
    struct Node *head = NULL;
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10);

    head->next->next->next->next = head; 
  
    if (detectLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
  
    return 0;
}