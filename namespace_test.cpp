#include<iostream>
#include<cstdlib>

namespace name1
{
	int var = 5;
	void show()
	{
		std::cout << "This is name1 space." << std::endl;
	}
}

namespace name2
{
	int var = 10;
	void show()
	{
		std::cout << "This is name2 space." << std::endl;
	}
}


using namespace std;

int main()
{
	{
		using namespace name1;
		std::cout << "In name1 space: var = " << var << endl;
	}

	{
		using namespace name2;
		std::cout << "In name2 space: var = " << var << endl;
	}

	int var = 15;

	{
		using namespace name1;
		std::cout << "In name1 space: var = " << var << endl;
	}

	{
		using namespace name1;
		std::cout << "In name2 space: var = " << var << endl;
	}

	cout << "In name1 space: var = " << name1::var << endl;
	cout << "In name2 space: var = " << name2::var << endl;
	
	name1::show();
	name2::show();

	return 0;

}
