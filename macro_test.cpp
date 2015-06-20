#include<iostream>
#include<cstdlib>
using namespace std;

#define POWER(X) (X)*(X)*(X)

int main()
{
	int i;
	cout<< "Input integer: ";
	cin >> i;

	cout <<endl << POWER(i+1) << endl;

	return 0;
}
