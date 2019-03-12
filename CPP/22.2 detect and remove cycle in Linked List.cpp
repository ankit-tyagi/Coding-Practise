//time = n, Space = 1
//useing Hashing

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
    unordered_set<node *> s;
    while(head!=NULL)
    {
        if(s.find(head) != s.end())
        {
            cout<<head->data<<" this is the point with "<<head<<" as address"<<endl;
            struct node *nextnode = head;
            while(nextnode->next != head)
                nextnode = nextnode->next;
            nextnode->next=NULL; 

            return 1;
        }
    s.insert(head);
    head = head->next;
    }
    return 0;
}

void print(struct node *head)
{
    cout<<endl<<"List is:  ";
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
        cout << "Loop found "; 
    else
        cout << "No Loop"; 

    print(head);

    return 0;

}