#include<bits/stdc++.h>
using namespace std ;

//defining my own data type i.e. structure node for the NODES(data+address)

struct node     // the node is a structure bcz there is multiple data type together(int+address)
{
    int data ;      // for data part of the node
    struct node *next ;     //  for the address of next node (it's gonna store the address of the next node i.e. struct node here)
};


int main()
{
    struct node *head, *newNodePointer, *temp ;
    head = 0 ;      // intially no nodes are there
    int choice = 1, count = 0 ;

    while(choice)       // creating the nodes of a Linked List
    {
        /// malloc returns a void pointer to the starting address of the allocated block
        newNodePointer = (struct node * ) malloc(sizeof(struct node)) ;        //allocating how much memory do we want for each node     // typecast + allocation
        cout<<"Ender data : " ;
        scanf("%d",  &newNodePointer->data ) ;       // getting input in the data part of the Allocated Node
        newNodePointer->next = 0 ;      // bcz at this time it's the last node

        if(head == 0)
        {
            head = temp = newNodePointer ;
        }
        else
        {
            temp->next = newNodePointer ;       // inserting the address of the Newly Created Node to the Address_Part(next) of previous node
            temp = newNodePointer ;      // moving the temp pointer to the Newly Created Node
        }
        cout<<"Do u wanna continue(0,1) ? " ;   //asking if wanna create another node
        cin>>choice ;
    }

    //  temp will be pointing to the last node so we have to make it point to the head for printing all the data of the Linked List
    temp = head ;
     cout<<"List : " ;
    while(temp!=0)
    {
            cout<<temp->data<<" " ;
            temp = temp->next ;       //  moving the temp pointer to the next node through the address part of the present node(next)
            count++ ;
    }
    cout<<"\nNumber of Data : "<<count ;

    return 0 ;
}
