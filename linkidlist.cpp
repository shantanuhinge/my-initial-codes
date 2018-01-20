#include <iostream>
#include <string>

using namespace std;

struct node
{
	int data;
	node* link; 
} ;

node* head;

void Insert(int x)
{
	node* temp = new node ;
	temp->data = x;
	temp->link =head;	
	head = temp;
}

void Print()
{
	node* temp = head;
	cout << "List is :";
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp=temp->link; 
	}
	cout << endl;
}

int main()
{
	head = NULL;
	cout << "how many numbers" << endl;
	int n,i,x;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "enter the number" << endl;
		cin >> x;
		Insert(x);
		Print();
	}
	return 0;
}
