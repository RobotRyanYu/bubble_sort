#include <iostream>
#include "BubbleSort.hpp"

int main() {

	//define the size of one dimensional array 
	//this has to be const int for array initialization
	const int arr_size = 6;

	//randomly place some numbers into the array
	double input[arr_size] = { 10, 2, 7, 0, -1, 20};

	//initialize the output size to be the same as input array
	double* output = new double[arr_size];

	//this is the bubble sort function
	BubbleSort<double>(input, arr_size, false, output);

	//print out the sorted output
	for (int i = 0; i < arr_size; i++)
		std::cout << output[i] << ' ';
	std::cout << std::endl;

	//freeze the console screen until we have pressed the keyboard  
	std::getchar(); std::getchar();

	return 0;
}