#include<iostream>
#include"MergeSort.h"

int main() {

	int data[] = { 6, 4, 9, 3, 7, 5, 1, 2, 5, 9, 20, 15, 12 };
	int length = 13;

	MergeSort merge_sort(data, length);

	std::vector<int> result = merge_sort.DescendSort();

	for (int i = 0; i < result.size(); i++)
		std::cout << result[i] << ' ';
	std::cout << std::endl;

	std::getchar(); std::getchar();
	return 0;
}

