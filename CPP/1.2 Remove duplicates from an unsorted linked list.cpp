//time = n^2, Space = 1
//Merge sort to sort then remove the duplicate through traversing
//yet to complete

#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *newnode(int data)
{
    struct node *temp = new node;
    temp->data = data;
    temp->next=NULL;
    return temp;
}

void print(struct node *start)
{
    while(start)
    {
        cout<<start->data <<" -> ";
        start= start->next;
    }
}


int main()
{
    struct node *start = newnode(10); 
    start->next = newnode(12); 
    start->next->next = newnode(11); 
    start->next->next->next = newnode(11); 
    start->next->next->next->next = newnode(12); 
    start->next->next->next->next->next = newnode(11); 
    start->next->next->next->next->next->next = newnode(10); 
    //10 12 11 11 12 11 10
    //10 12 11
    printf("Linked list before removing duplicates "); 
    print(start); 
    //cout<<"this is running";
    return 0;
}