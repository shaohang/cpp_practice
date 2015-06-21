#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
	private:
		char id;
		int width;
		int height;
	public:
		static int num; // static variable, this is shared by all the class instances.
		CWin(char i, int w, int h): id(i), width(w), height(h)
		{
			num++; // increase num by one 
		}

		CWin()
		{
			num++;
		}

		static void count() // static member function of CWin class
		{
			cout << "There are " << num << " CWin class instances." << endl;
		}
};

int CWin::num =0; // set the static variable "num" equal to 0; NOTE: int here

int main()
{
	CWin::count();
	
	CWin win1('A',50,40);
	CWin win2('B',60,80);

	cout<< "There are " << CWin::num << " CWin class instances." << endl;

	CWin win[4];
	cout<< "There are " << CWin::num << " CWin class instances." << endl;

	CWin win3;
	CWin::count();

	return 0;
}
