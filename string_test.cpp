#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
	int num;
	string proverb;
	cout << "Repeat times: ";
	(cin >> num).get();

	cout << "Repeat string: ";
	getline(cin,proverb);

	for(int i=1;i<=num;i++)
	{
		cout<< proverb << endl;
	}

	return 0;
}

