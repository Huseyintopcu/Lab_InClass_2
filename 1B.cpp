#include<iostream>
using namespace std;


int factorial(int number);


int main()
{
	int number;
	cout << "Enter The Number: ";
	cin >> number;
	cout << "A Factorial of 5 using Iteration is:" << factorial(number);

	getchar();
	getchar();
}
int factorial(int number)
{
	int result = 1;
	if (number==0)
	{
		return 1;
	}
	for (int i = 1; i <= number; i++)
	{
		result = result*i;
	}
	return result;
}