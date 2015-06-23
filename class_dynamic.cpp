#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class CWin
{
	private:
		char id, *title;
	public:
		CWin(char i='D', char *text = "Default window"):id(i)
		{
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}

		~CWin()
		{
			cout <<" Window " << this->id  << "'s destructor has been called." << endl;
			delete [] title; //delete dynamic string
		}

		void show()
		{
			cout << "Window " << id << " : " << title << endl;
		}
};

int main()
{
	CWin win1('A', "Main Window");
	CWin win2('B');

	win1.show();
	win2.show();

	cout << "sizeof(win1) = " << sizeof(win1) << endl;
	cout << "sizeof(win2) = " << sizeof(win2) << endl;

	CWin *ptr;
	ptr = new CWin('C');

	ptr->show();

	cout << "sizeof(ptr) = " << sizeof(ptr) << endl;
	cout << "sizeof(*ptr) = " << sizeof(*ptr) << endl;

	delete ptr;

	return 0;
}
