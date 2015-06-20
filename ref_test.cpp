#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
	int num=5;
	int &rm = num;

	rm = rm+10;
	cout<< "num = " << num << endl;
	cout<< "rm = " << rm << endl;

	return 0;
}
