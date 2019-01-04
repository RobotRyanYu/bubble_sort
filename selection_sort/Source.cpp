#include<iostream>
#include"SelectionSort.h"

int main() {

	int data[] = { 6, 1, 7, 8, 9, 3, 5, 4, 2, 5 };
	int length = 10;

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

