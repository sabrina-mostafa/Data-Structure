#include<bits/stdc++.h>
using namespace std ;


struct node *head, *newNodePointer, *temp ;
struct node
{
    int data ;
    struct node *next ;
};


void delete_from_a_GivenPosition(int pos, int &count)
{
    struct node *PreNode ;
    int i = 1 ;
    temp = PreNode = head ;
    while(i<pos)       // traversing till the given position
    {
        PreNode = temp ;
        temp = temp->next ;
        i++ ;
    }
    PreNode->next = temp->next ;
    free(temp) ;
    count-- ;
}


void display(int &count)
{
    temp = head ;
    while(temp!=0)
    {
        cout<<temp->data<<" " ;
        temp = temp->next ;
        count++ ;
    }
    cout<<endl ;
}


int main()
{

    head = 0 ;
    int choice = 1, count = 0, pos ;

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


    if(head == 0)
        cout<<"\nEmpty !! " ;
    else
    {
        cout<<"\nList before deletion : " ;
        display(count) ;

        cout<<"\nEnter the position : " ;
        cin>>pos ;

        if(pos>count)
            cout<<"\nInvalid !! " ;
        else
        {
            delete_from_a_GivenPosition(pos, count) ;

            cout<<"\nList after deletion : " ;
            if(count>0)  display(count) ;
            else cout<<" Empty !! " ;
        }
    }

    return 0 ;
}
