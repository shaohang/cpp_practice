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
			cout<< "Window " << id << " , area = " << area()<< endl;
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
				cout<< "Input error." << endl;
		}
};

int main()
{
	CWin win1;

	win1.set_data('A', 50,40);
	win1.show_area();

	return 0;
}
