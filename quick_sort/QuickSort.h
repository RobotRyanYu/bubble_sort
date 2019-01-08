#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include<vector>

class QuickSort {
private:

	std::vector<int> data;

	void Sort(std::vector<int> &input_data, const int left_bound, const int right_bound, bool is_ascend);

	void Swap(int &val1, int &val2);

public:

	QuickSort(const int *input_data, const int input_length);

	QuickSort(const std::vector<int> &input_data);

	~QuickSort();

	std::vector<int> AscendSort();
	std::vector<int> DescendSort();
}; 

#endif
