#include<bits/stdc++.h>
using namespace std ;

struct node *front=0, *rear=0, *newNodePointer, *temp ;
struct node
{
    int data ;
    struct node *next ;
};


void peek()
{
    if(front==0 && rear==0)
        cout<<"Empty\n" ;
    else
        cout<<"Front element : "<<front->data<<endl ;
}


void display()
{
    if(front==0 && rear==0)
        cout<<"Empty\n" ;

    else
    {
        temp = front ;
        cout<<"Queue : \n" ;
        while(temp->next!=front)
        {
            cout<<temp->data<<endl ;
            temp = temp->next ;
        }
        cout<<temp->data<<endl ;
    }
}


void dequeue()
{
    temp = front ;        // to free the space

    if(front==0 && rear==0)
        cout<<"Underflow\n" ;

    else if(front==rear)
    {
        front = rear = 0 ;
        free(temp) ;
    }

    else
    {
        cout<<"Dequeued data : "<<front->data<<endl ;
        front = front->next ;
        rear->next = front ;     //  rear node will always point the front node
        free(temp) ;
    }
}


void enqueue(int x)
{
    newNodePointer = (struct node *) malloc(sizeof(struct node)) ;
    newNodePointer->data = x ;
    newNodePointer->next = 0 ;

    if(front==0 && rear==0)
    {
        front = rear = newNodePointer ;
        cout<<"Enqueued : "<<rear->data<<endl ;
        rear->next = front ;
    }

    else
    {
        rear->next = newNodePointer ;
        rear = newNodePointer ;
        rear->next = front ;
        cout<<"Enqueued : "<<rear->data<<endl ;
    }
}


int main()
{
    enqueue(2) ;
    enqueue(5) ;
    enqueue(-1) ;
    display() ;
    peek() ;           // displays the front element in the Queue
    dequeue() ;
    peek() ;
    display() ;

    return 0 ;
}
