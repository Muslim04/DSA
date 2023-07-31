#include <bits/stdc++.h>
using namespace std;
// Implementation of BT using struct
struct node {
    int data;
    struct node* left;
    struct node* right;
    
};

// using class
class Node{
public :
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;

        left = NULL;
        right = NULL;
    }
        
};

// ---- BASIC OPERATIONS ON BT(Binary Tree) ---- //
// Inserting an element
// Removing element
// Searching for a element
// Deletion for a element
// Traversing an element


//----Auxiliary Operations On BT --- //
// Finding the height of the tree
//Find the level of the tree
// Finding the  size of the entire tree


int main(){

    cout << "Hello Wolrd\n";

    Node* root = new Node(1);


    root->left = new Node(2);
    root -> right = new Node(3);

    root->left->left = new Node(4);

    cout << root->data;


    return 0;
}