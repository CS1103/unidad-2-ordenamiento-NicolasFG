#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include "Mergue_Sort.h"
#include "QuickSort.h"

using namespace std;
int main() {
    vector<int> a = {3, 0, 7, 5, 7, 8, 3, 1};
    Mergue_Sort::printArray(Mergue_Sort::mergeSort<vector<int>>(a.begin(), a.end()));
        return 0;
}
