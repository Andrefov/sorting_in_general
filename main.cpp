#include <iostream>
#include <time.h>
#define size 11






// link to pseudo https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm#
void sortBySelect(int* p) { 
	int min;
	for (int i = 0; i < size-1; i++) {
		min = i;
		for (int j = i + 1; j < size; j++) {
			if (p[j] < p[min]) {
				min = j;
			}
		}
		if (min != i) {
			int temp = p[min];
			p[min] = p[i];
			p[i] = temp;
		}
	}
}

// https://fullyunderstood.com/pseudocodes/bubble-sort/
void bubbleSort(int* p) {
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}
// https://www.linkedin.com/pulse/basic-algorithms-insertion-sort-pseudo-code-loop-invariant-davis
void insertionSort(int* p) {
	for (int i = 0; i < size; i++) {
		int insertion = p[i];
		int j = i - 1;
		while (j >= 0 && p[j] > insertion) {
			p[j + 1] = p[j];
			j = j - 1;
		}
		p[j + 1] = insertion;
	}
}


int main() {
	int arr[size]{ 2,10,7,9,40,22,6,5,8,11,8 };
	int* p = &arr[0];
	//sortBySelect(p);
	//bubbleSort(p);
	//insertionSort(p);
}



