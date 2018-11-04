#include <iostream>
#include "BubbleSort.hpp"

int main() {

	const int arr_size = 6;
	double input[arr_size] = { 10, 2, 7, 0, -1, 20};
	double* output = new double[arr_size];

	BubbleSort<double>(input, arr_size, false, output);

	for (int i = 0; i < arr_size; i++)
		std::cout << output[i] << ' ';
	std::cout << std::endl;

	std::getchar(); std::getchar();
	return 0;
}