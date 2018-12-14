#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

struct LinkedList{
    struct Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void print()
    {
        struct Node *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        struct Node *temp = new struct Node(data);
        temp->next = head;
        head = temp;
    }

    void reverse()
    {
        struct Node *current = head;
        struct Node* next =NULL, *prev = NULL;

        while(current!=NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};


int main()
{
    LinkedList ll; 
    ll.push(20); 
    ll.push(4); 
    ll.push(15); 
    ll.push(85); 
  
    cout << "Given linked list\n"; 
    ll.print(); 
  
    ll.reverse(); 
  
    cout << "\nReversed Linked list \n"; 
    ll.print(); 
    return 0; 
}