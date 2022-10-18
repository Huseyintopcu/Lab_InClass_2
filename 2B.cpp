#include <iostream>
#include <complex>
using namespace std;


void multi(int number,int range);
int main()
{
	int number,range;
	cout << "Enter an integer:";
	cin >> number;
	cout << "Enter range:";
	cin >> range;
	multi(number,range);

	getchar();
	getchar();
}

void multi(int number,int range)
{
	int i;
	for (i = 0; i <= range; i++)
	{
		cout << number << "*" << i << "=" << number*i << endl;
	}
}