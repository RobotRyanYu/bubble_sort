#include<iostream>
#include"MergeSort.h"

int main() {

	int data[] = { 6, 4, 3, 7, 5, 1, 2, 9, 20, 15, 12 };
	int length = 11;

	MergeSort merge_sort(data, length);

	std::vector<int> result = merge_sort.AscendSort();

	for (int i = 0; i < result.size(); i++)
		std::cout << result[i] << ' ';
	std::cout << std::endl;

	std::getchar(); std::getchar();
	return 0;
}

