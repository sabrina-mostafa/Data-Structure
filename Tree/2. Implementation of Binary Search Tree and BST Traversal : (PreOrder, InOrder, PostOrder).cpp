#include<iostream>
using namespace std;

struct Node
{
    char data ;
    struct Node *left, *right ;
};


void Preorder(struct Node *root)
{
    if(root == NULL) return ;

    printf("%c ",root->data);         // Print data
    Preorder(root->left);                  // Visit left subtree
    Preorder(root->right);                 // Visit right subtree
}


void Inorder(Node *root)    //  InOrder Traversal of a BST always gives the sorted data
{
    if(root == NULL) return ;

    Inorder(root->left);                 //Visit left subtree
    printf("%c ",root->data);          //Print data
    Inorder(root->right);                 // Visit right subtree
}


void Postorder(Node *root)
{
    if(root == NULL) return ;

    Postorder(root->left) ;              // Visit left subtree
    Postorder(root->right) ;             // Visit right subtree
    printf("%c ",root->data) ;           // Print data
}


struct Node* Insert(Node *root, char data)      //  Function to Insert Node in a Binary Search Tree
{
    if(root == NULL)
    {
        root = new Node() ;
        root->data = data ;
        root->left = root->right = NULL ;
    }

    else if( data<=    root->data )
        root->left = Insert(root->left, data) ;

    else
        root->right = Insert(root->right, data) ;

    return root ;
}



int main()
{
 /*   Code To Test the logic
       Creating an example tree
                    M
   	      /   \
                 B      Q
               /   \      \
              A     C      Z
*/

    struct Node* root = NULL ;
    root = Insert(root,  'M') ;
    root = Insert(root,  'B') ;
    root = Insert(root,  'Q') ;
    root = Insert(root,  'Z') ;
    root = Insert(root,  'A') ;
    root = Insert(root,  'C') ;

    cout<<"Preorder : " ;
    Preorder(root) ;
    cout<<"\n" ;

    cout<<"Inorder : " ;    //  InOrder Traversal of a BST gives the sorted data
    Inorder(root) ;
    cout<<"\n" ;

    cout<<"Postorder : " ;
    Postorder(root) ;
    cout<<"\n" ;
}
