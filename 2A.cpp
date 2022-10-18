#include <iostream>
#include <complex>
using namespace std;


void multi(int number);
int main()
{
	int number;
	cout << "Enter an integer:";
	cin >> number;
	multi(number);

	getchar();
	getchar();
}

void multi(int number)
{
	int i;
	for (i = 0; i <=10 ; i++)
	{
		cout << number << "*" << i << "=" << number*i<<endl;
	}
}