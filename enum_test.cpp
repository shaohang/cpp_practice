#include<iostream>
#include<cstdlib>

using namespace std;

enum month 
{
	JAN,FEB, MAR=4, APR, MAY, JUNE
};

int main()
{
	cout << "JAN = " << JAN << endl;
	cout << "FEB = " << FEB << endl;
	cout << "MAR = " << MAR << endl;
	cout << "APR = " << APR << endl;
	cout << "MAY = " << MAY << endl;
	cout << "JUNE = " << JUNE << endl;

	return 0;
}
