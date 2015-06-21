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
		CWin(char i,int w,int h):id(i), width(w),height(h)
		{
			cout<< "Constructor has been called." << endl;
		}

		CWin()
		{
			cout<< "Default constructor has been called."<< endl;
		}
		
		CWin compare(CWin win)
		{
			if (this->area()>win.area())
				return *this;
			else 
				return win;
		}

		int area()
		{
			return width*height;
		}

		char get_id()
		{
			return this->id;
		}
};


int main()
{
	CWin win1('A',70,80);
	CWin win2('B',60,90);
	CWin win3;

	win3 = win1.compare(win2);

	cout<< "Window "<< win3.get_id() << " is larger." << endl;

	return 0;
	
}
