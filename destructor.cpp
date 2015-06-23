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
		CWin(char i, int w, int h): id(i), width(w), height(h)
		{
			cout << "Constructor has been called." << endl;
		}

		~CWin()
		{
			cout << "Destructor has been called." << endl;
		}

		void show_member()
		{
			cout << "Window " << id << " , width: " << width << " , height:" << height << endl;
		}
};

int main()
{
	CWin win1('A', 50 ,40);
	CWin win2('B', 40 ,50);
	CWin win3('C', 60, 70);

	win1.show_member();
	win2.show_member();
	win3.show_member();


	return 0;
}
