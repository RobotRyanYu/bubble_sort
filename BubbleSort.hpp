#pragma once
template<typename T>
void BubbleSort(const T input[], const int input_size, bool is_ascending, T* output) {

	//copy data from input
	for (int i = 0; i < input_size; i++)
		output[i] = input[i];

	//bubble sort
	for (int i = 0; i < input_size; i++) {
		for (int j = 0; j < input_size - i - 1; j++) {
			if (is_ascending) {
				if (output[j] > output[j + 1]) {
					T temp = output[j];
					output[j] = output[j + 1];
					output[j + 1] = temp;
				}
			}
			else {
				if (output[j] < output[j + 1]) {
					T temp = output[j];
					output[j] = output[j + 1];
					output[j + 1] = temp;
				}
			}
		}
	}

	return;
};