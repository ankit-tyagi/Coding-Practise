//time = n, Space = 1
//Traverse once using two pointer approach

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
    struct node *mainpointer = head;
    struct node *resultpointer = head;

    int count = 0;

    if(head != NULL)
    {
        while(count<n)
        {
            if(mainpointer == NULL)
            {
                cout<<n<<"is greater than the no. of nodes in list";
                return;
            }
            mainpointer = mainpointer->next;
            count++;
            cout<<"x";
        }
    } 

    while(mainpointer != NULL)
    {
        mainpointer = mainpointer->next;
        resultpointer = resultpointer->next;
        cout<<"X";
    }

    cout<<resultpointer->data;
}

int main()
{
    struct node *head = NULL;
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 35); 
    cout<<"start";

    printkthfromlast(head, 3);
    cout<<"the end :P";
    return 0;
}