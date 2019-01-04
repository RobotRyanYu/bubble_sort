#ifndef HEAP_H
#define HEAP_H

#include <vector>

class Heap {
private:

	std::vector<int> heap_data;

private:

	void Swap(int parent_index, int min_index);

	void Heapify();

	void BubbleDown(int parent_index);

	void BubbleUp(int child_index);

public:

	Heap(const int *input_data, int arr_length);

	Heap(const std::vector<int>& input_data);

	~Heap();

	void Insert(int value);

	int GetMin();

	void DeleteMin();
};

#endif