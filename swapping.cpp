#include <iostream>

using namespace std;

int swap(int a, int b)
{
   a=a+b;
	b=a-b;
	a=a-b;
	return (a,b);
}

int main()
{
	int a=4,b=3;
	cout << a << b << endl;
	swap(a,b);
	cout << endl << a << b << endl;
	return 0;
}
