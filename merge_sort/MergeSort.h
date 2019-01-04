#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include<vector>

class MergeSort {
private:

	std::vector<int> data;

private:

	void Split(std::vector<int> &array, const int left_idx, const int right_idx, bool is_ascend);

	void Sort(std::vector<int> &array, const int left_idx, const int mid_idx, const int right_idx, bool is_ascend);

public:

	MergeSort(const int *input_data, const int length);

	MergeSort(const std::vector<int> &input_data);

	std::vector<int> AscendSort();

	std::vector<int> DescendSort();
};

#endif