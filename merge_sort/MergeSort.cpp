#include "MergeSort.h"

MergeSort::MergeSort(const int *input_data, const int length) {

	data.resize(length);

	for (int i = 0; i < data.size(); i++)
		data[i] = input_data[i];

	return;
}

MergeSort::MergeSort(const std::vector<int> &input_data) :data(input_data) {
}

std::vector<int> MergeSort::AscendSort() {

	std::vector<int> sort_data = data;

	Split(sort_data, 0, sort_data.size() - 1, true);

	return sort_data;
}

std::vector<int> MergeSort::DescendSort() {

	std::vector<int> sort_data = data;

	Split(sort_data, 0, sort_data.size() - 1, false);

	return sort_data;
}

void MergeSort::Split(std::vector<int> &array, const int left_idx, const int right_idx, bool is_ascend) {

	if (left_idx < right_idx) {
		int mid_idx = left_idx + (right_idx - left_idx) / 2;

		Split(array, left_idx, mid_idx, is_ascend);
		Split(array, mid_idx + 1, right_idx, is_ascend);

		Sort(array, left_idx, mid_idx, right_idx, is_ascend);
	}

}

void  MergeSort::Sort(std::vector<int> &array, const int left_idx, const int mid_idx, const int right_idx, bool is_ascend) {

	std::vector<int> left_arr(mid_idx - left_idx + 1), right_arr(right_idx - mid_idx);

	for (int i = 0, j = left_idx; i < left_arr.size(); i++)
		left_arr[i] = array[j++];

	for (int i = 0, j = mid_idx + 1; i < right_arr.size(); i++)
		right_arr[i] = array[j++];

	int i, j, k;
	i = j = 0;
	k = left_idx;
	while (i <= left_arr.size() - 1 && j <= right_arr.size() - 1) {
		if (left_arr[i] < right_arr[j])
			array[k++] = (is_ascend) ? left_arr[i++] : right_arr[j++];
		else if (left_arr[i] > right_arr[j])
			array[k++] = (is_ascend) ? right_arr[j++] : left_arr[i++];
		else {
			array[k++] = left_arr[i++];
			array[k++] = right_arr[j++];
		}
	}

	if (i <= left_arr.size() - 1 && j > right_arr.size() - 1) {
		while (i <= left_arr.size() - 1) {
			array[k++] = left_arr[i++];
		}
	}
	else {
		while (j <= right_arr.size() - 1) {
			array[k++] = right_arr[j++];
		}
	}

	return;
}