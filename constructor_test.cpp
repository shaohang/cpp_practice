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
		CWin(char,int, int);

	friend void show_member(CWin);
};

void show_member(CWin win)
{
	cout<< "Window " << win.id << " , :";
	cout<< " width: " << win.width << " , ";
	cout<< "height: " << win.height << endl;
}

CWin::CWin(char i, int w, int h) //scope resolution operator
{
	id = i;
	width = w;
	height = h;
	cout<< "Constructor has been called." << endl;
}


int main()
{
	CWin win1('A',50 ,40);
	CWin win2('B',60 ,70);

	show_member(win1);
	show_member(win2);


	return 0;

}

