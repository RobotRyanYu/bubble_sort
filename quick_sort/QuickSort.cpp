#include"QuickSort.h"

QuickSort::QuickSort(const int *input_data, const int input_length) {

	data.resize(input_length);

	for (int i = 0; i < input_length; i++)
		data[i] = input_data[i];
}

QuickSort::QuickSort(const std::vector<int> &input_data) : data(input_data) {
}

QuickSort::~QuickSort() {};

std::vector<int> QuickSort::AscendSort() {

	std::vector<int> sort_data = data;

	Sort(sort_data, 0, sort_data.size() - 1, true);

	return sort_data;
}

std::vector<int> QuickSort::DescendSort() {

	std::vector<int> sort_data = data;

	Sort(sort_data, 0, sort_data.size() - 1, false);

	return sort_data;
}

void QuickSort::Sort(std::vector<int> &input_data, const int left_bound, const int right_bound, bool is_ascend) {

	if (left_bound >= right_bound - 1)
		return;

	int left_index = left_bound;
	int ref_val = input_data[right_bound];
	int swap_idx = left_index - 1;

	if (is_ascend) {
		for (int i = left_index; i <= right_bound - 1; i++) {
			if (input_data[i] <= ref_val) {
				swap_idx++;
				Swap(input_data[swap_idx], input_data[i]);
			}
		}

		Swap(input_data[swap_idx + 1], input_data[right_bound]);
		Sort(input_data, left_bound, swap_idx, true);
		Sort(input_data, swap_idx + 1, right_bound, true);
	}

}

void QuickSort::Swap(int &val1, int &val2) {

	int temp = val1;
	val1 = val2;
	val2 = temp;

	return;
}