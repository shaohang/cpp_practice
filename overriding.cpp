#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class CWin
{
	protected:
		char id;

	public:
		CWin(char i):id(i)
		{
			cout << "CWin() constructor has been called." << endl;
		}

		CWin(const CWin &win)
		{
			cout<< "CWin() copy constructor has been called." << endl;
			id = win.id;
		}

		~CWin()
		{
			cout<< "CWin() destructor has been called." << endl;
		}
};

class CTextwin : public CWin
{
	private:
		char *text;
	public:
		CTextwin(char i,const char *tx):CWin(i)
		{
			cout<< "CTextwin() constructor has been called." << endl;
			text = new char[strlen(tx)+1];
			strcpy(text,tx);
		}

		CTextwin(const CTextwin &tx):CWin(tx) // NOTE: here can pass subclass reference.
		{
			cout<< "CTextwin() copy constructor has been called." << endl;
			text = new char[strlen(tx.text)+1];
			strcpy(text,tx.text);
		}

		~CTextwin()
		{
			cout<< "CTextwin() destructor has been called." << endl;
			delete [] text;
		}

		void show_member()
		{
			cout<< "Window " << id << ": text = " << text << endl;
		}

		void set_member(char i,const char *tx)
		{
			id = i;
			delete [] text;
			text = new char[strlen(tx)+1];
			strcpy(text,tx);
	
		}
};



int main()
{
	CTextwin tx1('A',"Hello C++");
	CTextwin tx2(tx1);

	tx1.show_member();
	tx2.show_member();

	cout<< endl << "Changing the text of tx1." << endl;
	tx1.set_member('B',"Welcom C++");

	tx1.show_member();
	tx2.show_member();

	return 0;
}





















