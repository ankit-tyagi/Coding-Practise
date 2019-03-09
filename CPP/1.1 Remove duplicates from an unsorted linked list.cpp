//time = n^2, Space = 1
//brute force using two loops

#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *newNode(int data)
{
    struct node *temp = new node;
    temp->data=data;
    temp->next = NULL;
    return temp;
}

void print(struct node *start)
{
    while(start)
    {
        cout<<start->data<<"  ->  ";
        start=start->next;
    }
}

void removeduplicate(struct node *start)
{
    node *ptr1, *ptr2, *duplicate;
    ptr1 = start;

    while(ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while(ptr2->next != NULL)
        {
            if(ptr1->data == ptr2->next->data)
            {
                duplicate = ptr2->next;
                ptr2->next = ptr2->next->next;
                cout<<endl<<"removing "<<duplicate->data <<" ";
                delete(duplicate);
            }
            else
            {
                ptr2=ptr2->next;
            }
            
        }
        ptr1=ptr1->next;
    }
    cout<<endl<<"***********duplicate removed**********";

}

int main()
{

    struct node *start = newNode(10); 
    start->next = newNode(12); 
    start->next->next = newNode(11); 
    start->next->next->next = newNode(11); 
    start->next->next->next->next = newNode(12); 
    start->next->next->next->next->next = newNode(11); 
    start->next->next->next->next->next->next = newNode(10); 
    //10 12 11 11 12 11 10
    //10 12 11
    printf("Linked list before removing duplicates "); 
    print(start); 

    removeduplicate(start); 
  
    printf("\nLinked list after removing duplicates "); 
    print(start); 

    return 0;
}