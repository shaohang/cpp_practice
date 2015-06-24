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
		CWin(char i = 'D', int w = 10, int h = 10):id(i),width(w), height(h)
		{
			cout<< "CWin() constructor has been called. 3 arguments." << endl;
		}

		CWin(int w, int h):width(w),height(h)
		{
			cout<< "CWin() constructor has been called. 2 arguments." << endl;
			id = 'K';
		}

		void show_member()
		{
			cout<< "Window " << id << ", width: " << width << ", height: " << height << endl;
		}
};

class CTextwin : public CWin
{
	private: 
		char text[20];
	public:
		CTextwin(int w, int h):CWin(w,h) // call the constructor of the  basis class.
		{
			cout<< "CTextwin(int w, int h) has been called." << endl;
			strcpy(text, "Have a good night.");
		}

		CTextwin(const char *tx)
		{
			cout << "CTextwin(char *tx) has been called. "<< endl;
			strcpy(text,tx);
		}

		void show_text()
		{
			cout<< "text = " << text << endl;
		}
};


int main()
{
	CTextwin tx1("Hello C++");
	CTextwin tx2(60,70);

	tx1.show_member();
	tx1.show_text();

	tx2.show_member();
	tx2.show_text();

	return 0;
}












