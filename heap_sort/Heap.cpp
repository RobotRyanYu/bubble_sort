#include "Heap.h"

Heap::Heap(const int *input_data, int arr_length) {
	heap_data.resize(arr_length);

	for (int i = 0; i < heap_data.size(); i++)
		heap_data[i] = input_data[i];

	Heapify();
}

Heap::Heap(const std::vector<int> &input_data) :heap_data(input_data) {
	Heapify();
}

Heap::~Heap() {};

void Heap::Heapify() {

	int length = heap_data.size();

	for (int i = length - 1; i >= 0; i--)
		BubbleDown(i);

	return;
}

void Heap::BubbleDown(int parent_index) {

	int heap_data_size = heap_data.size();
	int left_child_index = 2 * parent_index + 1;
	int right_child_index = 2 * parent_index + 2;

	//shows that parent index is a heap leaf
	if (left_child_index > heap_data_size - 1)
		return;

	int min_index = parent_index;
	if (heap_data[parent_index] > heap_data[left_child_index])
		min_index = left_child_index;

	if (right_child_index <= heap_data_size - 1 &&
		heap_data[min_index] > heap_data[right_child_index])
		min_index = right_child_index;

	if (min_index != parent_index) {
		Swap(parent_index, min_index);
		BubbleDown(min_index);
	}

	return;
}

void Heap::BubbleUp(int child_index) {

	if (child_index == 0) return;

	int parent_index = (child_index - 1) / 2;

	if (heap_data[parent_index] > heap_data[child_index]) {
		Swap(parent_index, child_index);
		BubbleUp(parent_index);
	}

	return;
}

void Heap::Swap(int parent_index, int min_index) {

	int temp = heap_data[parent_index];
	heap_data[parent_index] = heap_data[min_index];
	heap_data[min_index] = temp;

	return;
}

int Heap::GetMin() {
	return heap_data[0];
}

void Heap::DeleteMin() {

	if (heap_data.empty())
		return;

	heap_data[0] = heap_data[heap_data.size() - 1];
	heap_data.pop_back();

	BubbleDown(0);

	return;
}

void Heap::Insert(int value) {

	heap_data.push_back(value);

	BubbleUp(heap_data.size() - 1);

	return;
}