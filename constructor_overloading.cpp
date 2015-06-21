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
		CWin(char i, int w, int h)
		{
			id = i;
			width = w;
			height = h;
			cout<< "Consturctor has been called. 3 arguments." << endl;
		}
		
		CWin( int w, int h)
		{
			id = 'Z';
			width = w;
			height = h;
			cout<< "Consturctor has been called. 2 arguments." << endl;
		}

		CWin()
		{
			id = 'D';
			width = 100;
			height = 100;
			cout<< "Default constructor has been called. No argument."<< endl;
		}

		void show_member()
		{
			cout<< "Window " << id << ", width: " << width << ", height: " << height << endl;
		}
};

int main()
{
	CWin win1('A', 50,40);
	CWin win2(60,70);
	CWin win3;

	win1.show_member();
	win2.show_member();
	win3.show_member();


	return 0;
}


