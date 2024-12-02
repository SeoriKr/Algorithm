#include "Utility.h"
#include <algorithm>
#include <vector>

using namespace std;

// Variable for 'for loop' ( = j) should be declared, because we need to use it when we are out of the variable's scope
void sort_insertion(int arr[], int size)
{
	int key;
	int i, j;

	for (i = 1; i < size - 1; i++)
	{
		key = arr[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] < key)
			{
				break;
			}

			arr[j + 1] = arr[j];
		}

		arr[j + 1] = key;
	}
}

int main()
{
	int arr[10] = { 1, 5, 9, 4, 8, 2, 3, 6, 7, 10 };

	cout << "Before bubble sort : ";

	printArr(arr, sizeof(arr) / sizeof(arr[0]));

	cout << endl << endl;

	sort_insertion(arr, sizeof(arr) / sizeof(arr[0]));

	cout << "After bubble sort  : ";

	printArr(arr, sizeof(arr) / sizeof(arr[0]));

	cout << endl << endl;
}