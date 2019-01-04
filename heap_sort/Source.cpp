#include"Heap.h"
#include <iostream>

int main() {

	int data[] = { 7, 3, 6, 4, 8, 4 };

	Heap* heap = new Heap(data, 6);
	
	std::cout << heap->GetMin();

	return 0;
}

