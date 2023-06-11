#include <utility>
#include "Sort.h"
using namespace std;
//#define	MULTIDIMENSIONAL_ARRAY
//#define	PAIR
//#define	ARRAY_OF_PAIR
#define	BUBBLE_SORT

int main(void) {
#pragma region 多次元配列
#ifdef MULTIDIMENSIONAL_ARRAY
	int h, w;
	cin >> h >> w;
	vector<vector<int>> v(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> v.at(i).at(j);
		}
	}
	for (auto& i : v) {
		for (auto& j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
#endif // MULTIDIMENSIONAL_ARRAY
#pragma endregion

#pragma region pair
#ifdef PAIR
	pair<int, int> p;
	int h, w;
	cin >> h >> w;
	p = make_pair(h, w);
	cout << p.first << " " << p.second << endl;
#endif // PAIR
#pragma endregion

#pragma region pairの配列
#ifdef ARRAY_OF_PAIR
	vector<pair<int, int>> v;
	v.push_back(make_pair(1, 3));
	v.push_back(make_pair(2, 2));
	v.push_back(make_pair(1, 3));
	for (auto& p : v) {
		cout << p.first << " " << p.second << endl;
	}
#endif // ARRAY_OF_PAIR
#pragma endregion

#pragma region バブルソート
#ifdef BUBBLE_SORT
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v.at(i);
	}
	BubbleSort(v);
	for (auto vv : v)
	{
		cout << vv << " ";
	}
	cout << endl;
#endif // BUBBLE_SORT
#pragma endregion


	return 0;
}