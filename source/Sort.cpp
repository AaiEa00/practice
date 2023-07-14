#include "Sort.h"

void Output(const std::vector<int>& v, const std::string& s)
{
	std::cout << s << std::endl;
	for (auto vv : v)
	{
		std::cout << vv;
	}

	std::cout << std::endl;
}

void BubbleSort(std::vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = (int)v.size() - 1; j > i; j--)
		{
			if (v.at(j) < v.at(j - 1))
			{
				std::swap(v.at(j), v.at(j - 1));
			}
		}
	}

	Output(v, "BubbleSort");
}

void SelectionSort(std::vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		int minNum = i;
		for (int j = i; j < v.size(); j++)
		{
			if (v.at(minNum) > v.at(j))
				minNum = j;
		}

		std::swap(v.at(i), v.at(minNum));
	}

	Output(v, "SelectionSort");
}

void InsertionSort(std::vector<int>& v)
{
}

void HeapSort(std::vector<int>& v)
{
}

void MergeSort(std::vector<int>& v)
{
}

void QuickSort(std::vector<int>& v)
{
}
