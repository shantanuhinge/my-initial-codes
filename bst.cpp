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
	node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return(temp);
}

int main()
{
	struct node *root = newNode(3);
	root->left = newNode(2);
	root->right = newNode(1);	
	root->left->left =newNode(0);
	
	cout << root->data<<" ";
	cout << root->left->data <<" ";
	cout << root->right->data<<" ";
	cout << root->left->left->data<<" ";	
	
	return 0;
}
