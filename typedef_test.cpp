#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

typedef struct
{
	int hour;
	int minite;
	float second;
} mytime;

void subs(mytime t[]);

int main()
{
	int i;
	mytime t[3] = {{6,24,45.58},{3,40,17.43},{0,0,0.0}};

	subs(t);
	for (i=0;i<3;i++)
	{
		cout<< "t[" << i << "] = " << t[i].hour <<":";
		cout<< setw(2) << t[i].minite << ":";
		cout<< setw(5) << t[i].second << endl;
	}

	return 0;
}

void subs(mytime t[])
{
	int count2 = 0, count3 = 0;

	t[2].second = t[0].second + t[1].second;
	while(t[2].second>60)
	{
		t[2].second-=60;
		count3++;
	}
	t[2].minite = t[0].minite + t[1].minite + count3;
	while(t[2].minite>60)
	{
		t[2].minite-=60;
		count2++;
	}

	t[2].hour = t[0].hour + t[1].hour +count2;

	return;

}
