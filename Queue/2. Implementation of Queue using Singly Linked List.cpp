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


void dequeue()
{
    if(front==0 && rear==0)
        cout<<"Underflow\n" ;
    else
    {
        temp = front ;        // to free the space we will use a temp variable
        cout<<"Dequeued data : "<<front->data<<endl ;
        front = front->next ;
        free(temp) ;
    }
}

void display()
{
    if(front==0 && rear==0)
        cout<<"Empty\n" ;
    else
    {
        temp = front ;
        cout<<"Queue : \n" ;
        while(temp!=0)
        {
            cout<<temp->data<<endl ;
            temp = temp->next ;
        }
    }
}

void enqueue(int x)
{
    newNodePointer = (struct node *) malloc(sizeof(struct node)) ;
    newNodePointer->data = x ;
    newNodePointer->next = 0 ;
    if(front==0 && rear==0)   // queue is empty now
    {
        front = rear = newNodePointer ;   
        cout<<"Enqueued : "<<rear->data<<endl ;
    }
    else
    {
        rear->next = newNodePointer ;     // previous node will point the new node now
        rear = newNodePointer ;   // moving rear to the new node
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
