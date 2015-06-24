#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class CWin
{
	private:
		char id;
		int width;
		int height;
	public:
		CWin(char i = 'D', int w=10, int h=10):id(i), width(w), height(h)
		{
			cout<< "CWin() constructor has been called. " << endl; 
		}

		void show_member()
		{
			cout<< "Window " << id << " , width: " << width << " , height: " << height << endl; 
		}

		char get_id() // provide a public member funtion so that subclass can access private var.
		{
			return id;
		}
};


class CTextwin : public CWin
{
	private:
		char text[20];
	public:
		CTextwin(const char *txt)
		{
			cout<< "CTextwin() constructor has been called." << endl;
			strcpy(text,txt);
		}

		void show_text()
		{
			cout << "Window " << get_id() << ", text = " << text << endl;
		}
};

int main()
{
	CWin win1('A', 50,60);
	CTextwin txt("Hello C++");

	win1.show_member();
	txt.show_member();

	txt.show_text();

	cout<< "sizeof(win1) = " << sizeof(win1) << endl;
	cout<< "sizeof(txt) = " << sizeof(txt) << endl;

	return 0;
}






























