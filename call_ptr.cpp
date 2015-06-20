#include<iostream>
#include<cstdlib>

using namespace std;

int *maximum(int *);

int main()
{
	int a[5] = {3,1,7,2,6};
	int i,*ptr;

	cout<< "The content of array: ";
	for (i=0;i<5;i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	ptr = maximum(a);

	cout << "Maximum: " << *ptr << endl;

	return 0;
	
}

int *maximum(int *arr)
{
	int i, *max;
	
	max = arr;
	for (i=1;i<5;i++)
	{
		if (*max<*(arr+i))
			max = arr+i;
		cout << arr+i << endl;
	}
	return max;
}
