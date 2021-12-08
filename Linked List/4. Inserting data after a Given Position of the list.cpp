#include<bits/stdc++.h>
using namespace std ;


struct node *head, *newNodePointer, *temp ;
struct node
{
    int data ;
    struct node *next ;
};


void insertion_after_a_GivenPosition(int pos, int count)
{
        //pos-- ;
        int i = 1 ;
        temp = head ;
        while(i<pos)       // traversing till the given position
        {
                temp = temp->next ;
                i++ ;
        }

    newNodePointer = (struct node *) malloc(sizeof(struct node)) ;        //  creating new node for the new data

    cout<<"\nEnter the data that you want to insert in the list : " ;
    cin>>newNodePointer->data ;

    newNodePointer->next = temp->next ;
    temp->next = newNodePointer ;
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

    cout<<"\nList before insertion : " ;
    display(count) ;

    cout<<"\nEnter the Positon : " ;
    cin>>pos ;

    if(pos>count)  cout<<"\nInvalid !! " ;
    else
    {
        insertion_after_a_GivenPosition(pos, count) ;

        cout<<"\nList after insertion : " ;
        display(count) ;
    }


    return 0 ;
}
