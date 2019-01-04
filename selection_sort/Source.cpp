#include<iostream>
#include <limits>
#include<vector>
using namespace std;

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

int main() {

	int data[] = { 6, 1, 7, 8, 9, 3, 5, 4, 2 };
	int length = 9;

	SelectionSort select_sort(data, length);

	std::vector<int> ascend_result = select_sort.AscendSort();

	for (int i = 0; i < ascend_result.size(); i++)
		std::cout << ascend_result[i] << ' ';
	std::cout << std::endl;

	std::vector<int> descend_result = select_sort.DescendSort();

	for (int i = 0; i < descend_result.size(); i++)
		std::cout << descend_result[i] << ' ';
	std::cout << std::endl;

	std::getchar(); std::getchar();
	return 0;
}

SelectionSort::SelectionSort(const int *input_data, const int length) {

	data.resize(length);

	for (int i = 0; i < length; i++)
		data[i] = input_data[i];
}

SelectionSort::SelectionSort(const std::vector<int> &input_data):data(input_data) {
}

std::vector<int> SelectionSort::AscendSort() {

	std::vector<int> sort_data = data;
	
	for (int i = 0; i < sort_data.size(); i++) {
		int min_val = std::numeric_limits<int>::max();
		int min_idx = 0;
		for (int j = i; j < sort_data.size(); j++) {
			if (min_val > sort_data[j]) {
				min_val = sort_data[j];
				min_idx = j;
			}
		}

		Swap(sort_data[i], sort_data[min_idx]);

	}

	return sort_data;
}

std::vector<int> SelectionSort::DescendSort() {

	std::vector<int> sort_data = data;

	for (int i = 0; i < sort_data.size(); i++) {
		int max_val = std::numeric_limits<int>::min();
		int max_idx = 0;
		for (int j = i; j < sort_data.size(); j++) {
			if (max_val < sort_data[j]) {
				max_val = sort_data[j];
				max_idx = j;
			}
		}

		Swap(sort_data[i], sort_data[max_idx]);
	}

	return sort_data;
}

void SelectionSort::Swap(int &val1, int &val2) {

	int temp = val1;
	val1 = val2;
	val2 = temp;

	return;
}