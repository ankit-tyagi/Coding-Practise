#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int getcount(struct Node* head)
{
    struct Node * current = head;
    int count= 0;
    while(current!=NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

int getIntersectingNode(struct Node* head1, struct Node* head2, int d)
{
    int i=0;
    struct Node* current1 = head1;
    struct Node* current2 = head2;

    for(i=0;i<d;i++)
    {
        if(current1 == NULL)
            return INT_MIN;
        current1 = current1->next;
    }

    while(current1 != NULL && current2 != NULL)
    {
        if(current1 == current2)
            return current1->data;
        current1 = current1->next;
        current2 = current2->next;
    }
    return INT_MIN;
}

int getIntersectionNode(struct Node* head1, struct Node* head2)
{
    int c1 = getcount(head1);
    int c2 = getcount(head2);
    int d;
    if(c1>c2)
    {
        d= c1-c2;
        return getIntersectingNode(head1, head2, d);
    }
    else
    {
        d=c2-c1;
        return getIntersectingNode(head2, head1, d);
    }
}

int main()
{
    struct Node* newNode; 
    struct Node* head1 = (struct Node*) malloc(sizeof(struct Node)); 
    head1->data  = 10; 
    
    struct Node* head2 = (struct Node*) malloc(sizeof(struct Node)); 
    head2->data  = 3; 
    
    newNode = (struct Node*) malloc (sizeof(struct Node)); 
    newNode->data = 6; 
    head2->next = newNode; 
    
    newNode = (struct Node*) malloc (sizeof(struct Node)); 
    newNode->data = 9; 
    head2->next->next = newNode; 
    
    newNode = (struct Node*) malloc (sizeof(struct Node)); 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next  = newNode; 
    
    newNode = (struct Node*) malloc (sizeof(struct Node)); 
    newNode->data = 30; 
    head1->next->next= newNode; 
    
    head1->next->next->next = NULL; 
    
    int result = getIntersectionNode(head1, head2);
    if(result == INT_MIN)
    {
        cout<<"There is no Intersection";
    }
    printf("\n The node of intersection is %d \n",result);

    return 0;
}