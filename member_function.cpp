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
		CWin(char i, int w, int h):id(i), width(w), height(h)
		{
			cout<< "constructor has been called." << endl;
		}

		void compare(CWin win)
		{
			if(area() > win.area())
				cout<< "Window " << id << " is larger." << endl;
				//cout<< "Window " << this->id << " is larger." << endl;
			else
				cout<< "Window " << win.id << " is larger." << endl;
		}

		int area()
		{
			return width*height;
		}
};


int main()
{
	CWin win1('A', 70,80);
	CWin win2('B',60,90);

	win1.compare(win2);

	return 0;
}
