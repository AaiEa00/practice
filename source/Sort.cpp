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

void BubbleSort(const std::vector<int>& v)
{
	std::vector<int> vv = v;
	for (int i = 0; i < vv.size(); i++)
	{
		for (int j = (int)vv.size() - 1; j > i; j--)
		{
			if (vv.at(j) < vv.at(j - 1))
			{
				std::swap(vv.at(j), vv.at(j - 1));
			}
		}
	}

	Output(vv, "BubbleSort");
}

void SelectionSort(const std::vector<int>& v)
{
	std::vector<int> vv = v;
	for (int i = 0; i < vv.size(); i++)
	{
		int minNum = i;
		for (int j = i; j < vv.size(); j++)
		{
			if (vv.at(minNum) > vv.at(j))
				minNum = j;
		}

		std::swap(vv.at(i), vv.at(minNum));
	}

	Output(vv, "SelectionSort");
}

void InsertionSort(const std::vector<int>& v)
{
	std::vector<int> vv = v;
	for (int i = 0; i < vv.size() - 1; i++)
	{
		for (int j = i + 1; j > 0; j--)
		{
			if (vv.at(j - 1) > vv.at(j))
				std::swap(vv.at(j - 1), vv.at(j));
			else
				break;
		}
	}

	Output(vv, "InsertionSort");
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
