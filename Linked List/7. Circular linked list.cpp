#include<bits/stdc++.h>
using namespace std ;


struct node
{
    int data ;
    struct node *next ;
};


int main()
{
    struct node *head, *newNodePointer, *temp ;
    head = 0 ;
    int choice = 1, count = 0 ;

    while(choice)
    {
        /// malloc returns a void pointer to the starting address of the allocated block
        newNodePointer = (struct node * ) malloc(sizeof(struct node)) ;
        cout<<"Ender data : " ;
        scanf("%d",  &newNodePointer->data ) ;
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

    temp->next = head ;
    temp = head ;
     cout<<"List : " ;
    while(temp->next!=head)
    {
            cout<<temp->data<<" " ;
            temp = temp->next ;
            count++ ;
    }
    cout<<temp->data ;
    count++ ;
    cout<<"\nNumber of Data : "<<count ;
    cout<<"\n\nCheck : "<<temp->next->data<<endl ;

    return 0 ;
}
