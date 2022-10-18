#include <iostream>

using namespace std;

int main()
{
	int row, column, amount,size=4;
	cout << "Enter Row: ";
	cin >> row;
	cout << "Enter Column: ";
	cin >> column;
	int **mArray = new int*[row];
	for (int i = 0; i < row; i++)
	{
		mArray[i] = new int[column];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "Array[" << i << "][" << j << "]=" << &mArray[i][j] << endl;
		}
		cout << endl;
	}
	amount = row*column*4;
	cout <<"Total amount of memory is: "<< amount;
	getchar();
	getchar();
}
