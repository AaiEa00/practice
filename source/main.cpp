#include <utility>
#include <Windows.h>
#include "Sort.h"
#include "DataStructure.h"
#define SORT
//#define DATA_STRUCTURE

int main(void) {
    SetConsoleOutputCP(65001);

#ifdef SORT
    // 配列作成
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto& i: v) std::cin >> i;

    //BubbleSort(v);

    //SelectionSort(v);

    InsertionSort(v);

#endif // SORT

#ifdef DATA_STRUCTURE
    BinarySearchTree();
#endif // DATA_STRUCTURE


    return 0;
}
