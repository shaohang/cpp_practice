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
		CWin(char i,int w, int h):id(i),width(w),height(h)
		{
			cout<< "Constructor has been called." << endl;
		}

		CWin(const CWin &win)
		{
			cout<< "Copy constructor has been called." << endl;
			id = win.id;
			width = win.width;
			height = win.height;
		}
		void show_member()
		{
			cout<< "Window "<< id << ": ";
			cout<< "width: " << width << " , height: " << height << endl;
		}
};

int main()
{
	CWin win1('A', 50,40);
	CWin win2(win1);

	win1.show_member();
	win2.show_member();

	return 0;
}


