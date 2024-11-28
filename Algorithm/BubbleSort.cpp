#include "Utility.h"
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