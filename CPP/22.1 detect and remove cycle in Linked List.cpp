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

bool detectloop(struct node *head)
{
    struct node *fastptr = head;
    struct node *slowptr = head;

    while(slowptr && fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;

        if(slowptr == fastptr)
        {
            cout<<slowptr->data<<"is value at circle starting point and "<<slowptr<<" address value"<<endl;
            while(fastptr->next != slowptr)
                fastptr = fastptr->next;
            fastptr->next=NULL;            
            return 1;
        }
    }
    return 0;
}

void print(struct node *head)
{
    while (head != NULL) 
    { 
        cout<<head->data<<" -> "; 
        head = head->next; 
    } 
}

int main()
{

    struct node* head = NULL;
  
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10); 

    head->next->next->next->next = head; 
  
    if (detectloop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 

    print(head);

    return 0;

}