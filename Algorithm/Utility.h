#pragma once

#include <iostream>

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
		std::cout << arr[i] << " ";
	}
}