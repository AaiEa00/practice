#include "Sort.h"

void Output(const vector<int>& v, const string& s)
{
	cout << s << endl;
	for (auto vv : v)
	{
		cout << vv;
	}

	cout << endl;
}

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

	Output(v, "BubbleSort");
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

	Output(v, "SelectionSort");
}

void InsertionSort(vector<int>& v)
{
}

void HeapSort(vector<int>& v)
{
}

void MergeSort(vector<int>& v)
{
}

void QuickSort(vector<int>& v)
{
}
