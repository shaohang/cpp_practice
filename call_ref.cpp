#include<iostream>
#include<cstdlib>

using namespace std;
void add10(int &, int &);

int main()
{
	int a = 20, b=50;
	cout<< "before calling add function.."<< endl;
	cout<< "a = " << a << ", b = " << b << endl;

	add10(a,b);

    cout<< "after calling add function.."<< endl;
	cout<< "a = " << a << ", b = " << b << endl;

	return 0;
}

void add10(int &i, int &j)
{
	i = i+10;
	j = j+10;

	return;
}
