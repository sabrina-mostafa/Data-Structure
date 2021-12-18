#include<bits/stdc++.h>
using namespace std ;

struct node   // declaration of own data type for Tree Nodes
{
    int data ;
    struct node *left, *right ;
};



void PostOrder(node *root)      //  Left--Right--Root
{
        if(root==0) return ;

        PostOrder(root->left) ;
        PostOrder(root->right) ;
        cout<<root->data<<" " ;
}



void InOrder(node *root)      //  Left--Root--Right
{
        if(root==0) return ;

        InOrder(root->left) ;
        cout<<root->data<<" " ;
        InOrder(root->right) ;
}



void PreOrder(struct node *root)     //  Root--Left--Right
{
    if(root==0)
        return ;

    cout<<root->data<<" " ;
    PreOrder(root->left) ;
    PreOrder(root->right) ;
}



struct node* createTree()       // this fn will return a pointer to the root node(struct node)
{
    int x, choice ;

    cout<<"Wanna create a new node?(0/1) :\n" ;
    cin>>choice ;
    cout<<endl ;

    if(choice==0)
        return 0 ;

    cout<<"Enter the data : " ;
    cin>>x ;

    struct node *newNodePointer ;
    newNodePointer = new node ;         // new work as malloc

    newNodePointer->data = x ;

    cout<<"Enter the left child of "<<x<<" :\n" ;
    newNodePointer->left = createTree() ;          //  whenever a fn is called, memory will be allocated in a STACK for all the statement(steps) in the fn  (Copied in a Stack)

    cout<<"Enter the right child of "<<x<<" :\n" ;
    newNodePointer->right = createTree() ;      // for each fn call different copies of all the Local variable will be created

    return newNodePointer ;
}



int main()
{
    struct node *root ;
    root = 0 ;
    root =  createTree() ;   // Tree implementation

    cout<<"\n\nThe PreOrder of the Binary Tree is : " ;
    PreOrder(root) ;

    cout<<"\n\nThe InOrder of the Binary Tree is : " ;
    InOrder(root) ;

    cout<<"\n\nThe PostOrder of the Binary Tree is : " ;
    PostOrder(root) ;
    cout<<endl ;

    return 0 ;
}
