#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
	protected:
		char id;
		int width;
		int height;
	public:
		CWin(char i = 'D', int w = 10, int h=10):id(i), width(w),height(h)
		{}

		void show_area()
		{
			cout<< "Window " << id << ", area = " << area()<< endl;
		}

		virtual int area()
		{
			return width*height;
		}

};

class  CMinWin : public CWin
{
	public:
		CMinWin(char i, int w, int h):CWin(i,w,h)
		{}

		virtual int area()
		{
			return 0.8*width*height;
		}
};


int main()
{
	CWin win('A',70,80);
	CMinWin minwin('B',50,60);

	win.show_area();
	minwin.show_area();

	return 0;
}
