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
		cout << "deleted " << queue[front] <<" from queue" <<endl;
		for(int i=0 ; i < rear-1 ; i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
		cout << endl  ;
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
		cout << endl <<endl ;
	}
}

int main()
{
	int a,b,c,p;
	lable:
	cout << endl;
	cout << "enter q action" << endl << "1 insert "<<endl<< "2 delete " <<endl<<"3 traverse"<< endl;
	cin >> a;
	switch(a)
	{
		case 1: 
			cout << "enter no of elements to be entered "<<endl;
			cin >> b;
			//cout << "fff "<<endl;
			for(int i=0;i<b;i++)
			{
				cout << "enter element "<< i+1 << endl;
				cin >> p;
				insert(p);
				//cout << "ggg "<<endl;
			}
		goto lable;
		break;
		
		case 2:
			cout << "enter no of elements to be deleted "<<endl;
			cin >> c;
			for(int j=0;j<c;j++)
			{
				cout << "deleting element "<<endl;
				Delete();
			}
		goto lable;
		break;
		
		case 3:
			traverse();
			break;
		
		default: 
			cout <<"end"<<endl;
	}
}
