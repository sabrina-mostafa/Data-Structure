#include<bits/stdc++.h>
using namespace std ;

#define n 5
int Queue[n] ;          //  FIFO = Insertion is possible in the REAR and Deletion is possible from the FRONT
//  enqueue and dequeue operation should be take O(1) times
int front = -1, rear = -1 ;

void peek()
{
    if(front==-1 && rear==-1)
        cout<<"Empty\n" ;
        
    else
        cout<<"Front element : "<<Queue[front]<<endl  ;
}


void display()
{
    if(front==-1 && rear==-1)
        cout<<"Empty\n" ;

    else
    {
        cout<<"Queue : \n" ;
        for(int i=front ; i!=rear ; i=(i+1)%n)        //elements will lie from front to rear
        {
            cout<<Queue[i]<<endl ;
        }
        cout<<Queue[i]<<endl ;    //  last element
    }
}


void dequeue()
{
    if(front==-1 && rear==-1)       //  no elements in the queue
        cout<<"UnderFlow\n" ;

    else if(front==rear)    // only one element in the queue
    {
        cout<<"Dequeued element of the Queue is : "<<Queue[front]<<endl ;
        front = rear = -1 ;
    }

    else
    {
        cout<<"Dequeued element of the Queue is : "<<Queue[front]<<endl ;
        front = (front+1)%n ;
    }
}

void enqueue(int x)
{
    if( (rear+1)%n ==front)       // no space in the array i.e in Queue
        cout<<"Overflow\n" ;

    else if(front==-1 && rear==-1)      //  empty Queue
    {
        front = rear = 0 ;
        Queue[rear] = x ;
        cout<<"Enqueued : "<<x<<endl ;
    }

    else
    {
        rear = (rear+1)%n ;
        Queue[rear] = x ;
        cout<<"Enqueued : "<<x<<endl ;
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
