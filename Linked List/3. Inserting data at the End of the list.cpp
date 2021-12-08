#include<bits/stdc++.h>
using namespace std ;

struct node *head, *newNodePointer, *temp ;
struct node
{
    int data ;
    struct node *next ;
};


void insertion_at_the_End()
{
        newNodePointer = (struct node *) malloc(sizeof(struct node)) ;        //  creating new node for the new data

        cout<<"\nEnter the data that you want to insert at the beginning of the list : " ;
        cin>>newNodePointer->data ;
        newNodePointer->next = 0 ;

        temp = head ;
        while(temp->next != 0)        // have to traverse till the last data to achieve the last data's address_part(next)
        {
                temp = temp->next ;
        }
        temp->next = newNodePointer ;
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

    cout<<"\nList before insertion : " ;
    display() ;

    insertion_at_the_End() ;

    cout<<"\nList after insertion : " ;
    display() ;

    return 0 ;
}
