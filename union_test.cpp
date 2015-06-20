#include<iostream>
#include<cstdlib>

using namespace std;

union mydata
{
	short math;
	float avg;
} student;

int main()
{
	cout<< "sizeof(student) = " << sizeof(student) << endl;
	cout<< "address of student.math = " << &student.math << endl;
	cout<< "address of student.avg = " << &student.avg << endl;

	return 0;
}
