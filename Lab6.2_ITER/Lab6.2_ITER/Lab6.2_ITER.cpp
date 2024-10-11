#include <iostream>
#include <iomanip>

using namespace std;

void countA(int* a, int n, int& count);

int main()
{
	int count = 0;
	int n;

	cout << "Enter number of elements: ";cin >> n;
	int* a = new int[n];

	cout << "Enter a elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "a= ";
	for (int i = 0;i < n; i++)
	{
		cout << a[i] << setw(4);
	}
	cout << endl;

	countA(a, n, count);
}

void countA(int* a, int n, int& count)
{
	for (int i = 0;i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			count++;
		}
	}
	cout << count;
}