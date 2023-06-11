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
