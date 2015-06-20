#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;

		int area()
		{
			return width*height;
		}

		void set_data(char i, int w, int h)
		{
			id = i;
			width = w;
			height = h;

			return;  // does not matter, no return. 
		}

};

void show_area(CWin win)
{
	cout << "Window " << win.id << " , area = " << win.width*win.height << endl;
	win.width = 10;
	win.height = 20;
}

int main()
{
	CWin win1;

	win1.set_data('B', 50 ,40);
	show_area(win1);

	show_area(win1); // doest not change, pass by value. 
	return 0;
}
