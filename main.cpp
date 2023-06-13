#include <utility>
#include <Windows.h>
#include "Sort.h"
using namespace std;
#define	SORT
int main(void) {
    SetConsoleOutputCP(65001);

#ifdef SORT
	// 配列作成
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v.at(i);
	}

	BubbleSort(v);

	SelectionSort(v);

#endif // SORT


	return 0;
}
