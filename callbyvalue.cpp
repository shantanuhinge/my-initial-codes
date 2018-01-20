#include <iostream>

using namespace std;

int add(int x,int y)
{
	int z=x+y;
	return z;	
}

int main()
{
	int a=3,b=4;
	int c=add(a,b);
	cout << c;
	return 0;
}
