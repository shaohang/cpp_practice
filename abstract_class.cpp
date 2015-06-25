#include<iostream>
#include<cstdlib>
using namespace std;

class CShape
{
	public:
		virtual int area()=0;

		void show_area()
		{
			cout<< "area = " << area() << endl;
		}
};


class CWin : public CShape
{
	protected:
		int width;
		int height;
	public:
		CWin(int w=10,int h=10)
		{
			width = w;
			height = h;
		}

		virtual int area()
		{
			return width*height;
		}
        /* if would like to override.
		void show_area()
		{
			cout<< "CWin area = " << area() << endl;
		}
		*/
};

class CCirWin: public CShape
{
	protected:
		int radius;
	public:
		CCirWin(int r=10):radius(r)
		{}

		virtual int area()
		{
			return (int) (3.14*radius*radius);
		}

		void show_area()
		{
			cout<< "CCirWin area = " << area() << endl;
		}
};


int main()
{
	CWin win1(50,60);
	CCirWin win2(100);

	win1.show_area();
	win2.show_area();

	return 0;
}





















