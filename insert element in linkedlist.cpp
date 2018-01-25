#include <iostream>

using namespace std;

struct node
{
	int data;
	node* link;
};

node* head;
 
 void insert(int data,int n)
 {
 	node* temp1 = new node;
 	temp1->data = data;
 	temp1->link = NULL;
 	if(n==1)
 	{
 		temp1->link = head;
 		head = temp1;
 		return;
 	}
 	node* temp2 = head;
 	for(int i=0;i<n-2;i++)
 	{
 		temp2 = temp2->link;
	}
	temp1->link = temp2->link;
	temp2->link = temp1;
 }
 
 void print()
{
	node* temp = head;
	while(temp!= NULL)
	{
		cout << temp->data ;
		temp = temp->link;
	}
	cout << endl;
}


int main()
{
	head = NULL;
	insert(2,1);
	insert(3,2);
	print();
} 
