#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include<vector>
#include<limits>

class SelectionSort {
private:

	std::vector<int> data;

private:

	void Swap(int &val1, int &val2);

public:

	SelectionSort(const int *input_data, const int length);
	SelectionSort(const std::vector<int> &input_data);

	std::vector<int> AscendSort();
	std::vector<int> DescendSort();
};

#endif