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
		CWin(char i, int w, int h):id(i),width(w),height(h)
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

class CMinWin: public CWin
{
	public:
		CMinWin(char i,int w,int h):CWin(i,w,h)
		{}

		virtual int area()
		{
			return 0.8*width*height;
		}
};


int main()
{
	CWin *ptr = new CWin('A',70,80); // dynamically generated CWin class. 
	CMinWin m_win('B',50,60);

	ptr->show_area();

	delete ptr;  // release the CWin class generated dynamically. 
	ptr = &m_win;

	ptr->show_area();

	return 0;
}
