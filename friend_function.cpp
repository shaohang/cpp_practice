#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
	private:
		char id;
		int width;
		int height;
		
		int area()
		{
			return width*height;
		}

	public: 
		void show_area()
		{
			cout << "Window " << id << ", area = " << area()<< endl;
		}

		void set_data(char i, int w, int h)
		{
			id = i;
			if(w>0 && h>0)
			{
				width = w;
				height = h;
			}
			else 
				cout << "Input error" << endl;
		}

	friend void show_member(CWin *);
};

void show_member(CWin *w)
{

	cout<< "Window" << w->id;
	cout<< " : width = " << w->width ;
	cout<< " , height = " << w->height << endl;

	w->width = -10;  // pointer, chaged values here kept.
}

int main()
{
	CWin win1, win2;

	win1.set_data('A',50 ,40);
	win2.set_data('B',80 ,60);

	show_member(&win1);
	show_member(&win1);  // this method is pass by address

	show_member(&win2);

	return 0;
}
