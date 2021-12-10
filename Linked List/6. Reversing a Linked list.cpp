#include<bits/stdc++.h>
using namespace std ;

struct node *head, *newNodePointer, *currentNode, *preNode, *nextNode , *temp ;
struct node
{
    int data ;
    struct node *next ;
};


void Reverse()
{
    preNode = 0 ;
    currentNode = nextNode = head ;
    while(nextNode != 0)
    {
        nextNode = nextNode->next ;
        currentNode->next = preNode ;
        preNode = currentNode ;
        currentNode = nextNode ;
    }
    head = preNode ;
}


void display()
{
    temp = head ;
    while(temp!=0)
    {
        cout<<temp->data<<" " ;
        temp = temp->next ;
    }
    cout<<endl ;
}


int main()
{

    head = 0 ;
    int choice = 1 ;

    while (choice)
    {
        newNodePointer = (struct node *) malloc(sizeof(struct node)) ;
        cout<<"Enter a data in the List : " ;
        cin>>newNodePointer->data ;
        newNodePointer->next = 0 ;
        if(head == 0)
        {
            head = temp = newNodePointer ;
        }
        else
        {
            temp->next = newNodePointer ;
            temp = newNodePointer ;
        }

        cout<<"Do u wanna continue(0,1) ? " ;
        cin>>choice ;
    }

    cout<<"\nList before Reversion : " ;
    display() ;

    Reverse() ;

    cout<<"\nList after Reversion : " ;
    display() ;

    return 0 ;
}
