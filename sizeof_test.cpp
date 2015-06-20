#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	char a[] = "My friend";
	char b = 'c', str[]= "c";

	int *ptr;
	char *ptrc;

	cout<< "sizeof(a)= " << sizeof(a) << endl;
	cout<< "sizeof(b)= " << sizeof(b) << endl;
	cout<< "sizeof(str)= " << sizeof(str) << endl;
	cout<< "sizeof(char)= " << sizeof(char) << endl;
	cout<< "sizeof(int)= " << sizeof(int) << endl;
	
	cout<< "sizeof(ptr)= " << sizeof(ptr) <<endl;
	cout<< "sizeof(ptrc)=" << sizeof(ptrc) << endl;

	cout<< "sizeof(*ptr)=" << sizeof(*ptr) <<endl;
	cout<< "sizeof(*ptrc)=" << sizeof(*ptrc) << endl;

	return 0;
}
