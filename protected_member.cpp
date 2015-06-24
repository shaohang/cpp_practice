#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class CWin
{
	protected: // set to protected member, subclass can access this type of variables.
		char id;
	
	public:
		CWin(char i):id(i)
		{
		}
};

class CTextwin : public CWin
{
	private: 
		char text[20];
		
	public:
		CTextwin(char i, const  char *tx):CWin(i)
		{
			strcpy(text,tx);
		}

		void show_text()
		{
			cout<< "Window " << id << ": text = " << text << endl; // directly access 
		}
};

int main()
{
	CTextwin win1('A',"Hello C++");

	win1.show_text();

	return 0;
}
