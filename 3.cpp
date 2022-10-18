#include<iostream>

using namespace std;

struct LinkedListInt
{
	int value;
	LinkedListInt* next;
};

class LinkedList
{
private:
	LinkedListInt* head;
public:
	LinkedList()
	{
		head = NULL;
	}
	void add(int x)
	{
		LinkedListInt* last = new LinkedListInt();
		last->value = x;
		last->next = NULL;

		LinkedListInt* q = NULL;
		LinkedListInt* p = head;
		//while (p != NULL ) 
		//{
		//	q = p;
		//	p = p->next;
		//}


		if (head==NULL)
		{
			head = last;
		}
		else
		{
			while (p->next!=NULL)
			{
				q = q->next;
			}
			q->next = last;
		}
	}
	void print()
	{
		LinkedListInt* p = head;
		while (p!=NULL)
		{
			cout << p->value;
			p = p->next;
		}
	}

};

int main()
{
	int number;
	cout << "Enter a Number: ";
	cin >> number;
	LinkedList list;
	for (int i = 0; i < number; i++)
	{
		list.add(i);
		list.print();
	}
}