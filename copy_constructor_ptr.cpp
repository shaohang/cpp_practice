#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class CWin
{
	private:
		char id;
		char *title;

	public:
		CWin(char i='D', char *text = "Default Window"):id(i)
		{
			cout<< "Constructor has been called." << endl;
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}
		
		CWin(const CWin &win)
		{
			cout<< "Copy constructor has been called."<< endl;
			id = win.id;
			title = new char[strlen(win.title)+1];
			strcpy(title, win.title);

		}

		~CWin()
		{
			cout<< "Destructor has been called."<< endl;
			delete [] title;
		}

		void show()
		{
			cout<< "Window " << id << ", title: " << title << endl;
		}

		
};


int main()
{
	CWin *ptr1 = new CWin('A', "Main window");
	CWin *ptr2 = new CWin(*ptr1);

	ptr1->show();
	ptr2->show();

	delete ptr1;
	ptr2->show();


	delete ptr2;

	return 0;
}
