#include<bits/stdc++.h>
using namespace std ;



#define n 5
int Stack[n] ;
int top=-1 ;


void push(int x)
{
    if(top==n-1)
        cout<<"Overflow\n" ;
    else
    {
        cout<<"Pushed : "<<x<<endl ;
        top++ ;
        Stack[top] = x ;
    }
}


void pop()
{
    if(top==-1)
        cout<<"Underflow\n" ;
    else
    {
        cout<<"Poped : "<<Stack[top]<<endl ;
        top-- ;
    }
}


void peek()
{
    if(top==-1) cout<<"Empty\n" ;
    else
        cout<<"Top element is : "<<Stack[top]<<endl ;
}


void display()
{
    if(top==-1) cout<<"Empty Stack\n" ;
    else
        for(int i=top; i>=0; i--)
        {
            cout<<Stack[i]<<endl ;
        }
}



int main()
{
    push(5) ;
    push(3) ;
    push(9) ;
    pop() ;
    push(1) ;
    peek() ;
    push(7) ;
    display() ;
}
