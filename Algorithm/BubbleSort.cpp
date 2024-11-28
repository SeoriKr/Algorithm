#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Start comparison from front
void sort_bubble(int arr[], int size)
{

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void swap(int& num1, int& num2)
{
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
}

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[10] = { 1, 5, 9, 4, 8, 2, 3, 6, 7, 10 };

	cout << "Before bubble sort : ";

	printArr(arr, sizeof(arr) / sizeof(arr[0]));

	cout << endl << endl;

	sort_bubble(arr, sizeof(arr) / sizeof(arr[0]));

	cout << "After bubble sort  : ";

	printArr(arr, sizeof(arr) / sizeof(arr[0]));

	cout << endl << endl;
}