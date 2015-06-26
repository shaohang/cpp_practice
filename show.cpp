#include<iostream>
#include<cstdlib>
#include"cwin.h"
using namespace std;

void CWin::show()
{
	cout<< "Window " << id << ": " <<endl;   
	cout<< "Area = " << width*height << endl;
}
