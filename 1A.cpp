#include<iostream>
using namespace std;


int factorial(int number);


int main()
{
	int number;
	cout << "Enter The Number: ";
	cin >> number;
	cout << "A Factorial of 5 using Recursion is:"<< factorial(number);

	getchar();
	getchar();
}
int factorial(int number)
{
	if (number<=1)
	{
		return 1;
	}
	return number*factorial(number - 1);
}