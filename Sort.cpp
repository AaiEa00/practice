#include "Sort.h"

void BubbleSort(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = (int)v.size() - 1; j > i; j--)
		{
			if (v.at(j) < v.at(j - 1))
			{
				swap(v.at(j), v.at(j - 1));
			}
		}
	}
}

void SelectionSort(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		int minNum = i;
		for (int j = i; j < v.size(); j++)
		{
			if (v.at(minNum) > v.at(j))
				minNum = j;
		}

		swap(v.at(i), v.at(minNum));
	}
}

void InsertionSort(vector<int>& v)
{
}
