#include<iostream>
using namespace std;

#define capacity 50

int queue[capacity],front=0,rear=0;


void insert(int x)
{
	if(capacity==rear-1)
	{
		cout<<"queue is full"<<endl;
	}
	else
	{
		queue[rear]=x;
	}
	rear++;
};

void Delete()
{
	if(front==rear)
	{
		cout<<"q is empty"<<endl;
	}
	else
	{
		cout << "deleted" << queue[front] <<"from queue" <<endl;
		for(int i=0 ; i < rear-1 ; i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}

void traverse()
{
	if(front==rear)
	{
		cout<<"q is empty"<<endl;
	}
	else
	{
		cout << "q elements are: " <<endl;
		for(int i=front;i<rear;i++)
		{
			cout << queue[i] << " ";
		}
	}
}

int main()
{
	insert(2);
	insert(32);
	insert(24);
	insert(62);
	traverse();
	Delete();
	traverse();
}
