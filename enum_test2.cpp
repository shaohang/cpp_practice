#include<iostream>
#include<cstdlib>

using namespace std;

enum mykey
{
	LEFT,RIGHT,MIDDLE
};

int main()
{
	int key;
	do {
		cout << "Button press? (0)left (1)right (2)middel: " ;
		cin >> key;
	}while ((key>2)||(key<0));

	switch(key)
	{
		case LEFT:
			cout << "Left button is pressed." << endl;
			break;
		case RIGHT: 
			cout << "Right button is pressed." << endl;
			break;
		case MIDDLE:
			cout << "Middle button is pressed." << endl;
			break;

	}

	return 0;
}
