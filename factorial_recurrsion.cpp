#include <iostream>
using namespace std;

int fact(int x)
{
	if(x>0){
		return	x*fact(x-1);
	}
	else
		return 1;
}

int main()
{
	int n;
	cin >> n;
	cout << fact(n);
	return 0;
}
