#include<iostream>
#include<algorithm>
#include <bits/stdc++.h> 

using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data)
{
	struct node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return(temp);
}

void printPostorder(struct node *node) 
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->data << " "; 
} 
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    cout << node->data << " "; 
  
    /* then recur on left sutree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}  

int main()
{
	struct node *root = newNode(3);
	root->left = newNode(2);
	root->right = newNode(1);	
	root->left->left =newNode(0);
	
	    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreorder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInorder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
	
	cout << endl<< endl<< root->data<<" ";
	cout << root->left->data <<" ";
	cout << root->right->data<<" ";
	cout << root->left->left->data<<" ";	
	
	return 0;
}
