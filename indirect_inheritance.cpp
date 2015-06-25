#include<iostream>
#include<cstdlib>
using namespace std;

class CShape
{
	public:
		virtual int area()=0;
		
		virtual ~CShape()
		{
			cout<< "CShape's desctructor has been called." << endl;
		}

		virtual void show_area()
		{
			cout<< "area = " << area() << endl;
		}
};

class CWin : public CShape
{
	protected:
		int width,height;
	public:
		CWin(int w=10, int h=10): width(w),height(h)
		{}
		
		virtual ~CWin()
		{
			cout<< "CWin's destructor has been called." << endl;
		}


		virtual int area()
		{
			return width*height;
		}

		virtual void show_area()
		{
			cout<< "CWin object's area: " << area() << endl;
		}
};


class CCirWin: public CShape
{
	protected:
		int radius;

	public:
		CCirWin(int r = 10):radius(r)
		{}

		virtual ~CCirWin()
		{
			cout<< "CCirWin's destructor has been called." << endl;		
		}
		
		virtual int area()
		{
			return (int)(3.14*radius*radius);
		}
		
		virtual void show_area()
		{
			cout<< "CCirWin object's area: " << area() << endl;
		}

};


class CMiniWin: public CWin //inheritate from CShape and CWin class. 
{
	public:
		CMiniWin(int w,int h):CWin(w,h)
		{}
		
		virtual ~CMiniWin()
		{
			cout<< "CMiniWin's destructor has been called." << endl;
		}

		virtual int area()
		{
			return (int)(0.5*height*width);
		}

		virtual void show_area()
		{
			cout<< "CMiniWin object's area: " << area() << endl;
		}
};





int main()
{
	/*
	CWin win1(50,60);
	CCirWin win2(100);
	CMiniWin win3(50,60);

	win1.show_area();
	win2.show_area();
	win3.show_area();
	*/

	CShape *ptr = new CWin(50,60);
	ptr->show_area();
	cout<< "Destruct CWin object..." << endl;
	delete ptr;

	cout << endl;

	ptr = new CMiniWin(50,60);
	ptr->show_area();
	cout<< "Destruct CMiniWin object..." << endl;
	delete ptr;

	cout << endl;

	
	CMiniWin m_win(50,60);
	m_win.show_area();


	return 0;



}

















